//
//  YXVideoAd.h
//  AdSDKDemo
//
//  Created by 深海 on 16/12/2.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "YXVideoAdModel.h"
#import "YXAdDelegate.h"

@interface YXVideoAd : NSObject

@property (nonatomic ,weak ) id<YXAdDelegate> YXVideoAdDelegate;
@property (nonatomic ,copy ) NSString     *appid;
@property (nonatomic ,copy ) NSString     *cid;

+(YXVideoAd *)sharedInstance;

-(void)requestYXAdWithAppid:(NSString *)appid Cid:(NSString *)cid InfoModel:(YXVideoAdModel *)model ChannelId:(NSString *)channelid;

-(void)closeYXVideoAd;

-(UIView *)showYXVideoAd;

-(void)playYXVideoAd;

-(void)pauseYXVideoAd;

-(void)YXAdVideoExit;
@end
