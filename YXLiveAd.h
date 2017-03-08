//
//  YXLiveAd.h
//  AdSDKDemo
//
//  Created by 深海 on 16/12/6.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YXVideoAdModel.h"
#import <UIKit/UIKit.h>
#import "YXAdDelegate.h"


@interface YXLiveAd : NSObject

@property (nonatomic ,weak)     id<YXAdDelegate>  YXLiveAdDelegate;
@property (nonatomic ,copy)     NSString          *cid;
@property (nonatomic ,copy)     NSString          *appid;
@property (nonatomic ,copy)     NSString          *channelid;
@property (nonatomic ,assign)   Boolean           SkipType;


+(YXLiveAd *)sharedInstance;

-(void)requestYXAdWithAppid:(NSString *)appid Cid:(NSString *)cid InfoModel:(YXVideoAdModel *)model Channelid:(NSString *)channelid;

-(void)closeYXLiveAd;

-(UIView *)showYXLiveAd;

-(void)enableSkipFunction:(Boolean)flag;

-(void)YXLiveAdPlay;

-(void)YXLiveAdPause;

@end
