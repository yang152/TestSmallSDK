//
//  TXADRewardedVideoAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"
#import "TXADRewardItem.h"

@protocol TXADInnerRewardedVideoAdDelegate<NSObject>

- (void)rewardedVideoDidReceiveAd:(NSString *)lineItemId;
- (void)rewardedVideoDidOpen:(NSString *)lineItemId;
- (void)rewardedVideoWillLeaveApplication:(NSString *)lineItemId;
- (void)rewardedVideoDidClose:(NSString *)lineItemId;
- (void)rewardedVideo:(NSString *)lineItemId didFailToReceiveAdWithError:(TXADAdError *)adError;
- (void)rewardedVideoDidStart:(NSString *)lineItemId;
- (void)rewardedVideoDidComplete:(NSString *)lineItemId;
- (void)rewardedVideo:(NSString *)lineItemId didReward:(TXADRewardItem *)item;
- (void)rewardedVideoDidFailedToReward:(NSString *)lineItemId;

@end
