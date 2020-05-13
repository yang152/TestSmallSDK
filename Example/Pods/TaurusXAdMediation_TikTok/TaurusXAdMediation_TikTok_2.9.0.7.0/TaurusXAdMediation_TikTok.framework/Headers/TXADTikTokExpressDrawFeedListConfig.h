//
//  TXADTikTokExpressDrawFeedListConfig.h
//  TaurusXAdMediation_TikTok
//
//  Created by TaurusXAds on 2019/10/8.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TaurusXAds/TaurusXAds.h>

@interface TXADTikTokExpressDrawFeedListConfig : TXADNetworkConfig

-(void)setExpressViewAcceptedSize:(CGFloat)width height:(CGFloat)height DEPRECATED_MSG_ATTRIBUTE("Use [TXADFeedList setExpressAdSize:]");

-(CGFloat)getExpressViewAcceptedWidth;
-(CGFloat)getExpressViewAcceptedHeight;

+(CGFloat)getDefaultExpressViewAcceptedWidth;
+(CGFloat)getDefaultExpressViewAcceptedHeight;

@end
