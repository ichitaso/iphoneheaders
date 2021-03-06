/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class BWFigVideoCaptureDevice, BWNodeOutput;


@protocol BWFigCameraSourceNode <NSObject>
@property (readonly) BWFigVideoCaptureDevice * captureDevice; 
@property (readonly) BWNodeOutput * videoCaptureOutput; 
@property (readonly) BWNodeOutput * stillImageOutput; 
@property (readonly) BWNodeOutput * detectedFacesOutput; 
@required
-(BWFigVideoCaptureDevice *)captureDevice;
-(BWNodeOutput *)videoCaptureOutput;
-(id)colorInfoForOutput:(id)arg1;
-(BWNodeOutput *)detectedFacesOutput;
-(BWNodeOutput *)stillImageOutput;

@end

