/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DSharegroup.h>

@class TSCH3DGLContext, NSRecursiveLock;

@interface TSCH3DGLSharegroup : TSCH3DSharegroup {

	TSCH3DGLContext* mGLContext;
	long long mLockLevel;
	NSRecursiveLock* mLock;

}
+(BOOL)hasInterestForSharegroupToken:(id)arg1 ;
+(void)addInterestForSharegroupTokens:(id)arg1 ;
+(void)removeInterestForSharegroupTokens:(id)arg1 ;
+(void)flushSharegroupForToken:(id)arg1 ;
+(id)sharegroupForToken:(id)arg1 ;
+(void)deleteSharegroupForToken:(id)arg1 ;
-(id)initWithOwningThread:(id)arg1 token:(id)arg2 ;
-(void)p_owningThreadWillChange;
-(void)p_flushCache;
-(void)p_flushPurgeableResourceSet;
-(void)p_forceFlushResourceSet:(id)arg1 ;
-(id)targetThreadForFlushing;
-(BOOL)debug_isInteractive;
-(id)GLContext;
-(void)p_clearContextInCurrentThread;
-(void)garbageCollectResources:(id)arg1 ;
-(void)garbageCollectAllUnretainedResources;
-(void)dealloc;
-(id)description;
-(void)lock;
-(void)unlock;
@end
