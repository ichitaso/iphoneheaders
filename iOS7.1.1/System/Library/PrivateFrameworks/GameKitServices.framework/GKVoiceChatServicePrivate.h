/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GameKitServices-Structs.h>
#import <AVConference/VideoConferenceDelegate.h>
#import <AVConference/VideoConferenceRealTimeChannel.h>

@protocol GKVoiceChatClient;
@class GKVoiceChatDictionary, NSString, LoopbackSocketTunnel, NSRecursiveLock, NSLock, GKVoiceChatService, VideoConference;

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate, VideoConferenceRealTimeChannel> {

	<GKVoiceChatClient>* client;
	bool outputMeteringEnabled;
	bool inputMeteringEnabled;
	float outputMeterLevel;
	float inputMeterLevel;
	bool microphoneMuted;
	unsigned curCallID;
	int state;
	GKVoiceChatDictionary* incomingCallDict;
	GKVoiceChatDictionary* outgoingCallDict;
	NSString* sdp;
	tagCONNRESULT* currentConnResult;
	LoopbackSocketTunnel* tunnel;
	NSRecursiveLock* stateLock;
	NSLock* clientLock;
	GKVoiceChatService* wrapperService;
	int didUseICE;
	int bundle;
	bool forceNoICE;
	VideoConference* conf;
	bool clientHasRTChannel;
	int chatMode;
	bool focus;

}

@property (assign) int state; 
@property (assign) int chatMode; 
@property (assign) GKVoiceChatService * wrapperService; 
@property (assign,nonatomic) id client; 
@property (getter=isMicrophoneMuted) bool microphoneMuted; 
@property (assign) float remoteParticipantVolume; 
@property (getter=isOutputMeteringEnabled) bool outputMeteringEnabled; 
@property (getter=isInputMeteringEnabled) bool inputMeteringEnabled; 
@property (nonatomic,readonly) float outputMeterLevel; 
@property (nonatomic,readonly) float inputMeterLevel; 
@property (getter=isFocus) bool focus; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* remoteVideoLayer; 
@property (readonly) double localFramerate; 
@property (readonly) double localBitrate; 
@property (readonly) double remoteFramerate; 
@property (readonly) double remoteBitrate; 
+(id)defaultVoiceChatService;
-(void)dealloc;
-(id)init;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)cleanup;
-(void)setRemoteVideoLayer:(void*)arg1 ;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(bool)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(bool)arg1 ;
-(bool)isInputMeteringEnabled;
-(void)setInputMeteringEnabled:(bool)arg1 ;
-(float)outputMeterLevel;
-(float)inputMeterLevel;
-(void)setMicrophoneMuted:(bool)arg1 ;
-(bool)isMicrophoneMuted;
-(void*)remoteVideoLayer;
-(void)videoConference:(id)arg1 didStartSession:(bool)arg2 withCallID:(unsigned)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned)arg2 error:(id)arg3 ;
-(void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3 ;
-(void)resetState;
-(void)setChatMode:(int)arg1 ;
-(void)forceNoICE:(bool)arg1 ;
-(int)chatMode;
-(bool)isFocus;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void)setFocus:(bool)arg1 ;
-(void)getNSError:(id*)arg1 code:(long long)arg2 description:(id)arg3 reason:(id)arg4 ;
-(id)createInvite:(id*)arg1 toParticipant:(id)arg2 callID:(unsigned*)arg3 ;
-(id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned long long)arg2 error:(id*)arg3 ;
-(int)startICEConnectionCheck:(id)arg1 isCaller:(bool)arg2 withCallID:(unsigned)arg3 ;
-(void)informClientVoiceChatDidNotStart:(id)arg1 ;
-(void)informClientOfInviteFromParticipant:(id)arg1 ;
-(void)informClientVoiceChatDidStart:(id)arg1 ;
-(void)informClientVoiceChatDidStop:(id)arg1 ;
-(bool)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2 ;
-(void)stopVoiceChatProc:(id)arg1 ;
-(bool)acceptCallID:(unsigned)arg1 error:(id*)arg2 ;
-(void)denyCallID:(unsigned)arg1 ;
-(void)receivedData:(id)arg1 fromParticipantID:(id)arg2 ;
-(double)localFramerate;
-(double)localBitrate;
-(double)remoteFramerate;
-(double)remoteBitrate;
-(id)localDisplayNameForCallID:(unsigned)arg1 ;
-(id)remoteDisplayNameForCallID:(unsigned)arg1 ;
-(int)startICEConnectionCheck:(id)arg1 isCaller:(bool)arg2 ;
-(void)informClientVoiceChatDidStartMainSelector:(id)arg1 ;
-(void)informClientVoiceChatDidNotStartMainSelector:(id)arg1 ;
-(bool)inviteIsValid:(id)arg1 ;
-(void)stopVoiceChatWithParticipantID:(id)arg1 ;
-(void)getNSError:(id*)arg1 code:(long long)arg2 description:(id)arg3 hResult:(int)arg4 ;
-(float)remoteParticipantVolume;
-(void)setRemoteParticipantVolume:(float)arg1 ;
-(id)wrapperService;
-(void)setWrapperService:(id)arg1 ;
-(void)setClient:(id)arg1 ;
-(id)client;
@end

