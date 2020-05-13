//
//  TXADInterstitialAdDelegate.h
//

#import <Foundation/Foundation.h>
#import "TXADAdError.h"

@protocol TXADInnerInterstitialAdDelegate<NSObject>

- (void)interstitialDidReceiveAd:(NSString *)lineItemId;
- (void)interstitial:(NSString *)lineItemId didFailToReceiveAdWithError:(TXADAdError *)adError;
- (void)interstitialWillPresentScreen:(NSString *)lineItemId;
- (void)interstitialDidDismissScreen:(NSString *)lineItemId;
- (void)interstitialWillLeaveApplication:(NSString *)lineItemId;

@end
