/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSDictionary, NSArray;

@interface AVCaptureStillImageOutput : AVCaptureOutput {

	AVCaptureStillImageOutputInternal* _internal;

}

@property (nonatomic,copy) NSDictionary * outputSettings; 
@property (nonatomic,readonly) NSArray * availableImageDataCVPixelFormatTypes; 
@property (nonatomic,readonly) NSArray * availableImageDataCodecTypes; 
@property (getter=isStillImageStabilizationSupported,nonatomic,readonly) bool stillImageStabilizationSupported; 
@property (assign,nonatomic) bool automaticallyEnablesStillImageStabilizationWhenAvailable; 
@property (getter=isStillImageStabilizationActive,nonatomic,readonly) bool stillImageStabilizationActive; 
@property (getter=isCapturingStillImage,readonly) bool capturingStillImage; 
+(id)jpegStillImageNSDataRepresentation:(opaqueCMSampleBufferRef)arg1 ;
+(id)jpegStillImageNSDataRepresentationForSurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 metadata:(id)arg3 ;
+(CGImageRef)cgImageForBGRASurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 ;
+(id)jpegStillImageNSDataRepresentationForBGRASurface:(IOSurfaceRef)arg1 size:(unsigned long long)arg2 ;
+(void)initialize;
+(unsigned long long)maxStillImageJPEGDataSize;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(id)connectionMediaTypes;
-(void)didStartForSession:(id)arg1 ;
-(bool)isHDRSupported;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(CGSize)previewImageSize;
-(void)setPreviewImageSize:(CGSize)arg1 ;
-(unsigned)imageDataFormatType;
-(long long)HDRMode;
-(void)setHDRMode:(long long)arg1 ;
-(void)setChromaNoiseReductionEnabled:(bool)arg1 ;
-(bool)squareCropEnabled;
-(void)updateSISSupportedForSourceDevice:(id)arg1 ;
-(bool)isRawCaptureEnabled;
-(id)availableImageDataCVPixelFormatTypes;
-(id)availableImageDataCodecTypes;
-(bool)isStillImageStabilizationSupported;
-(bool)isRawCaptureSupported;
-(id)firstActiveConnection;
-(bool)isEV0CaptureEnabled;
-(bool)isChromaNoiseReductionEnabled;
-(bool)suspendsVideoProcessingDuringStillImageCapture;
-(unsigned)shutterSound;
-(bool)automaticallyEnablesStillImageStabilizationWhenAvailable;
-(void)configureAndInitiateCopyStillImageForRequest:(id)arg1 ;
-(void)handlePhotoTakenForRequest:(id)arg1 info:(id)arg2 imageIsEV0:(bool*)arg3 ;
-(void)setSquareCropEnabled:(bool)arg1 ;
-(bool)isHDRCaptureEnabled;
-(void)setHDRCaptureEnabled:(bool)arg1 ;
-(void)setEV0CaptureEnabled:(bool)arg1 ;
-(bool)isStillImageStabilizationActive;
-(void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(bool)arg1 ;
-(void)setRawCaptureEnabled:(bool)arg1 ;
-(void)setShutterSound:(unsigned)arg1 ;
-(void)setSuspendsVideoProcessingDuringStillImageCapture:(bool)arg1 ;
-(bool)resumeVideoProcessing;
-(bool)isCapturingStillImage;
-(void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)outputSettings;
-(void)setOutputSettings:(id)arg1 ;
@end

