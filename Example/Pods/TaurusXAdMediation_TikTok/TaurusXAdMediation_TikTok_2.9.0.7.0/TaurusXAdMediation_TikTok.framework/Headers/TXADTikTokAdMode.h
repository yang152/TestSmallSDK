//
//  TXADTikTokAdMode.h
//  TaurusXAdMediation_TikTok
//
//  Created by TaurusXAds on 2020/1/4.
//  Copyright © 2020年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, TXADTikTokBannerMode) {
    TXAD_TIKTOK_BANNER_NORMAL = 0, // Banner（穿山甲已弃用）
    TXAD_TIKTOK_BANNER_EXPRESS = 1 // 个性化模版 Banner
};

typedef NS_ENUM(NSUInteger, TXADTiktokNativeMode) {
    TXAD_TIKTOK_NATIVE_CUSTOM_BANNER = 0, // 自渲染 Banner（穿山甲已弃用）
    TXAD_TIKTOK_NATIVE_CUSTOM_INTERSTITIAL = 2, // 自渲染插屏（穿山甲已弃用）
    TXAD_TIKTOK_NATIVE_CUSTOM_FEEDLIST = 3, // 自渲染信息流（支持海外使用 Native Api 来访问信息流）
    TXAD_TIKTOK_NATIVE_EXPRESS_FEEDLIST = 4 // 个性化模版信息流（支持海外使用 Native Api 来访问信息流）
};

typedef NS_ENUM(NSUInteger, TXADTiktokInterstitialMode) {
    TXAD_TIKTOK_INTERSTITIAL_NORMAL = 0, // 插屏（穿山甲已弃用）
    TXAD_TIKTOK_INTERSTITIAL_FULLSCREENVIDEO = 1, // 全屏视频（穿山甲已弃用）
    TXAD_TIKTOK_INTERSTITIAL_EXPRESS = 2, // 个性化模版插屏
    TXAD_TIKTOK_INTERSTITIAL_EXPRESS_FULLSCREENVIDEO = 3 // 个性化模版全屏视频
};

typedef NS_ENUM(NSUInteger, TXADTiktokRewardedVideoMode) {
    TXAD_TIKTOK_REWARDEDVIDEO_NORMAL = 0, // 激励视频（穿山甲已弃用）
    TXAD_TIKTOK_REWARDEDVIDEO_EXPRESS = 1 // 个性化模版激励视频
};

typedef NS_ENUM(NSUInteger, TXADTiktokSplashMode) {
    TXAD_TIKTOK_SPLASH_NORMAL = 0, // 开屏
    TXAD_TIKTOK_SPLASH_EXPRESS = 1, // 个性化模版开屏
};

typedef NS_ENUM(NSUInteger, TXADTiktokFeedListMode) {
    TXAD_TIKTOK_FEEDLIST_CUSTOM = 0, // 自渲染信息流（穿山甲已弃用）
    TXAD_TIKTOK_FEEDLIST_EXPRESS = 1, // 个性化模版信息流
    TXAD_TIKTOK_FEEDLIST_DRAW = 2, // Draw 信息流（穿山甲已弃用）
    TXAD_TIKTOK_FEEDLIST_EXPRESS_DRAW = 3 // 个性化模版 Draw 信息流
};

typedef NS_ENUM(NSUInteger, TXADTiktokOrienration) {
    ORIENTATION_VERTICAL = 1,
    ORIENTATION_HORIZONTAL = 2
};
