//
//  AdModel.h
//  AdSDKDemo
//
//  Created by 深海 on 16/11/4.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YXAdModel : NSObject

@property (nonatomic , copy)    NSString   *appid;             //Appid
@property (nonatomic , copy)    NSString   *cid;               //Cid
@property (nonatomic , copy)    NSString   *qid;               //请求id
@property (nonatomic , copy)    NSString   *ad_id;             //广告id
@property (nonatomic , copy)    NSString   *ad_type;           //广告资源类型
@property (nonatomic , copy)    NSString   *desc;              //广告描述
@property (nonatomic , copy)    NSString   *button_text;       //按钮文案
@property (nonatomic , copy)    NSString   *idea_title;        //创意标题
@property (nonatomic , copy)    NSString   *idea_id;           //创意id
@property (nonatomic , copy)    NSString   *seconds;           //跳过时间
@property (nonatomic , copy)    NSString   *is_ad;            //是否为广告
@property (nonatomic , copy)    NSString   *source_type;       //素材类型  1.图片 2.视频
@property (nonatomic , copy)    NSString   *source_img_url;    //图片地址
@property (nonatomic , copy)    NSString   *source_video_url;  //视频地址
@property (nonatomic , copy)    NSString   *target_type;       //跳转类型
@property (nonatomic , copy)    NSString   *target_value;      //跳转地址
@property (nonatomic , strong)  NSArray    *exposeUrlArray;    //曝光地址url
@property (nonatomic , strong)  NSArray    *clickUrlArray;     //点击地址url

@end
