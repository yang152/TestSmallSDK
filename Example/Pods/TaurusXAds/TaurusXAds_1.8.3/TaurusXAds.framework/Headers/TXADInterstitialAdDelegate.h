//
//  TXADInterstitialAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADInterstitialAd;

/*!
Delegate methods for receiving TXADInterstitialAd state change messages such as ad request status
*/
@protocol TXADInterstitialAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitialDidReceiveAd:(TXADInterstitialAd *)interstitialAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdInterstitial:(TXADInterstitialAd *)interstitialAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a interstitial ad will be presented in full screen view.
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitialWillPresentScreen:(TXADInterstitialAd *)interstitialAd;

/*!
@brief Tells the delegate that a interstitial ad will be dismissed from full screen
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitialDidDismissScreen:(TXADInterstitialAd *)interstitialAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADInterstitialAd
@param interstitialAd TXADInterstitialAd object
*/
@optional
- (void)txAdInterstitialWillLeaveApplication:(TXADInterstitialAd *)interstitialAd;

@end
