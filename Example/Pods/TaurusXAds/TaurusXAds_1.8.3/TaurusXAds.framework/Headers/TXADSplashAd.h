//
//  TXADSplashAd.h
//  TXADSdk
//
//  Created by TaurusXAds on 2019/8/15.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADILineItem.h"
#import "TXADSplashAdDelegate.h"
#import "TXADNetworkConfigs.h"

NS_ASSUME_NONNULL_BEGIN

/*!
@class TXADSplashAd
@abstract TXAD splash Ad class
*/
@interface TXADSplashAd : NSObject

/*!
@property adUnitId
@abstract The splash's ad unit ID
*/
@property(nonatomic, strong, readonly) NSString *adUnitId;

/*!
@property delegate
@abstract Optional delegate object that receives state change notifications from this TXADSplashAd
*/
@property(nonatomic, weak, nullable) id<TXADSplashAdDelegate> delegate;

/*!
@method initWithAdUnitId
@abstract initilize splash Ad
@param adUnitId splash Ad ID get from SDK dashboard
@param uiWindow  window for show splash ad
@result TXADSplashAd instance
*/
-(id)initWithAdUnitId:(NSString *)adUnitId uiWindow:(UIWindow *)uiWindow;

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
@method setNetworkConfigs
@abstract set network configs
@param configs TXADNetworkConfigs
*/
- (void)setNetworkConfigs:(TXADNetworkConfigs *)configs;

/*!
@method loadAd
@abstract Makes an splash ad request.
*/
-(void)loadAd;

/*!
@method isReady
@abstract Returns YES if the splash is ready to be displayed. The delegate's  SplashAdDidReceiveAd: will be called after this property switches from NO to YES.
@result YES: ad is ready, NO: no ad ready
*/
-(BOOL)isReady;

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
-(void)destroy;

@end

NS_ASSUME_NONNULL_END
