//
//  YXVideoAdModel.h
//  AdSDKDemo
//
//  Created by 深海 on 16/12/15.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YXVideoAdModel : NSObject
@property (nonatomic ,copy)  NSString   *YXAdVcnt;      //播放次数
@property (nonatomic ,copy)  NSString   *YXAdVend;      //来源
@property (nonatomic ,copy)  NSString   *YXAdLength;    //时长
@property (nonatomic ,copy)  NSString   *YXAdW;         //宽度
@property (nonatomic ,copy)  NSString   *YXAdH;         //高度
@property (nonatomic ,copy)  NSString   *YXAdSuid;      //视频作者id
@property (nonatomic ,copy)  NSString   *YXAdVer;       //视频类型
@property (nonatomic ,copy)  NSString   *YXAdLocation;  //发布时坐标
@property (nonatomic ,copy)  NSString   *YXAdFinishTime;//完成发布时间

@end
