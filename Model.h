//
//  Model.h
//  CLPlayerDemo
//
//  Created by JmoVxia on 2016/11/19.
//  Copyright © 2016年 JmoVxia. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Model : NSObject

/**图片url*/
@property (nonatomic,copy) NSString *pictureUrl;
/**视频url*/
@property (nonatomic,copy) NSString *videoUrl;


@property (nonatomic ,copy) NSString *HeadIcon;
@property (nonatomic ,copy) NSString *UserName;
@property (nonatomic ,copy) NSString *VideoTitle;
@property (nonatomic ,copy) NSString *VideoPath;
@property (nonatomic ,copy) NSString *VideoPath1;
@property (nonatomic ,copy) NSString *VideoImage;
@property (nonatomic)       int      AdType;



@end
