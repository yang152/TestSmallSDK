//
//  NATAManager.h
//  NathAdsTemplateAd
//
//  Created by nathads on 2020/4/7.
//  Copyright © 2020 nathads. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NATAExpressAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface NATAManager : NSObject

@property (nonatomic) BOOL             testMode;
@property (nonatomic, readonly) NSString *appId;

+ (instancetype)getManager;

+ (void) initWithAppId: (NSString *)appId completion:(nullable void (^)(BOOL))completion;


- (void) setLogEnable:(BOOL)enable;
- (BOOL) isLogEnable;

- (void) setMediaCacheFolder: (NSString *)mediaCacheFolder;
- (NSString *) getMediaCacheFolder;

- (void) setMaxMediaCacheSize: (NSUInteger)size;
- (NSUInteger) getMaxMediaCacheSize;

- (int)getSdkVersion;

- (BOOL)hasTemplateInfo:(NSString *)adunitId;

@end

NS_ASSUME_NONNULL_END
