/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSharegroupDelayCheckerParent.h>
#import <OfficeImport/TSUFlushable.h>

@class NSMutableArray, NSCondition, TSCH3DSharegroupDelayChecker;

@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUFlushable> {

	long long mSize;
	long long mNumAlive;
	long long mDisableLevel;
	NSMutableArray* mSharegroups;
	NSCondition* mCondition;
	bool mBusy;
	bool mCanUseOpenGL;
	TSCH3DSharegroupDelayChecker* mChecker;

}
+(id)sharedInstance;
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
-(void)willCheckCondition;
-(void)scheduleCheckCondition;
-(void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)arg1 ;
-(void)p_removeSharegroupsFromFlushingManager;
-(void)p_flushSharegroupsIfPossible;
-(id)p_obtainSharegroupFromSharegroups;
-(id)obtainSharegroup;
-(void)releaseSharegroup:(id)arg1 ;
-(bool)canUseOpenGL;
-(void)waitForBackgroundThreadsWithTimeout:(double)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(void)flush;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)enable;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)disable;
@end

