//
//  TXADAdUnitInfo.h
//  TaurusXAds
//
//  Created by TaurusXAds on 2019/11/3.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TXADAdType.h"
#import "TXADAdContentInfo.h"

@interface TXADAdUnitInfo : NSObject

@property (nonatomic, strong) NSString *adUnitId;
@property (nonatomic, strong) NSString *adUnitName;
@property (nonatomic) TXADAdTypeId adUnitType;

@property (nonatomic, strong)TXADAdContentInfo *adContentInfo;

@end
