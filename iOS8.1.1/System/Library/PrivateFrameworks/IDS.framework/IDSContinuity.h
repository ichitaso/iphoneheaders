/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _IDSContinuity;

@interface IDSContinuity : NSObject {

	_IDSContinuity* _internal;

}

@property (readonly) long long state; 
-(void)dealloc;
-(long long)state;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopAdvertisingOfType:(long long)arg1 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 ;
-(void)startScanningForType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 forType:(long long)arg2 ;
-(void)stopTrackingPeer:(id)arg1 forType:(long long)arg2 ;
@end

