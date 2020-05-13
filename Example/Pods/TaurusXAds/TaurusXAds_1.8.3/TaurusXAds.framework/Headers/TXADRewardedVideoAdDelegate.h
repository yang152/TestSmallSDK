//
//  TXADRewardedVideoAdDelegate.h

//
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
#import "TXADRewardItem.h"
@class TXADRewardedVideoAd;

/*!
Delegate methods for receiving TXADRewardedVideoAd state change messages such as ad request status
*/
@protocol TXADRewardedVideoAdDelegate<NSObject>

/*!
@brief Tells the delegate that an ad request successfully received an ad
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideoDidReceiveAd:(TXADRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the rewarded video ad did  open.
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideoDidOpen:(TXADRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the user click will open another app, such as ad be clicked
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideoWillLeaveApplication:(TXADRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the rewarded video ad close
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideoDidClose:(TXADRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that an ad request failed. The failure is normally due to network  connectivity or ad availablility (i.e., no fill).
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
@param adError TXADAdError load failed error info
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didFailToReceiveAdWithError:(TXADAdError *)adError;

/*!
@brief Tells the delegate that the the rewarded video ad  start play
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideoDidStart:(TXADRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the the rewarded video ad  start has been play completed
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideoDidComplete:(TXADRewardedVideoAd *)rewardedVideoAd;

/*!
@brief Tells the delegate that the the rewarded video ad  did earn rewarded
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideo:(TXADRewardedVideoAd *)rewardedVideoAd didReward:(TXADRewardItem *)item;

/*!
@brief Tells the delegate that the the rewarded video ad  did not earn rewarded
@see TXADRewardedVideoAd
@param rewardedVideoAd TXADRewardedVideoAd object
*/
@optional
- (void)txAdRewardedVideoDidFailedToReward:(TXADRewardedVideoAd *)rewardedVideoAd;

@end
