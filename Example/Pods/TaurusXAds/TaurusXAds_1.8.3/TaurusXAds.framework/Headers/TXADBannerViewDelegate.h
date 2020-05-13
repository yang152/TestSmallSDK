//
//  TXADBannerViewDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
@class TXADBannerView;

/*!
Delegate methods for receiving TXADBannerView state change messages such as ad request status
*/
@protocol TXADBannerViewDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad.
@see TXADBannerView
@param bannerView TXADBannerView object
*/
@optional
- (void)txAdBannerDidReceiveAd:(TXADBannerView *)bannerView;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADBannerView
@param bannerView TXADBannerView object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdBanner:(TXADBannerView *)bannerView didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that a banner ad will be presented in screen view
@see TXADBannerView
@param bannerView TXADBannerView object
*/
@optional
- (void)txAdBannerWillPresentScreen:(TXADBannerView *)bannerView;

/*!
@brief Tells the delegate that a banner ad will be dismissed
@see TXADBannerView
@param bannerView TXADBannerView object
*/
@optional
- (void)txAdBannerDidDismissScreen:(TXADBannerView *)bannerView;

/*!
@brief Tells the delegate that the user click will open another app, such as banner ad be clicked
@see TXADBannerView
@param bannerView TXADBannerView object
*/
@optional
- (void)txAdBannerWillLeaveApplication:(TXADBannerView *)bannerView;

@end
