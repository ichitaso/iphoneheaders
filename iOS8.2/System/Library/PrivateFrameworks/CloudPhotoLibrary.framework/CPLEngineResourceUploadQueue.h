/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <CloudPhotoLibrary/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineResourceUploadQueue : CPLEngineStorage <CPLAbstractObject> {

	char _immediateUploads[18];

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(char)openWithError:(id*)arg1 ;
-(char)resetWithError:(id*)arg1 ;
-(unsigned)countOfOriginalImages;
-(unsigned)countOfOriginalVideos;
-(unsigned)countOfOriginalOthers;
-(char)markResourcesAsStaleForItemWithIdentifier:(id)arg1 withResources:(id)arg2 error:(id*)arg3 ;
-(char)_markResourcesAsStaleForItemWithIdentifier:(id)arg1 withResources:(id)arg2 includePending:(char)arg3 error:(id*)arg4 ;
-(unsigned)availabilityOfResource:(id)arg1 ;
-(char)prepareCloudResourceForUpload:(id)arg1 fromLocalResource:(id)arg2 error:(id*)arg3 ;
-(char)markResourceAsSuccessfullyUploaded:(id)arg1 uploadURL:(id)arg2 error:(id*)arg3 ;
-(char)reenqueueResource:(id)arg1 uploadURL:(id)arg2 failedToUploadWithUploadError:(id)arg3 error:(id*)arg4 ;
-(char)noteMedataWasUploadedForStaleOrNotAvailableResource:(id)arg1 error:(id*)arg2 ;
-(id)_uploadTaskForResource:(id)arg1 foreground:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)resetDequeuedBackgroundUploadTasksWithError:(id*)arg1 ;
-(unsigned)countOfQueuedUploadTasks;
-(char)isResourceInQueue:(id)arg1 ;
-(char)shouldUploadResourceWithMetadata:(id)arg1 ;
-(char)enqueueResourcesForUploadForBatch:(id)arg1 error:(id*)arg2 ;
-(char)discardResourceForUpload:(id)arg1 error:(id*)arg2 ;
-(char)enqueueResourceForBackgroundUpload:(id)arg1 error:(id*)arg2 ;
-(id)dequeueBackgroundUploadTaskForResourceType:(unsigned)arg1 foreground:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end

