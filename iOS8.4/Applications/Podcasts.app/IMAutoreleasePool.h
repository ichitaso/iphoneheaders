/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAutoreleasePool;

@interface IMAutoreleasePool : NSObject {

	NSAutoreleasePool* _pool;
	int _count;
	int _maxCount;
	id _target;
	SEL _action;
	void* _context;

}

@property (nonatomic,readonly) int count;               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) int maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
-(void)_resetPool;
-(void)setTarget:(id)arg1 action:(SEL)arg2 context:(void*)arg3 ;
-(void)increaseCount;
-(void)setMaxCount:(int)arg1 ;
-(void)dealloc;
-(int)count;
-(id)init;
-(int)maxCount;
@end

