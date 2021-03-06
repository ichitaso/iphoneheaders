/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MKMapSnapshotOptions, NSObject, VKMapSnapshotCreator;

@interface MKMapSnapshotter : NSObject {

	MKMapSnapshotOptions* _options;
	int _loadingFlag;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _completionHandler;
	VKMapSnapshotCreator* _snapshotCreator;
	BOOL _needsResume;

}

@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
-(void)_exitBackground:(id)arg1 ;
-(void)_performSnapshot;
-(void)_cleanupSnapshotCreator;
-(void)_succeedWithSnapshot:(id)arg1 ;
-(void)_enterBackground:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(BOOL)isLoading;
-(void)_cancel;
-(void)startWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOptions:(id)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

