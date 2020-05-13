//
//  TXADMixViewAdDelegate.h
//  Created by TaurusXAds on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADMixViewAd;

/*!
Delegate methods for receiving TXADMixViewAd state change messages such as ad request status
*/
@protocol TXADMixViewAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADMixViewAd
@param mixviewAd TXADMixViewAd object
*/
@optional
- (void)txAdMixViewAdDidReceiveAd:(TXADMixViewAd *)mixViewAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADMixViewAd
@param mixviewAd TXADMixViewAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdMixViewAd:(TXADMixViewAd *)mixViewAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a mixview ad will be presented in screen view
@see TXADMixViewAd
@param mixviewAd TXADMixViewAd object
*/
@optional
- (void)txAdMixViewAdWillPresentScreen:(TXADMixViewAd *)mixViewAd;

/*!
@brief Tells the delegate that a mixview ad will be dismissed
@see TXADMixViewAd
@param mixviewAd TXADMixViewAd object
*/
@optional
- (void)txAdMixViewAdDidDismissScreen:(TXADMixViewAd *)mixViewAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADMixViewAd
@param mixviewAd TXADMixViewAd object
*/
@optional
- (void)txAdMixViewAdWillLeaveApplication:(TXADMixViewAd *)mixViewAd;

@end
