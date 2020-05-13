//
//  NathAdsNativeAd.h

//
//  Created by NathAds on 2019/6/18.
//  Copyright © 2019 NathAds. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NathAdsUnifiedNative.h"
#import "NathAdsAdError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol NathAdsNativeAdDelegate;

@interface NathAdsNativeAd : NSObject

@property (nonatomic, readonly)NSString *adUnitID;

/// Initializes an native with an ad unit created on the AdMob website. Create a new ad unit
/// for every unique placement of an ad in your application. Set this to the ID assigned for this
/// placement. Ad units are important for targeting and statistics.
- (id)initWithAdUnitId:(NSString *)adUnitId;

#pragma mark Pre-Request


/// Optional delegate object that receives state change notifications from this NathAdsNativeAd.
@property(nonatomic, weak, nullable) id<NathAdsNativeAdDelegate> delegate;

@property(nonatomic) CGFloat bidFloor;

/// Makes an native ad request. Additional targeting options can be supplied with a request
/// object. Only one naive request is allowed at a time.
///
/// This is best to do several seconds before the native is needed to preload its content.
/// Then when transitioning between view controllers show the interstital with
/// presentFromViewController.
- (void)loadAd;

/// Returns YES if the native is ready to be displayed. The delegate's
/// nativeAdDidReceiveAd: will be called after this property switches from NO to YES.
@property(nonatomic, readonly) BOOL isReady;

@property(nonatomic, strong, readonly) NathAdsUnifiedNative *nativeData;


- (void) registerViewForInteraction:(UIView *)adview clickableViews: (NSArray<UIView *> *) viewList;


@end

/// Identifies native ad assets.
@protocol NathAdsNativeAdDelegate <NSObject>

@optional

/// Called when an interstitial ad request succeeded. Show it at the next transition point in your
/// application such as when transitioning between view controllers.
- (void)nativeAdDidLoad:(NathAdsNativeAd *)ad;

/// Called when an interstitial ad request completed without an interstitial to
/// show. This is common since interstitials are shown sparingly to users.
- (void)native:(NathAdsNativeAd *)ad didLoadedFailWithError:(NathAdsAdError *)error;

#pragma mark Click-Time Lifecycle Notifications

/// Called just before presenting the user a full screen view, such as a browser, in response to
/// clicking on an ad. Use this opportunity to stop animations, time sensitive interactions, etc.
///
/// Normally the user looks at the ad, dismisses it, and control returns to your application with
/// the nativeAdDidDismissScreen: message. However, if the user hits the Home button or clicks on an
/// App Store link, your application will end. The next method called will be the
/// applicationWillResignActive: of your UIApplicationDelegate object.Immediately after that,
/// nativeAdWillLeaveApplication: is called.
- (void)nativeAdWillPresentScreen:(NathAdsNativeAd *)nativeAd;

/// Called just before dismissing a full screen view.
- (void)nativeAdWillDismissScreen:(NathAdsNativeAd *)nativeAd;

/// Called just after dismissing a full screen view. Use this opportunity to restart anything you
/// may have stopped as part of nativeAdWillPresentScreen:.
- (void)nativeAdDidDismissScreen:(NathAdsNativeAd *)nativeAd;

/// Called just before the application will go to the background or terminate due to an ad action
/// that will launch another application (such as the App Store). The normal UIApplicationDelegate
/// methods, like applicationDidEnterBackground:, will be called immediately before this.
- (void)nativeAdWillLeaveApplication:(NathAdsNativeAd *)nativeAd;

@end

NS_ASSUME_NONNULL_END
