//
//  NathAdsManager.h

//
//  Created by NathAds on 2019/6/19.
//  Copyright © 2019 NathAds. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NathAdsManager : NSObject

@property (nonatomic) BOOL             testMode;
@property (nonatomic, strong) NSString *appId;

+ (instancetype)getManager;

+ (void)initWithAppId:(NSString *)appId;

- (void) setLogEnable:(BOOL)enable;
- (BOOL) isLogEnable;

- (NSString *)getNathSdkVerion;

- (NSInteger)getNathSdkVerionCode;

- (BOOL) templateReady;

@end

NS_ASSUME_NONNULL_END
