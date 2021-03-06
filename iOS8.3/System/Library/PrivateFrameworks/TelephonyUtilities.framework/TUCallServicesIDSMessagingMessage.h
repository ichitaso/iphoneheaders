/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:48:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
	char _cannotBeRelayed;
	char _protoShouldSuppressRingtone;
	char _protoVoicemail;
	char _protoWantsHoldMusic;
	SCD_Struct_TU1 _has;

}

@property (nonatomic,copy,readonly) NSString * typeString; 
@property (nonatomic,copy,readonly) NSString * receivedMessageTypeString; 
@property (assign,nonatomic) int service; 
@property (assign,nonatomic) char wantsHoldMusic; 
@property (assign,nonatomic) int disconnectedReason; 
@property (nonatomic,retain) TUCallModelState * callModelState; 
@property (assign,nonatomic) unsigned char DTMFKey; 
@property (assign,getter=isVoicemail,nonatomic) char voicemail; 
@property (assign,nonatomic) unsigned short hardPauseControllerState; 
@property (assign,nonatomic) int protocolVersion; 
@property (assign,nonatomic) char shouldSuppressRingtone; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasUniqueProxyIdentifier; 
@property (nonatomic,retain) NSString * uniqueProxyIdentifier;                                            //@synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier - In the implementation block
@property (nonatomic,readonly) char hasDestinationID; 
@property (nonatomic,retain) NSString * destinationID;                                                    //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,readonly) char hasSourceIdentifier; 
@property (nonatomic,retain) NSString * sourceIdentifier;                                                 //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) char hasProtoCallModelState; 
@property (nonatomic,retain) TUCallServicesIDSMessagingCallModelState * protoCallModelState;              //@synthesize protoCallModelState=_protoCallModelState - In the implementation block
@property (assign,nonatomic) char hasProtoService; 
@property (assign,nonatomic) unsigned protoService;                                                       //@synthesize protoService=_protoService - In the implementation block
@property (assign,nonatomic) char hasProtoWantsHoldMusic; 
@property (assign,nonatomic) char protoWantsHoldMusic;                                                    //@synthesize protoWantsHoldMusic=_protoWantsHoldMusic - In the implementation block
@property (assign,nonatomic) char hasCannotBeRelayed; 
@property (assign,nonatomic) char cannotBeRelayed;                                                        //@synthesize cannotBeRelayed=_cannotBeRelayed - In the implementation block
@property (nonatomic,readonly) char hasProtoDTMFKey; 
@property (nonatomic,retain) NSData * protoDTMFKey;                                                       //@synthesize protoDTMFKey=_protoDTMFKey - In the implementation block
@property (assign,nonatomic) char hasProtoDisconnectedReason; 
@property (assign,nonatomic) unsigned protoDisconnectedReason;                                            //@synthesize protoDisconnectedReason=_protoDisconnectedReason - In the implementation block
@property (nonatomic,readonly) char hasConferenceIdentifier; 
@property (nonatomic,retain) NSString * conferenceIdentifier;                                             //@synthesize conferenceIdentifier=_conferenceIdentifier - In the implementation block
@property (assign,nonatomic) char hasProtoVoicemail; 
@property (assign,nonatomic) char protoVoicemail;                                                         //@synthesize protoVoicemail=_protoVoicemail - In the implementation block
@property (nonatomic,readonly) char hasCallerNameFromNetwork; 
@property (nonatomic,retain) NSString * callerNameFromNetwork;                                            //@synthesize callerNameFromNetwork=_callerNameFromNetwork - In the implementation block
@property (nonatomic,retain) NSMutableArray * protoCalls;                                                 //@synthesize protoCalls=_protoCalls - In the implementation block
@property (nonatomic,readonly) char hasHardPauseDigits; 
@property (nonatomic,retain) NSString * hardPauseDigits;                                                  //@synthesize hardPauseDigits=_hardPauseDigits - In the implementation block
@property (assign,nonatomic) char hasHardPauseState; 
@property (assign,nonatomic) unsigned hardPauseState;                                                     //@synthesize hardPauseState=_hardPauseState - In the implementation block
@property (assign,nonatomic) char hasReceivedMessageType; 
@property (assign,nonatomic) int receivedMessageType;                                                     //@synthesize receivedMessageType=_receivedMessageType - In the implementation block
@property (assign,nonatomic) char hasProtoProtocolVersion; 
@property (assign,nonatomic) unsigned protoProtocolVersion;                                               //@synthesize protoProtocolVersion=_protoProtocolVersion - In the implementation block
@property (assign,nonatomic) char hasProtoShouldSuppressRingtone; 
@property (assign,nonatomic) char protoShouldSuppressRingtone;                                            //@synthesize protoShouldSuppressRingtone=_protoShouldSuppressRingtone - In the implementation block
@property (nonatomic,readonly) char hasDummyPayload; 
@property (nonatomic,retain) NSData * dummyPayload;                                                       //@synthesize dummyPayload=_dummyPayload - In the implementation block
@property (assign,nonatomic) char hasHostCallCreationTime; 
@property (assign,nonatomic) double hostCallCreationTime;                                                 //@synthesize hostCallCreationTime=_hostCallCreationTime - In the implementation block
@property (assign,nonatomic) char hasMessageSendTime; 
@property (assign,nonatomic) double messageSendTime;                                                      //@synthesize messageSendTime=_messageSendTime - In the implementation block
-(void)setMessageSendTime:(double)arg1 ;
-(void)setDTMFKey:(unsigned char)arg1 ;
-(int)receivedMessageType;
-(unsigned)protoService;
-(void)setProtoService:(unsigned)arg1 ;
-(char)protoWantsHoldMusic;
-(void)setProtoWantsHoldMusic:(char)arg1 ;
-(unsigned)protoDisconnectedReason;
-(void)setProtoDisconnectedReason:(unsigned)arg1 ;
-(TUCallServicesIDSMessagingCallModelState *)protoCallModelState;
-(void)setProtoCallModelState:(TUCallServicesIDSMessagingCallModelState *)arg1 ;
-(NSData *)protoDTMFKey;
-(void)setProtoDTMFKey:(NSData *)arg1 ;
-(char)protoVoicemail;
-(void)setProtoVoicemail:(char)arg1 ;
-(unsigned)hardPauseState;
-(void)setHardPauseState:(unsigned)arg1 ;
-(unsigned)protoProtocolVersion;
-(void)setProtoProtocolVersion:(unsigned)arg1 ;
-(void)setProtoShouldSuppressRingtone:(char)arg1 ;
-(char)protoShouldSuppressRingtone;
-(void)addProtoCall:(id)arg1 ;
-(NSString *)receivedMessageTypeString;
-(unsigned char)DTMFKey;
-(unsigned short)hardPauseControllerState;
-(void)setHardPauseControllerState:(unsigned short)arg1 ;
-(void)addProtocolVersion;
-(void)addDummyPayload;
-(void)addCall:(id)arg1 ;
-(unsigned)protoCallsCount;
-(void)clearProtoCalls;
-(id)protoCallAtIndex:(unsigned)arg1 ;
-(void)setHardPauseDigits:(NSString *)arg1 ;
-(void)setDummyPayload:(NSData *)arg1 ;
-(char)hasUniqueProxyIdentifier;
-(char)hasDestinationID;
-(char)hasSourceIdentifier;
-(char)hasProtoCallModelState;
-(void)setHasProtoService:(char)arg1 ;
-(char)hasProtoService;
-(void)setHasProtoWantsHoldMusic:(char)arg1 ;
-(char)hasProtoWantsHoldMusic;
-(void)setCannotBeRelayed:(char)arg1 ;
-(void)setHasCannotBeRelayed:(char)arg1 ;
-(char)hasCannotBeRelayed;
-(char)hasProtoDTMFKey;
-(void)setHasProtoDisconnectedReason:(char)arg1 ;
-(char)hasProtoDisconnectedReason;
-(char)hasConferenceIdentifier;
-(void)setHasProtoVoicemail:(char)arg1 ;
-(char)hasProtoVoicemail;
-(char)hasCallerNameFromNetwork;
-(char)hasHardPauseDigits;
-(void)setHasHardPauseState:(char)arg1 ;
-(char)hasHardPauseState;
-(void)setReceivedMessageType:(int)arg1 ;
-(void)setHasReceivedMessageType:(char)arg1 ;
-(char)hasReceivedMessageType;
-(void)setHasProtoProtocolVersion:(char)arg1 ;
-(char)hasProtoProtocolVersion;
-(void)setHasProtoShouldSuppressRingtone:(char)arg1 ;
-(char)hasProtoShouldSuppressRingtone;
-(char)hasDummyPayload;
-(void)setHostCallCreationTime:(double)arg1 ;
-(void)setHasHostCallCreationTime:(char)arg1 ;
-(char)hasHostCallCreationTime;
-(void)setHasMessageSendTime:(char)arg1 ;
-(char)hasMessageSendTime;
-(char)cannotBeRelayed;
-(NSMutableArray *)protoCalls;
-(void)setProtoCalls:(NSMutableArray *)arg1 ;
-(NSString *)hardPauseDigits;
-(NSData *)dummyPayload;
-(double)hostCallCreationTime;
-(double)messageSendTime;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)typeString;
-(int)protocolVersion;
-(void)setProtocolVersion:(int)arg1 ;
-(int)service;
-(void)setService:(int)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(char)wantsHoldMusic;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(NSString *)sourceIdentifier;
-(int)disconnectedReason;
-(NSString *)destinationID;
-(NSString *)callerNameFromNetwork;
-(NSString *)conferenceIdentifier;
-(char)isVoicemail;
-(void)setDestinationID:(NSString *)arg1 ;
-(void)setConferenceIdentifier:(NSString *)arg1 ;
-(void)setCallerNameFromNetwork:(NSString *)arg1 ;
-(NSString *)uniqueProxyIdentifier;
-(void)setVoicemail:(char)arg1 ;
-(TUCallModelState *)callModelState;
-(void)setUniqueProxyIdentifier:(NSString *)arg1 ;
-(void)setDisconnectedReason:(int)arg1 ;
-(void)setWantsHoldMusic:(char)arg1 ;
-(void)setShouldSuppressRingtone:(char)arg1 ;
-(char)shouldSuppressRingtone;
-(void)setCallModelState:(TUCallModelState *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

