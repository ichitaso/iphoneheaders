/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, GKDiscovery, GKPlayer, NSDictionary;

@interface GKNearbyDevice : NSObject {

	NSString* _deviceID;
	GKDiscovery* _discovery;
	GKPlayer* _player;
	long long _state;
	NSDictionary* _pendingInvite;

}

@property (nonatomic,retain) NSString * deviceID;                       //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) long long state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GKDiscovery * discovery;                   //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingInvite;              //@synthesize pendingInvite=_pendingInvite - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                         //@synthesize player=_player - In the implementation block
+(id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2 ;
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setDiscovery:(GKDiscovery *)arg1 ;
-(void)sendDictionary:(id)arg1 ;
-(GKDiscovery *)discovery;
-(NSDictionary *)pendingInvite;
-(void)setPendingInvite:(NSDictionary *)arg1 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(GKPlayer *)player;
@end

