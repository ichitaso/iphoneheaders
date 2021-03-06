/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <callservicesd/callservicesd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <callservicesd/NSCopying.h>

@class NSString, NSData, TUCallServicesIDSMessagingCallModelState, NSMutableArray, TUCallModelState;

@interface TUCallServicesIDSMessagingMessage : PBCodable <NSCopying> {

	double _hostCallCreationTime;
	double _messageSendTime;
	NSString* _callerNameFromNetwork;
	NSString* _conferenceIdentifier;
	NSString* _destinationID;
	NSData* _dummyPayload;
	NSString* _hardPauseDigits;
	unsigned _hardPauseState;
	TUCallServicesIDSMessagingCallModelState* _protoCallModelState;
	NSMutableArray* _protoCalls;
	NSData* _protoDTMFKey;
	unsigned _protoDisconnectedReason;
	unsigned _protoProtocolVersion;
	unsigned _protoService;
	int _receivedMessageType;
	NSString* _sourceIdentifier;
	int _type;
	NSString* _uniqueProxyIdentifier;
	BOOL _cannotBeRelayed;
	BOOL _protoShouldSuppressRingtone;
	BOOL _protoVoicemail;
	BOOL _protoWantsHoldMusic;
	SCD_Struct_TU1 _has;

}

@property (nonatomic,copy,readonly) NSString * typeString; 
@property (nonatomic,copy,readonly) NSString * receivedMessageTypeString; 
@property (assign,nonatomic) int service; 
@property (assign,nonatomic) BOOL wantsHoldMusic; 
@property (assign,nonatomic) int disconnectedReason; 
@property (nonatomic,retain) TUCallModelState * callModelState; 
@property (assign,nonatomic) unsigned char DTMFKey; 
@property (assign,getter=isVoicemail,nonatomic) BOOL voicemail; 
@property (assign,nonatomic) unsigned short hardPauseControllerState; 
@property (assign,nonatomic) int protocolVersion; 
@property (assign,nonatomic) BOOL shouldSuppressRingtone; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueProxyIdentifier; 
@property (nonatomic,retain) NSString * uniqueProxyIdentifier;                                            //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationID; 
@property (nonatomic,retain) NSString * destinationID;                                                    //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceIdentifier; 
@property (nonatomic,retain) NSString * sourceIdentifier;                                                 //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasProtoCallModelState; 
@property (nonatomic,retain) TUCallServicesIDSMessagingCallModelState * protoCallModelState;              //@synthesize protoCallModelState=_protoCallModelState - In the implementation block
@property (assign,nonatomic) BOOL hasProtoService; 
@property (assign,nonatomic) unsigned protoService;                                                       //@synthesize protoService=_protoService - In the implementation block
@property (assign,nonatomic) BOOL hasProtoWantsHoldMusic; 
@property (assign,nonatomic) BOOL protoWantsHoldMusic;                                                    //@synthesize protoWantsHoldMusic=_protoWantsHoldMusic - In the implementation block
@property (assign,nonatomic) BOOL hasCannotBeRelayed; 
@property (assign,nonatomic) BOOL cannotBeRelayed;                                                        //@synthesize cannotBeRelayed=_cannotBeRelayed - In the implementation block
@property (nonatomic,readonly) BOOL hasProtoDTMFKey; 
@property (nonatomic,retain) NSData * protoDTMFKey;                                                       //@synthesize protoDTMFKey=_protoDTMFKey - In the implementation block
@property (assign,nonatomic) BOOL hasProtoDisconnectedReason; 
@property (assign,nonatomic) unsigned protoDisconnectedReason;                                            //@synthesize protoDisconnectedReason=_protoDisconnectedReason - In the implementation block
@property (nonatomic,readonly) BOOL hasConferenceIdentifier; 
@property (nonatomic,retain) NSString * conferenceIdentifier;                                             //@synthesize conferenceIdentifier=_conferenceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasProtoVoicemail; 
@property (assign,nonatomic) BOOL protoVoicemail;                                                         //@synthesize protoVoicemail=_protoVoicemail - In the implementation block
@property (nonatomic,readonly) BOOL hasCallerNameFromNetwork; 
@property (nonatomic,retain) NSString * callerNameFromNetwork;                                            //@synthesize callerNameFromNetwork=_callerNameFromNetwork - In the implementation block
@property (nonatomic,retain) NSMutableArray * protoCalls;                                                 //@synthesize protoCalls=_protoCalls - In the implementation block
@property (nonatomic,readonly) BOOL hasHardPauseDigits; 
@property (nonatomic,retain) NSString * hardPauseDigits;                                                  //@synthesize hardPauseDigits=_hardPauseDigits - In the implementation block
@property (assign,nonatomic) BOOL hasHardPauseState; 
@property (assign,nonatomic) unsigned hardPauseState;                                                     //@synthesize hardPauseState=_hardPauseState - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedMessageType; 
@property (assign,nonatomic) int receivedMessageType;                                                     //@synthesize receivedMessageType=_receivedMessageType - In the implementation block
@property (assign,nonatomic) BOOL hasProtoProtocolVersion; 
@property (assign,nonatomic) unsigned protoProtocolVersion;                                               //@synthesize protoProtocolVersion=_protoProtocolVersion - In the implementation block
@property (assign,nonatomic) BOOL hasProtoShouldSuppressRingtone; 
@property (assign,nonatomic) BOOL protoShouldSuppressRingtone;                                            //@synthesize protoShouldSuppressRingtone=_protoShouldSuppressRingtone - In the implementation block
@property (nonatomic,readonly) BOOL hasDummyPayload; 
@property (nonatomic,retain) NSData * dummyPayload;                                                       //@synthesize dummyPayload=_dummyPayload - In the implementation block
@property (assign,nonatomic) BOOL hasHostCallCreationTime; 
@property (assign,nonatomic) double hostCallCreationTime;                                                 //@synthesize hostCallCreationTime=_hostCallCreationTime - In the implementation block
@property (assign,nonatomic) BOOL hasMessageSendTime; 
@property (assign,nonatomic) double messageSendTime;                                                      //@synthesize messageSendTime=_messageSendTime - In the implementation block
-(void)setDTMFKey:(unsigned char)arg1 ;
-(NSString *)receivedMessageTypeString;
-(unsigned char)DTMFKey;
-(unsigned short)hardPauseControllerState;
-(void)setHardPauseControllerState:(unsigned short)arg1 ;
-(void)addProtocolVersion;
-(void)addDummyPayload;
-(void)addCall:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithType:(int)arg1 ;
-(NSString *)typeString;
-(int)protocolVersion;
-(void)setProtocolVersion:(int)arg1 ;
-(int)service;
-(void)setService:(int)arg1 ;
-(BOOL)wantsHoldMusic;
-(int)disconnectedReason;
-(BOOL)isVoicemail;
-(void)setVoicemail:(BOOL)arg1 ;
-(TUCallModelState *)callModelState;
-(void)setDisconnectedReason:(int)arg1 ;
-(void)setWantsHoldMusic:(BOOL)arg1 ;
-(void)setShouldSuppressRingtone:(BOOL)arg1 ;
-(BOOL)shouldSuppressRingtone;
-(void)setCallModelState:(TUCallModelState *)arg1 ;
-(void)setMessageSendTime:(double)arg1 ;
-(int)receivedMessageType;
-(unsigned)protoService;
-(void)setProtoService:(unsigned)arg1 ;
-(BOOL)protoWantsHoldMusic;
-(void)setProtoWantsHoldMusic:(BOOL)arg1 ;
-(unsigned)protoDisconnectedReason;
-(void)setProtoDisconnectedReason:(unsigned)arg1 ;
-(TUCallServicesIDSMessagingCallModelState *)protoCallModelState;
-(void)setProtoCallModelState:(TUCallServicesIDSMessagingCallModelState *)arg1 ;
-(NSData *)protoDTMFKey;
-(void)setProtoDTMFKey:(NSData *)arg1 ;
-(BOOL)protoVoicemail;
-(void)setProtoVoicemail:(BOOL)arg1 ;
-(unsigned)hardPauseState;
-(void)setHardPauseState:(unsigned)arg1 ;
-(unsigned)protoProtocolVersion;
-(void)setProtoProtocolVersion:(unsigned)arg1 ;
-(void)setProtoShouldSuppressRingtone:(BOOL)arg1 ;
-(BOOL)protoShouldSuppressRingtone;
-(void)addProtoCall:(id)arg1 ;
-(unsigned long long)protoCallsCount;
-(void)clearProtoCalls;
-(id)protoCallAtIndex:(unsigned long long)arg1 ;
-(void)setHardPauseDigits:(NSString *)arg1 ;
-(void)setDummyPayload:(NSData *)arg1 ;
-(BOOL)hasUniqueProxyIdentifier;
-(BOOL)hasDestinationID;
-(BOOL)hasSourceIdentifier;
-(BOOL)hasProtoCallModelState;
-(void)setHasProtoService:(BOOL)arg1 ;
-(BOOL)hasProtoService;
-(void)setHasProtoWantsHoldMusic:(BOOL)arg1 ;
-(BOOL)hasProtoWantsHoldMusic;
-(void)setCannotBeRelayed:(BOOL)arg1 ;
-(void)setHasCannotBeRelayed:(BOOL)arg1 ;
-(BOOL)hasCannotBeRelayed;
-(BOOL)hasProtoDTMFKey;
-(void)setHasProtoDisconnectedReason:(BOOL)arg1 ;
-(BOOL)hasProtoDisconnectedReason;
-(BOOL)hasConferenceIdentifier;
-(void)setHasProtoVoicemail:(BOOL)arg1 ;
-(BOOL)hasProtoVoicemail;
-(BOOL)hasCallerNameFromNetwork;
-(BOOL)hasHardPauseDigits;
-(void)setHasHardPauseState:(BOOL)arg1 ;
-(BOOL)hasHardPauseState;
-(void)setReceivedMessageType:(int)arg1 ;
-(void)setHasReceivedMessageType:(BOOL)arg1 ;
-(BOOL)hasReceivedMessageType;
-(void)setHasProtoProtocolVersion:(BOOL)arg1 ;
-(BOOL)hasProtoProtocolVersion;
-(void)setHasProtoShouldSuppressRingtone:(BOOL)arg1 ;
-(BOOL)hasProtoShouldSuppressRingtone;
-(BOOL)hasDummyPayload;
-(void)setHostCallCreationTime:(double)arg1 ;
-(void)setHasHostCallCreationTime:(BOOL)arg1 ;
-(BOOL)hasHostCallCreationTime;
-(void)setHasMessageSendTime:(BOOL)arg1 ;
-(BOOL)hasMessageSendTime;
-(BOOL)cannotBeRelayed;
-(NSMutableArray *)protoCalls;
-(void)setProtoCalls:(NSMutableArray *)arg1 ;
-(NSString *)hardPauseDigits;
-(NSData *)dummyPayload;
-(double)hostCallCreationTime;
-(double)messageSendTime;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(NSString *)sourceIdentifier;
-(NSString *)destinationID;
-(NSString *)callerNameFromNetwork;
-(NSString *)conferenceIdentifier;
-(void)setDestinationID:(NSString *)arg1 ;
-(void)setConferenceIdentifier:(NSString *)arg1 ;
-(void)setCallerNameFromNetwork:(NSString *)arg1 ;
-(NSString *)uniqueProxyIdentifier;
-(void)setUniqueProxyIdentifier:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

