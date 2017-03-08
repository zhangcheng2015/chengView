//
//  AdDelegate.h
//  AdSDKDemo
//
//  Created by 深海 on 16/11/4.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YXAdError.h"
#import "YXAdModel.h"

@protocol YXAdDelegate <NSObject>

//请求广告成功
-(void)yxAdLoadSuccess:(NSString *)status andCid:(NSString *)cid;
//请求广告失败
-(void)yxAdLoadError:(YXAdError *)error andCid:(NSString *)cid;
//广告成功点击
-(void)yxAdClick:(YXAdModel *)model;
//广告关闭

@optional
-(void)yxAdClose;
@end
