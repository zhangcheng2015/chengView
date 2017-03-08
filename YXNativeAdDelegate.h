//
//  NativeAdDelegate.h
//  AdSDKDemo
//
//  Created by 深海 on 16/11/9.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YXAdError.h"
#import "YXAdModel.h"

@protocol YXNativeAdDelegate <NSObject>

//请求广告成功
-(void)yxNativeAdLoadSuccess:(NSArray *)ModelArray cid:(NSString *)YXAdCid;

//请求广告失败
-(void)yxNativeAdLoadError:(YXAdError *)error withCid:(NSString *)YXAdCid;



@end
