//
//  ZLCustomCamera.h
//  CustomCamera
//
//  Created by long on 2017/6/26.
//  Copyright © 2017年 long. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZLDefine.h"
#import <AVFoundation/AVFoundation.h>
#import <CoreMotion/CoreMotion.h>

@interface ZLCustomCamera : UIViewController

//是否允许拍照 默认YES
@property (nonatomic, assign) BOOL allowTakePhoto;
//是否允许录制视频 默认YES
@property (nonatomic, assign) BOOL allowRecordVideo;

//最大录制时长 默认15s
@property (nonatomic, assign) NSInteger maxRecordDuration;

//视频分辨率 默认 ZLCaptureSessionPreset1280x720
@property (nonatomic, assign) ZLCaptureSessionPreset sessionPreset;

//视频格式 默认 ZLExportVideoTypeMp4
@property (nonatomic, assign) ZLExportVideoType videoType;

//录制视频时候进度条颜色 默认 rgb(80, 169, 56)
@property (nonatomic, strong) UIColor *circleProgressColor;

//拍照陀螺仪方向 不设置则自动处理
@property (nonatomic, assign) AVCaptureVideoOrientation cameraOrientation;

/**
 确定回调，如果拍照则videoUrl为nil，如果视频则image为nil
 */
@property (nonatomic, copy) void (^doneBlock)(UIImage *image, NSURL *videoUrl);

@end
