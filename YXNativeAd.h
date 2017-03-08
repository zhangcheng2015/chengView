//
//  NativeAd.h
//  AdSDKDemo
//
//  Created by 深海 on 16/11/4.
//  Copyright © 2016年 一下. All rights reserved.
//  

#import <Foundation/Foundation.h>
#import "YXNativeAdDelegate.h"
#import <UIKit/UIKit.h>
#import "YXAdModel.h"

@interface YXNativeAd : NSObject
@property (nonatomic ,copy) NSString *appid;     //媒体应用id
@property (nonatomic ,copy) NSString *cid;       //广告位id
@property (nonatomic ,copy) NSString *channelid;
@property (nonatomic ,weak) id<YXNativeAdDelegate>YXNativeAdDelegate;

//请求广告
-(void)requestYXNativeAdWithAppid:(NSString * )appid andCid:(NSString *)cid AdSize:(CGPoint )adSize AndChannelId:(NSString *)channelid;

//广告成功展示
+(void)showYXNativeAd:(YXAdModel *)model;

//广告成功点击
+(void)clickYXNativeAd:(YXAdModel *)model;



@end
