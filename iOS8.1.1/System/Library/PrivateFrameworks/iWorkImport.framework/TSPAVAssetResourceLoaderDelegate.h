/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/AVAssetResourceLoaderDelegate.h>

@protocol TSPDataStorage, OS_dispatch_queue, TSUReadChannel;
@class NSObject, NSString;

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {

	id<TSPDataStorage> _dataStorage;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<TSUReadChannel> _readChannel;
	NSObject*<OS_dispatch_queue> _concurrentRequestQueue;
	NSString* _contentTypeUTI;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_provideData:(id)arg1 untilRequestCancelledForResourceLoadingRequest:(id)arg2 ;
-(id)initWithDataStorage:(id)arg1 contentTypeUTI:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)delegateQueue;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
@end

