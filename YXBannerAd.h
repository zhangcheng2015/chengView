//
//  BannerAd.h
//  AdSDKDemo
//
//  Created by 深海 on 16/11/4.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YXAdDelegate.h"
#import <UIKit/UIKit.h>

@interface YXBannerAd : NSObject

@property (nonatomic ,  weak) id<YXAdDelegate>YXBannerDelegate;


//根据点坐标初始化位置
-(id)initWithYXAdSize:(CGPoint)adSize;

//返回空间view
-(UIView *)getYXBannerAdView;

//根据广告位和媒体id请求广告
-(void)requestYXAdWithAppid:(NSString * )appid  Cid:(NSString *)cid andChannelId:(NSString *)channelId;
@end
