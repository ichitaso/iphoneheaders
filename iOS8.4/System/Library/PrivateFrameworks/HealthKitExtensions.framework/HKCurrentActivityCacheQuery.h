/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthKitExtensions.framework/HealthKitExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class HKActivityCache;

@interface HKCurrentActivityCacheQuery : HKQuery {

	/*^block*/id _updateHandler;
	HKActivityCache* _lastActivityCache;

}

@property (nonatomic,copy) id updateHandler;                                   //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,retain) HKActivityCache * lastActivityCache;              //@synthesize lastActivityCache=_lastActivityCache - In the implementation block
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_validate;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_queue_errorHandler;
-(void)deliverSample:(id)arg1 forQuery:(id)arg2 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(HKActivityCache *)lastActivityCache;
-(void)setLastActivityCache:(HKActivityCache *)arg1 ;
@end
