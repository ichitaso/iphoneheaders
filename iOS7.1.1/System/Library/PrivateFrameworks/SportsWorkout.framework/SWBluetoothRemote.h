/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SportsWorkout-Structs.h>
#import <SportsWorkout/SWRemote.h>

@class NSMutableData, SWBluetoothMessageHandler, SWPacketUnscrambler, NSTimer;

@interface SWBluetoothRemote : SWRemote {

	NSMutableData* _bluetoothInputData;
	SWBluetoothMessageHandler* _messageHandler;
	SWPacketUnscrambler* _packetUnscrambler;
	NSTimer* _remoteLeftKeyLongPressTimer;
	NSTimer* _remoteRightKeyLongPressTimer;
	NSTimer* _remoteNikeKeyLongPressTimer;
	NSTimer* _remotePlayKeyLongPressTimer;
	NSTimer* _playKeyTimer;
	NSTimer* _volumeUpKeyTimer;
	NSTimer* _volumeDownKeyTimer;
	NSTimer* _leftKeyTimer;
	NSTimer* _rightKeyTimer;
	NSTimer* _nikeKeyTimer;
	bool _playKeyWasDown;
	bool _volumeUpKeyWasDown;
	bool _volumeDownKeyWasDown;
	bool _leftKeyWasDown;
	bool _rightKeyWasDown;
	bool _nikeKeyWasDown;

}
-(void)beginLinking;
-(void)cancelLinking;
-(void)cancelSearching;
-(void)unlink;
-(void)_receivedActivationNotification:(id)arg1 ;
-(void)_receivedDiscoveryNotification:(id)arg1 ;
-(void)_receivedConnectionNotification:(id)arg1 ;
-(void)_receivedConnectionFailureNotification:(id)arg1 ;
-(void)_discoverDevice;
-(SCD_Struct_SW7)_deviceAddressForSerialNumber:(id)arg1 ;
-(void)_connectToDeviceWithAddress:(SCD_Struct_SW7)arg1 ;
-(void)_registerToReadInput;
-(void)_receivedInputReadNotification:(id)arg1 ;
-(id)_serialNumberForPacket:(id)arg1 timestamp:(unsigned long long)arg2 radioId:(unsigned*)arg3 ;
-(void)_handleSimpleRemotePlayKeyIsDown:(bool)arg1 ;
-(void)_handleSimpleRemoteVolumeUpKeyIsDown:(bool)arg1 ;
-(void)_handleSimpleRemoteVolumeDownKeyIsDown:(bool)arg1 ;
-(void)_handleSimpleRemoteLeftKeyIsDown:(bool)arg1 ;
-(void)_handleSimpleRemoteRightKeyIsDown:(bool)arg1 ;
-(void)_handleNikeKeyIsDown:(bool)arg1 ;
-(void)_handleSimpleRemotePlayKeyUpTimer:(id)arg1 ;
-(void)_postEndWorkoutNotification:(id)arg1 ;
-(void)_handleSimpleRemoteVolumeUpKeyUpTimer:(id)arg1 ;
-(void)_handleSimpleRemoteVolumeDownKeyUpTimer:(id)arg1 ;
-(void)_handleSimpleRemoteLeftKeyUpTimer:(id)arg1 ;
-(void)_postBeginMusicRewindNotification:(id)arg1 ;
-(void)_handleSimpleRemoteRightKeyUpTimer:(id)arg1 ;
-(void)_postBeginMusicFastForwardNotification:(id)arg1 ;
-(void)_handleNikeKeyUpTimer:(id)arg1 ;
-(void)_postFirePowersongNotification:(id)arg1 ;
-(void)beginSearching;
-(void)dealloc;
-(id)init;
-(void)deactivate;
@end
