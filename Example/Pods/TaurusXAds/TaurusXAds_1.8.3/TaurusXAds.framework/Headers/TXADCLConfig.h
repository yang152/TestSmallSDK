//
//  TXADCLConfig.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2019/12/1.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TXADCLConfig : NSObject

@property BOOL isEnable;

- (void)setCacheCount:(int)cacheCount;
- (int)getCacheCount;

- (void)setMinErrorTime:(int)time;
- (int)getMinErrorTime;

- (void)setMaxErrorTime:(int)time;
- (int)getMaxErrorTime;

- (void)setMinFreezeTime:(int)time;
- (int)getMinFreezeTime;

- (void)setMaxFreezeTime:(int)time;
- (int)getMaxFreezeTime;

- (void)setDelayFactor:(float)factor;
- (float)getDelayFactor;

+ (TXADCLConfig *)fromJson:(NSDictionary *)jsonObject;

@end
