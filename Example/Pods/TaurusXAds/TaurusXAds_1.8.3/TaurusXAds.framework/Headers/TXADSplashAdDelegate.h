//
//  TXADSplashAdDelegate.h
//  TXADSdk
//
//  Created by TaurusXAds on 2019/8/15.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADSplashAd;

/*!
Delegate methods for receiving TXADSplashAd state change messages such as ad request status
*/
@protocol TXADSplashAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADSplashAd
@param splashAd TXADSplashAd object
*/
@optional
- (void)txAdSplashDidReceiveAd:(TXADSplashAd *)splashAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADSplashAd
@param splashAd TXADSplashAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdSplash:(TXADSplashAd *)splashAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a splash ad will be presented in screen view
@see TXADSplashAd
@param splashAd TXADSplashAd object
*/
@optional
- (void)txAdSplashWillPresentScreen:(TXADSplashAd *)splashAd;

/*!
@brief Tells the delegate that a splash ad will be dismissed
@see TXADSplashAd
@param splashAd TXADSplashAd object
*/
@optional
- (void)txAdSplashDidDismissScreen:(TXADSplashAd *)splashAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADSplashAd
@param splashAd TXADSplashAd object
*/
@optional
- (void)txAdSplashWillLeaveApplication:(TXADSplashAd *)splashAd;

@end
