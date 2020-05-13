//
//  TXADSegment.h
//  TaurusXAds
//
//  Created by TaurusX on 2020/1/6.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*!
Class contains Segment parameter that applies to the SDK when request adunit.
*/
@interface TXADSegment : NSObject

/*!
@property channel
@abstract the channel of app from
*/
@property(nonatomic, strong) NSString *channel;

/*!
@property customize
@abstract the customize value when request adunit
*/
@property(nonatomic, strong) NSDictionary *customize;

- (NSString *)getURLEncodedCustomize;
- (NSString *)getURLEncodedChannel;

@end

NS_ASSUME_NONNULL_END
