/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/nsnetworkd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURLSessionTask, NSObject, NSMutableArray;

@interface NDTaskMonitor : NSObject {

	NSURLSessionTask* _task;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_source>* _timeoutTimer;
	NSObject<OS_dispatch_source>* _throughputTimer;
	NSMutableArray* _progressTimestamps;
	NSMutableArray* _progressValues;
	unsigned _throughputInterval;

}
-(void)setThroughputTimerForCurrentInterval;
-(long long)currentIntervalEndDelta;
-(void)setupTimeoutTimerWithTimeout:(long long)arg1 ;
-(void)setupThroughputTimer;
-(double)currentThroughputThreshold;
-(void)calculateThroughput;
-(id)initWithTask:(id)arg1 timeout:(long long)arg2 ;
-(void)taskTransferredData:(unsigned)arg1 ;
-(void)cancel;
-(void).cxx_destruct;
@end
