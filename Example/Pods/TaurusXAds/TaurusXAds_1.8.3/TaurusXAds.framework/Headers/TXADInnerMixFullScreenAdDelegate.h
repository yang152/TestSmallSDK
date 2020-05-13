//
//  TXADInnerMixFullScreenAdDelegate.h
//  Created by TaurusXAds on 2019/10/20.
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"

@protocol TXADInnerMixFullScreenAdDelegate<NSObject>

- (void)mixFullScreenAdDidReceiveAd:(NSString *)lineItemId;
- (void)mixFullScreenAd:(NSString *)lineItemId didFailToReceiveAdWithError:(TXADAdError *)adError;
- (void)mixFullScreenAdWillPresentScreen:(NSString *)lineItemId;
- (void)mixFullScreenAdDidDismissScreen:(NSString *)lineItemId;
- (void)mixFullScreenAdWillLeaveApplication:(NSString *)lineItemId;

@end
