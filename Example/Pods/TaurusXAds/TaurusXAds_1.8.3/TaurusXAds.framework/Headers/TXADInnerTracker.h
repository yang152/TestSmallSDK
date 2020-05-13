//
//  TXADInnerTracker.h
//  Created by TaurusXAds on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "TXADTrackerDelegate.h"
#import "TXADILineItem.h"
#import "TXADAdUnit.h"
#import "TXADTypes.h"
#import "TXADAdError.h"
#import "TXADAdContentInfo.h"

/*!
Track loading ad process of every LineItem.
*/
@interface TXADInnerTracker : NSObject

+ (TXADInnerTracker *)getInstance;

- (void)trackAdRequest:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackAdLoaded:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;

- (void)trackAdCallShow:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId adContentInfo:(TXADAdContentInfo *)adContentInfo;
// 为了兼容 Mediation_GDT 旧版本的 Splash，需要保留此方法
- (void)trackAdCallShow:(TXADILineItem *)lineItem adContentInfo:(TXADAdContentInfo *)adContentInfo;

- (void)trackAdShown:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackAdClicked:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId adContentInfo:(TXADAdContentInfo *)adContentInfo;
- (void)trackAdClosed:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackAdFailedToLoad:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId adError:(TXADAdError *)adError;
- (void)trackVideoStarted:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackVideoCompleted:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackRewarded:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;
- (void)trackRewardFailed:(TXADILineItem *)lineItem lineItemRequestId:(NSString *)lineItemRequestId;

- (void)trackAdUnitRequest:(TXADAdUnit *)adUnit;
- (void)trackAdUnitLoaded:(TXADAdUnit *)adUnit;
- (void)trackAdUnitCallShow:(TXADAdUnit *)adUnit adContentInfo:(TXADAdContentInfo *)adContentInfo;;
- (void)trackAdUnitShown:(TXADAdUnit *)adUnit;
- (void)trackAdUnitClicked:(TXADAdUnit *)adUnit adContentInfo:(TXADAdContentInfo *)adContentInfo;;
- (void)trackAdUnitClosed:(TXADAdUnit *)adUnit;
- (void)trackAdUnitFailedToLoad:(TXADAdUnit *)adUnit adError:(TXADAdError *)adError;
- (void)trackAdUnitVideoStarted:(TXADAdUnit *)adUnit;
- (void)trackAdUnitVideoCompleted:(TXADAdUnit *)adUnit;
- (void)trackAdUnitRewarded:(TXADAdUnit *)adUnit;
- (void)trackAdUnitRewardFailed:(TXADAdUnit *)adUnit;

@end
