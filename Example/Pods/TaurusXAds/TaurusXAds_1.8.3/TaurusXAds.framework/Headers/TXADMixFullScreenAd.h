#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADTypes.h"
#import "TXADMixFullScreenAdDelegate.h"
#import "TXADNetworkConfigs.h"
#import "TXADNativeAdLayout.h"
#import "TXADInnerMixFullScreenAdDelegate.h"
#import "TXADCLConfig.h"
#import "TXADILineItem.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class TXADMixFullScreenAd
@abstract TXAD MixFullScreen Ad class
*/
@interface TXADMixFullScreenAd : NSObject<TXADInnerMixFullScreenAdDelegate>

/*!
@property adUnitId
@abstract The mixFullScreen's ad unit ID
*/
@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
/*!
@method initWithAdUnitId
@abstract initilize mixFullScreen Ad
@param adUnitId mixFullScreen Ad ID in SDK platform
@result TXADMixFullScreenAd instance
*/
- (TXADMixFullScreenAd *)initWithAdUnitId:(NSString *)adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this TXADMixFullScreenAd
*/
@property(nonatomic, weak) id<TXADMixFullScreenAdDelegate> delegate;
/// iOS End

/*!
@method setBannerAdSize
@abstract Set adSize of Banner in MixFullScreenAd. (Optional). Use the adSize on web config priority. You can set different sizes according to the phone size. (Phone, tablet)
@param adSize TXADBannerAdSize
*/
- (void)setBannerAdSize:(TXADBannerAdSize)adSize;

/*!
@method setExpressAdSize
@abstract Set adSize of express ad.
@param adSize TXADBannerAdSize
*/
- (void)setExpressAdSize:(CGSize)adSize;

/*!
@method setMuted
@abstract Set whether video play muted, mute by default.
@param muted true-play video muted; false-play video sound
*/
- (void)setMuted:(BOOL)muted;

/*!
@method setNativeAdLayout
@abstract set native ad layout to native
@param layout TXADNativeAdLayout
*/
- (void)setNativeAdLayout:(TXADNativeAdLayout *)layout;

/*!
@method setNetworkConfigs
@abstract set network configs
@param configs TXADNetworkConfigs
*/
- (void)setNetworkConfigs:(TXADNetworkConfigs *)configs;

/*!
 @method setCL
 @abstract set cycle load model
 @param cacheCount NSInteger cached ad count
 */
- (void)setCL:(int)cacheCount;

/*!
 @method setCLConfig
 @abstract set cycle load model
 @param config TXADCLConfig
 */
- (void)setCLConfig:(TXADCLConfig *)config;

/*!
@method loadAd
@abstract Makes an mixFullScreen ad request.
*/
- (void)loadAd;

/*!
@method isReady
@abstract Returns YES if the mixFullScreen is ready to be displayed. The delegate's  mixFullScreenAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
- (BOOL)isReady;

/*!
@method getReadyLineItem
@abstract Return loaded LineItem of max priority and eCPM.
@result TXADILineItem
*/
- (TXADILineItem *)getReadyLineItem;

/*!
@method destroy
@abstract destory the ad request.
*/
- (void)destroy;

/*!
@method showFromViewController
@abstract Presents the mixFullScreen ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the mixFullScreen and restored when done. After the mixFullScreen has been removed, the delegate's mixFullScreenDidDismissScreen: will be called.
*/
- (void)showFromViewController:(nullable UIViewController *)viewController;

/*!
@method showFromViewController
@abstract Presents the mixFullScreen ad which takes over the entire screen until the user dismisses it
@param viewController Set rootViewController to the current view controller at the time this method is called. If your application does not use view controllers pass in nil and your views will be removed from the window to show the mixFullScreen and restored when done. After the mixFullScreen has been removed, the delegate's mixFullScreenDidDismissScreen: will be called.
@param layout TXADNativeAdLayout
*/
- (void)showFromViewController:(nullable UIViewController *)viewController nativeAdLayout:(TXADNativeAdLayout *)layout;


// Unity Start
- (id)initWithMixFullScreenClientReference:(TXADTypeMixFullScreenClientRef _Nullable* _Nullable)mixFullScreenClient adUnitId:(NSString *)adUnitId;
/// A reference to the Unity MixFullScreen client.
@property(nonatomic, assign) TXADTypeMixFullScreenClientRef _Nullable* _Nullable mixFullScreenClient;
/// The ad callback into Unity.
@property(nonatomic, assign) TXADMixFullScreenAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) TXADMixFullScreenAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) TXADMixFullScreenAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) TXADMixFullScreenAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) TXADMixFullScreenAdWillLeaveApplicationCallback willLeaveCallback;
// Unity End

// Unity Start
- (void)showUnity;
// Unity End

@end

NS_ASSUME_NONNULL_END
