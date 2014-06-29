/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSString, NSMutableArray, NSObject, AVVideoComposition, AVCustomVideoCompositorSession;

@interface AVAssetImageGeneratorInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetImageGeneratorRef generator;
	AVAsset* asset;
	bool appliesPreferredTrackTransform;
	CGSize maximumSize;
	NSString* apertureMode;
	SCD_Struct_CM4 requestedTimeToleranceBefore;
	SCD_Struct_CM4 requestedTimeToleranceAfter;
	NSMutableArray* requests;
	NSObject<OS_dispatch_queue>* requestsQueue;
	int nextRequestID;
	AVVideoComposition* videoComposition;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	NSObject<OS_dispatch_queue>* imageRequestQueue;
	int cancelledRequestIDThreshold;

}
@end
