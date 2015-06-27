/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVRawImageReprocessorInternal;

@interface AVRawImageReprocessor : NSObject {

	AVRawImageReprocessorInternal* _internal;

}
+(void)initialize;
-(void)reprocessRawImageSurface:(IOSurfaceRef)arg1 andMetadata:(id)arg2 withOutputSettings:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handlePhotoReady:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
