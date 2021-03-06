/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MediaSocialStatusPollingDelegate, OS_dispatch_queue;
@class NSObject, ISOperationQueue, NSMutableArray;

@interface MediaSocialStatusPollingCoordinator : NSObject {

	id _btaObserver;
	id<MediaSocialStatusPollingDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _nextScheduledPoll;
	ISOperationQueue* _operationQueue;
	double _pollingInterval;
	NSMutableArray* _requests;

}

@property (assign,nonatomic,__weak) id<MediaSocialStatusPollingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long numberOfPollRequests; 
-(long long)numberOfPollRequests;
-(void)addPollRequest:(id)arg1 ;
-(void)_handleBackgroundTaskEvent:(id)arg1 ;
-(void)_addBackgroundTaskJob;
-(void)_finishRequests:(id)arg1 withResponses:(id)arg2 ;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MediaSocialStatusPollingDelegate>)arg1 ;
-(id<MediaSocialStatusPollingDelegate>)delegate;
@end

