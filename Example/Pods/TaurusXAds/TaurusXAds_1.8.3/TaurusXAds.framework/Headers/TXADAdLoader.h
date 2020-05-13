//
//  TXADAdLoader.h
//  TaurusXAds
//
//  Created by TXAD on 2020/1/9.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TXADBannerView.h"
#import "TXADFeedList.h"
#import "TXADInterstitialAd.h"
#import "TXADMixViewAd.h"
#import "TXADMixFullScreenAd.h"
#import "TXADNativeAd.h"
#import "TXADRewardedVideoAd.h"
#import "TXADSplashAd.h"

NS_ASSUME_NONNULL_BEGIN

/*!
Class contains API for adLoader
*/
@interface TXADAdLoader : NSObject

+ (TXADBannerView *)getBannerAdView:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
+ (TXADNativeAd *)getNativeAd:(NSString *)adUnitId;
+ (TXADInterstitialAd *)getInterstitialAd:(NSString *)adUnitId;
+ (TXADRewardedVideoAd *)getRewardedVideoAd:(NSString *)adUnitId;
+ (TXADSplashAd *)getSplashAd:(NSString *)adUnitId uiWindow:(UIWindow *)window;
+ (TXADFeedList *)getFeedListAd:(NSString *)adUnitId;
+ (TXADMixViewAd *)getMixViewAd:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
+ (TXADMixFullScreenAd *)getMixFullScreenAd:(NSString *)adUnitId;

+ (void)destoryAd:(NSString *)adUnitId;

/**
* BannerAdView
*/
+ (void)loadBanner:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
+ (BOOL)isBannerReady:(NSString *)adUnitId;
+ (void)showBanner:(NSString *)adUnitId container:(UIView *)container;

/**
* NativeAd
*/
+ (void)loadNativeAd:(NSString *)adUnitId;
+ (void)showNativeAd:(NSString *)adUnitId container:(UIView *)container nativeAdLayout:(TXADNativeAdLayout * _Nullable)layout;

+ (void)loadNativeAd:(NSString *)adUnitId nativeAdLayout:(TXADNativeAdLayout * _Nullable)layout;
+ (void)showNativeAd:(NSString *)adUnitId container:(UIView *)container;

+ (BOOL)isNativeAdReady:(NSString *)adUnitId;

/**
* InterstitialAd.
*/
+ (void)loadInterstitialAd:(NSString *)adUnitId;
+ (BOOL)isInterstitialAdReady:(NSString *)adUnitId;
+ (void)showInterstitialAd:(NSString *)adUnitId viewController:(UIViewController *)viewController;

/**
* RewardedVideoAd.
*/
+ (void)loadRewardedVideoAd:(NSString *)adUnitId;
+ (BOOL)isRewardedVideoAdReady:(NSString *)adUnitId;
+ (void)showRewardedVideoAd:(NSString *)adUnitId viewController:(UIViewController *)viewController;

/**
* SplashAd.
*/
+ (void)loadSplashAd:(NSString *)adUnitId uiWindow:(UIWindow *)uiWindow;
+ (BOOL)isSplashAdReady:(NSString *)adUnitId;

/**
* FeedListAd.
*/
+ (void)loadFeedListAd:(NSString *)adUnitId;
+ (void)loadFeedListAd:(NSString *)adUnitId count:(int)count;
+ (BOOL)isFeedListAdReady:(NSString *)adUnitId;
+ (NSArray<TXADFeed *> *)getFeedListAds:(NSString *)adUnitId;

/**
* MixViewAd.
*/
+ (void)loadMixViewAd:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
+ (void)showMixViewAd:(NSString *)adUnitId container:(UIView *)container nativeAdLayout:(TXADNativeAdLayout * _Nullable)layout;

+ (void)loadMixViewAd:(NSString *)adUnitId rootViewController:(UIViewController *)viewController nativeAdLayout:(TXADNativeAdLayout * _Nullable)layout;
+ (void)showMixViewAd:(NSString *)adUnitId container:(UIView *)container;

+ (BOOL)isMixViewAdReady:(NSString *)adUnitId;

/**
* MixFullScreenAd.
*/
+ (void)loadMixFullScreenAd:(NSString *)adUnitId;
+ (void)showMixFullScreenAd:(NSString *)adUnitId viewController:(UIViewController *)viewController nativeAdLayout:(TXADNativeAdLayout * _Nullable)layout;

+ (void)loadMixFullScreenAd:(NSString *)adUnitId nativeAdLayout:(TXADNativeAdLayout * _Nullable)layout;
+ (void)showMixFullScreenAd:(NSString *)adUnitId viewController:(UIViewController *)viewController;

+ (BOOL)isMixFullScreenAdReady:(NSString *)adUnitId;

@end

NS_ASSUME_NONNULL_END
