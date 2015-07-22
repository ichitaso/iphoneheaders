/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {

	BOOL _relinquished;
	NSString* _reason;
	BSEventQueue* _eventQueue;

}

@property (nonatomic,copy) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) BSEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(BSEventQueue *)eventQueue;
-(void)setEventQueue:(BSEventQueue *)arg1 ;
-(void)relinquish;
-(id)initWithEventQueue:(id)arg1 reason:(id)arg2 ;
-(void)setReason:(NSString *)arg1 ;
@end
