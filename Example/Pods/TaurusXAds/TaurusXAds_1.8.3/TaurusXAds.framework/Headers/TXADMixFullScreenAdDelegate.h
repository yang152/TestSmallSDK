//
//  TXADMixFullScreenAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADMixFullScreenAd;

/*!
Delegate methods for receiving TXADMixFullScreenAd state change messages such as ad request status
*/
@protocol TXADMixFullScreenAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAdDidReceiveAd:(TXADMixFullScreenAd *)mixFullScreenAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdMixFullScreenAd:(TXADMixFullScreenAd *)mixFullScreenAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a mixFullScreen ad will be presented in full screen view.
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAdWillPresentScreen:(TXADMixFullScreenAd *)mixFullScreenAd;

/*!
@brief Tells the delegate that a mixFullScreen ad will be dismissed from full screen
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAdDidDismissScreen:(TXADMixFullScreenAd *)mixFullScreenAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADMixFullScreenAd
@param mixFullScreenAd TXADMixFullScreenAd object
*/
@optional
- (void)txAdMixFullScreenAdWillLeaveApplication:(TXADMixFullScreenAd *)mixFullScreenAd;

@end
