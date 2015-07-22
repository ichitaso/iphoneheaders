/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUBasicProgress.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface TSUFakeProgress : TSUBasicProgress {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _currentStage;
	unsigned long long _numberOfStages;
	BOOL _stopped;

}
-(void)p_slowlyAdvanceToNextStage;
-(id)initWithMaxValue:(double)arg1 numberOfStages:(unsigned long long)arg2 ;
-(void)advanceToStage:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
@end
