//
//  NathAdsAdError.h

//
//  Created by taurusXAds on 2019/6/11.
//  Copyright © 2019 NathAds. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, NATHADS_ERROR_CODE) {
    NATHADS_ERROR_CODE_INTERNAL_ERROR = 0, // 内部错误
    NATHADS_ERROR_CODE_INVALID_REQUEST = 1, // 无效请求，请求过于频繁等，广告位无效等
    NATHADS_ERROR_CODE_NETWORK_ERROR = 2, // 网络错误
    NATHADS_ERROR_CODE_NO_FILL = 3, // 无广告填充
    NATHADS_ERROR_CODE_TIMEOUT = 4, // 超时
};

@interface NathAdsAdError : NSObject

@property (readonly, copy) NSString   *message;
@property (readonly)       NATHADS_ERROR_CODE  errorCode;

- (void)internalError:(NSString *)message;
- (void)invalidRequest:(NSString *)message;
- (void)networkError:(NSString *)message;
- (void)noFill:(NSString *)message;
- (void)timeOut:(NSString *)message;

@end

