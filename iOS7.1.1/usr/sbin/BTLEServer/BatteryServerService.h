/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/BTLEServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BTLEServer/ServerService.h>

@class CBMutableCharacteristic;

@interface BatteryServerService : ServerService {

	CBMutableCharacteristic* _batteryLevel;
	unsigned char _lastBatteryLevelUpdate;
	int _curvedBatteryCapacityToken;
	int _notificationToken;

}
-(void)updateBatteryLevel;
-(id)batteryLevelValue;
-(void)batteryStateDidUpdate;
-(void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3 ;
-(void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(unsigned char)batteryLevel;
-(void)stop;
@end

