//
//  AdError.h
//  AdSDKDemo
//
//  Created by 深海 on 16/11/4.
//  Copyright © 2016年 一下. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, code) {
    AES_EN_ERROR 		       = 300001,    //AES解密串发生错误
    UID_ERROR 			       = 300002,    //无效的用户id
    MAX_DATA_ERROR             = 300003,    //发送数据超过最大限制
    UPLOAD_DATA_ERROR          = 300004,    //上报数据的结构不完整
    AES_LOST_DATA_ERROR        = 300005,    //解密请求串发生错误
    INVALID_OF_QID             = 300006,    //无效的请求id
    INVALID_OF_UPLOAD_TYPE     = 300007,    //无效的上报类型
    INVALID_OF_TIMESTAMP       = 300008,    //无效的时间戳
    VIDEO_ENCRYPT_ERROR        = 300011,    //视频信息加密串错误
    NO_IDEA_IN_CID             = 300012,    //当前广告位中无广告创意信息
    INVALID_PARAM_OF_CID       = 300101,    //无效广告位参数
    GET_DATA_ERROR_IN_AD       = 300102,    //广告池中获取数据错误
    NO_AD_IN_CID_TODAY         = 300103,    //今日广告池中没有此广告位数据
    REQUEST_AD_ERROR           = 300201,    //请求广告错误
    EMPTY_OF_ADPOOL            = 300202,    //广告池为空
    NO_AD_ERROR                = 300204,    //没有广告
    NO_EXPOSE_TIME             = 300205,    //广告池中此广告没有曝光次数
    UPDATE_AD_ERROR            = 300206,    //更新广告池错误
    
    EMPTY_OF_APPID             = 200001,    //空的appid
    EMPTY_OF_CID               = 200002,    //空的cid
    DOWNLOAD_TIMEOUT           = 200003,    //下载超时
    NETWORK_ERROR              = 200005,    //网络异常
    UNKNOWN_ERROR              = 666666     //default
    

    
    
};

@interface YXAdError : NSObject

@property (nonatomic  ,copy   ) NSString    *errorDesc;   //错误信息描述
@property (nonatomic  ,assign ) int          errorCode;     //错误码

+ (YXAdError *)getDescByCode:(int)code;

+ (YXAdError *)createAdErrorByCode:(int) code AndDesc:(NSString *)desc;

@end
