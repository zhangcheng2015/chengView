//
//  FullScreenAd.h
//  AdSDKDemo
//
//  Created by 深海 on 16/11/4.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YXAdDelegate.h"
#import <UIKit/UIKit.h>

@interface YXFullScreenAd : NSObject

@property (nonatomic ,weak) id<YXAdDelegate>YXFullScreenDelegate;

//单例初始化
+(YXFullScreenAd *)sharedInstance;

//请求广告
-(void)requestYXAdWithAppid:(NSString * )appid Cid:(NSString *)cid andChannelId:(NSString *)channelId;

//返回展示view
-(UIView *)showYXFullScreenAd;




@end
