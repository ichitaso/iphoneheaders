/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CMStepCounterProxy;

@interface CMStepCounter : NSObject {

	CMStepCounterProxy* _stepcounterProxy;

}

@property (assign) BOOL enabled; 
@property (readonly) BOOL everRequested; 
@property (nonatomic,readonly) CMStepCounterProxy * stepcounterProxy;              //@synthesize stepcounterProxy=_stepcounterProxy - In the implementation block
+(BOOL)isStepCountingAvailable;
-(CMStepCounterProxy *)stepcounterProxy;
-(void)queryStepCountStartingFrom:(id)arg1 to:(id)arg2 toQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)startStepCountingUpdatesToQueue:(id)arg1 updateOn:(long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)stopStepCountingUpdates;
-(void)getTotalCountToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)deleteHistory;
-(BOOL)everRequested;
-(void)dealloc;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
@end

