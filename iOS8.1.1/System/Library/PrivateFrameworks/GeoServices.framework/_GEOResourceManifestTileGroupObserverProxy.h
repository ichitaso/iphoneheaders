/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSLock, NSObject;

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {

	NSHashTable* _observers;
	NSLock* _observersLock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)observersCount;
-(void)forEachObserver:(/*^block*/id)arg1 finished:(/*^block*/id)arg2 ;
@end

