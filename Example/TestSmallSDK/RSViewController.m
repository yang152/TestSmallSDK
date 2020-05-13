//
//  RSViewController.m
//  TestSmallSDK
//
//  Created by yang152 on 05/13/2020.
//  Copyright (c) 2020 yang152. All rights reserved.
//

#import "RSViewController.h"
#import <BUAdSDK/BUAdSDK.h>
#import <RSGameVlionAd/RSGameVlionAd.h>

@interface RSViewController ()
@property (nonatomic, strong) VlionAdView *adView;

@end

@implementation RSViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    
    [BUAdSDKManager setAppID:@"5050702"];
    self.adView = [[VlionAdView alloc] initWithFrame:CGRectMake(0, 0, [UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height) mediaId:@"84" rootController:self];
    [self.view addSubview:self.adView];
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
