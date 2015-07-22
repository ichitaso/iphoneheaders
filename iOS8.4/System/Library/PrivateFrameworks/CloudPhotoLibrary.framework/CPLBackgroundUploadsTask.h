/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CPLBackgroundUploadsTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableArray* _uploadTasks;
	BOOL _shouldStop;
	BOOL _hasBadErrors;
	BOOL _hasResetQueue;
	unsigned long long _successfullyUploadedResourcesCount;
	unsigned long long _failedUploadedResourcesCount;
	unsigned long long _total;
	double _start;

}
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(id)initWithEngineLibrary:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)_uploadTask:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_launchNecessaryUploadTasksWithTransaction:(id)arg1 ;
-(void)_finishTaskLocked;
-(void)_enqueueTasksLocked;
-(id)taskIdentifier;
@end
