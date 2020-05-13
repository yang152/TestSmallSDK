//
//  VlionAdView.h
//  XuAndXiu
//
//  Created by 周晓旭 on 2019/12/17.
//  Copyright © 2019 周晓旭. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VlionAdViewDelegate <NSObject>

@optional

/**加载Banner广告*/
- (void)onLoadVlionBannerAd:(NSString *)adId;

/**加载插屏广告*/
- (void)onLoadVlionSpotAd:(NSString *)adId;

/**加载激励视频广告*/
- (void)onLoadVlionRewardVideoAd:(NSString *)adId;

/**展示激励视频广告*/
- (void)onShowVlionRewardVideoAd:(NSString *)adId;
/**进入游戏后回调*/
- (void)vlionAdViewClickGame:(NSString *)gameId;
/**退出游戏后回调*/
- (void)vlionAdViewExitGame:(NSString *)gameId durration:(float)duration;

@end

@interface VlionAdView : UIView

@property (nonatomic, weak) id<VlionAdViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame
                      mediaId:(NSString *)mediaId
               rootController:(UIViewController *)rootController;

/**Banner广告点击打点*/
- (void)onBannerClicke;
/**Banner广告展示成功打点*/
- (void)onBannerShowSuccess;
/**Banner广告展示失败打点*/
- (void)onBannerShowFailed;

/**插屏广告展示失败*/
- (void)onSpotShowFailed;
/**插屏广告关闭*/
- (void)onSpotClosed;
/**插屏广告点击*/
- (void)onSpotClicked;
/**插屏广告展示成功*/
- (void)onSpotShowSuccess;

/**视频广告缓存成功*/
- (void)onRewardVideoLoadVideo;
/**视频广告开始播放*/
- (void)onRewardVideoPlayStart;
/**视频广告点击*/
- (void)onRewardVideoClicked;
/**视频广告关闭*/
- (void)onRewardVideoClosed;
/**视频广告播放完成*/
- (void)onRewardVideoFinish;
/**视频广告播放失败*/
- (void)onRewardVideoPlayFailed;
/**视频广告激励完成*/
- (void)onRewardVideoVerify;

@end

NS_ASSUME_NONNULL_END
