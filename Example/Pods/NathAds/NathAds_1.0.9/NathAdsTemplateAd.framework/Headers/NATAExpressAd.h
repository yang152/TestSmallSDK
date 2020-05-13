//
//  NATAExpressAd.h
//  NathAdsTemplateAd
//
//  Created by zena.tang on 2020/4/23.
//  Copyright © 2020 nathads. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NATAError.h"
#import "NATAAdCreative.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, NATA_CUSTOM_EVENT) {
    NATA_CUSTOM_EVENT_VIDEO_START         = 2001, // 'videoStart';
    NATA_CUSTOM_EVENT_VIDEO_COMPLETE      = 2002, // 'videoComplete';
    NATA_CUSTOM_EVENT_VIDEO_FIRST_QUARTILE = 2003,// 'videoFirstQuartile';
    NATA_CUSTOM_EVENT_VIDEO_MIDDLE        = 2004, // 'videoMid';
    NATA_CUSTOM_EVENT_VIDEO_THIRD_QUARTILE = 2005,//  'videoThirdQuartile';
    NATA_CUSTOM_EVENT_VIDEO_SKIP          = 2006, // 'videoSkip'; // 1006
    NATA_CUSTOM_EVENT_VIDEO_ERROR         = 2007, // 'videoError'; // 1007
    NATA_CUSTOM_EVENT_AUDIO_MUTE          = 2008, // 'audioMute'; // 1008
    NATA_CUSTOM_EVENT_AUDIO_UNMUTE        = 2009, // 'audioUnmute'; // 1009
    NATA_CUSTOM_EVENT_ERROR_REPORT        = 2010, // 'errorReport'; // 2010
    
    
    //自定义
    NATA_CUSTOM_EVENT_VIDEO_PAUSE        = 2080, // 'pause'; // 2080
    NATA_CUSTOM_EVENT_VIDEO_RESUME       = 2081, // 'resume'; // 2081
};

@class NATAExpressAd;

@protocol NATAExpressAdDelegate  <NSObject>

@optional
- (void)ExpressAdRenderDidFinish:(NATAExpressAd *)ad message: (NSDictionary * _Nullable)message;
- (void)expressAd:(NATAExpressAd *)ad didRenderFailWithError:(NATAError * _Nullable)error;

- (void)ExpressAdRenderReady:(NATAExpressAd *)ad message: (NSDictionary * _Nullable)message;

- (void)ExpressAdOnClick:(NATAExpressAd *)ad;

- (void)ExpressAdOnClosed:(NATAExpressAd *)ad;

- (void)ExpressAdCustomEvent: (NATAExpressAd *)ad eventID: (NATA_CUSTOM_EVENT)eventID message: (NSDictionary * _Nullable)message;

@end

@interface NATAExpressAd : UIView

@property (nonatomic, weak) id<NATAExpressAdDelegate> delegate;

+ (instancetype) renderAdUnit: (NSString *)adunitID adData: (NATAAdCreative *)adData viewFrame: (CGRect) viewFrame delegate: (id<NATAExpressAdDelegate>)delegate;

- (instancetype)initWithAdUnit: (NSString *)adunitID adData: (NATAAdCreative *)adData viewFrame: (CGRect) viewFrame delegate: (id<NATAExpressAdDelegate>)delegate;

- (void)startRender;

- (void)playVideo;
- (void)pauseVideo;
- (void)resumeVideo;

- (void)noUseExpressAd;

@end

NS_ASSUME_NONNULL_END
