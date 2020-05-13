//
//  NathAdsInterstitial.h

//
//  Created by NathAds on 2019/6/14.
//  Copyright © 2019 NathAds. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NathAdsAdError.h"

NS_ASSUME_NONNULL_BEGIN

@protocol NathAdsInterstitialDelegate;


/// An interstitial ad. This is a full-screen advertisement shown at natural transition points in
/// your application such as between game levels or news stories.
@interface NathAdsInterstitial : NSObject


/// Initializes an interstitial with an ad unit created on the Sdk website. Create a new ad unit
/// for every unique placement of an ad in your application. Set this to the ID assigned for this
/// placement. Ad units are important for targeting and statistics.
- (instancetype _Nonnull )initWithAdUnitId:(NSString *_Nullable)adUnitId;

#pragma mark Pre-Request


/// Optional delegate object that receives state change notifications from this NathAdsInterstitial.
@property(nonatomic, weak, nullable) id<NathAdsInterstitialDelegate> delegate;

@property(nonatomic) CGFloat bidFloor;

#pragma mark Making an Ad Request

/// Makes an interstitial ad request. Additional targeting options can be supplied with a request
/// object. Only one interstitial request is allowed at a time.
///
/// This is best to do several seconds before the interstitial is needed to preload its content.
/// Then when transitioning between view controllers show the interstital with
/// presentFromViewController.
- (void)loadAd;

#pragma mark Post-Request

/// Returns YES if the interstitial is ready to be displayed. The delegate's
/// interstitialAdDidReceiveAd: will be called after this property switches from NO to YES.
@property(nonatomic, readonly) BOOL isReady;


/// Presents the interstitial ad which takes over the entire screen until the user dismisses it.
/// This has no effect unless isReady returns YES and/or the delegate's interstitialAdDidLoad:
/// has been received.
///
/// Set rootViewController to the current view controller at the time this method is called. If your
/// application does not use view controllers pass in nil and your views will be removed from the
/// window to show the interstitial and restored when done. After the interstitial has been removed,
/// the delegate's interstitialDidDismissScreen: will be called.
- (void)presentFromRootViewController:(nonnull UIViewController *)rootViewController;

@end

@protocol NathAdsInterstitialDelegate <NSObject>

@optional

#pragma mark Ad Request Lifecycle Notifications

/// Called when an interstitial ad request succeeded. Show it at the next transition point in your
/// application such as when transitioning between view controllers.
- (void)interstitialAdDidLoad:(NathAdsInterstitial *)ad;

/// Called when an interstitial ad request completed without an interstitial to
/// show. This is common since interstitials are shown sparingly to users.
- (void)interstitial:(NathAdsInterstitial *)ad didLoadedFailWithError:(NathAdsAdError *)error;

#pragma mark Display-Time Lifecycle Notifications

/// Called just before presenting an interstitial. After this method finishes the interstitial will
/// animate onto the screen. Use this opportunity to stop animations and save the state of your
/// application in case the user leaves while the interstitial is on screen (e.g. to visit the App
/// Store from a link on the interstitial).
- (void)interstitialWillPresentScreen:(NathAdsInterstitial *)ad;

/// Called when |ad| did to present.
- (void)interstitialDidPresentScreen:(NathAdsInterstitial *)ad;

/// Called before the interstitial is to be animated off the screen.
- (void)interstitialWillDismissScreen:(NathAdsInterstitial *)ad;

/// Called just after dismissing an interstitial and it has animated off the screen.
- (void)interstitialDidDismissScreen:(NathAdsInterstitial *)ad;

/// Called just before the application will background or terminate because the user clicked on an
/// ad that will launch another application (such as the App Store). The normal
/// UIApplicationDelegate methods, like applicationDidEnterBackground:, will be called immediately
/// before this.
- (void)interstitialWillLeaveApplication:(NathAdsInterstitial *)ad;

@end

NS_ASSUME_NONNULL_END
