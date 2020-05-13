//
//  NathAdsUnifiedNative.h

//
//  Created by NathAds on 2019/6/19.
//  Copyright © 2019 NathAds. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, NathAdsMaterialType) {
    NathAdsMaterialType_Unknown = 0,            //未知
    NathAdsMaterialType_Small_Image= 1,         //小图
    NathAdsMaterialType_Large_Image= 2,         //大图
    NathAdsMaterialType_Group_Image= 3,         //组图
    NathAdsMaterialType_Video= 4,               //视频
};

typedef NS_ENUM(NSUInteger, NathAdsNativeTargetType) {
    NathAdsNativeTargetType_Unknown = 0,            //未知
    NathAdsNativeTargetType_Web = 1,               //网页跳转
    NathAdsNativeTargetType_Download= 2,            //下载
};


@interface NathAdsUnifiedNative : NSObject

- (instancetype)initNativeAds: (NSObject *)responseData nativeObject: (NSObject *)nativeObject;

@property (nonatomic, readonly) NSString * title;
@property (nonatomic, readonly) NSString * body;
@property (nonatomic, readonly) NSString * callToAction;
@property (nonatomic, readonly) NSString * iconUrl;
@property (nonatomic, readonly) NSArray<NSString *> *imageUrls;
@property (nonatomic, readonly) NSString * advertiser;
@property (nonatomic, readonly) NSString * store;
@property (nonatomic, readonly) NSString * price;
@property (nonatomic, readonly) CGFloat rating;


@property (nonatomic, readonly) NathAdsMaterialType materialType;

@property (nonatomic, readonly) NathAdsNativeTargetType targetType;

@property (nonatomic, readonly) CGFloat mainImageWidth;
@property (nonatomic, readonly) CGFloat mainImageHeight;


-(UIView *)getMediaViewWithFrame:(CGRect)frame;


@property (nonatomic)   BOOL hasImpressioned;

- (void) registerViewForInteraction:(UIView *)adview clickableViews: (NSArray<UIView *> *) viewList;

@end

NS_ASSUME_NONNULL_END
