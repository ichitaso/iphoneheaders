/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@interface ALSLocation : PBCodable {

	long long _latitude;
	long long _longitude;
	int _accuracy;
	int _altitude;
	int _confidence;
	unsigned _infoMask;
	int _locationType;
	int _reach;
	unsigned _score;
	int _verticalAccuracy;
	SCD_Struct_CR4 _has;

}

@property (assign,nonatomic) long long latitude;                    //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) long long longitude;                   //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) int accuracy;                          //@synthesize accuracy=_accuracy - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                      //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) int altitude;                          //@synthesize altitude=_altitude - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalAccuracy; 
@property (assign,nonatomic) int verticalAccuracy;                  //@synthesize verticalAccuracy=_verticalAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                        //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) unsigned score;                        //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasReach; 
@property (assign,nonatomic) int reach;                             //@synthesize reach=_reach - In the implementation block
@property (assign,nonatomic) BOOL hasInfoMask; 
@property (assign,nonatomic) unsigned infoMask;                     //@synthesize infoMask=_infoMask - In the implementation block
-(BOOL)hasInfoMask;
-(unsigned)infoMask;
-(BOOL)hasReach;
-(int)reach;
-(BOOL)hasLocationType;
-(void)setReach:(int)arg1 ;
-(void)setInfoMask:(unsigned)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(void)setHasReach:(BOOL)arg1 ;
-(void)setHasInfoMask:(BOOL)arg1 ;
-(int)confidence;
-(void)setLatitude:(long long)arg1 ;
-(void)setLongitude:(long long)arg1 ;
-(unsigned)score;
-(void)setAccuracy:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasAltitude;
-(void)setAltitude:(int)arg1 ;
-(BOOL)hasVerticalAccuracy;
-(void)setVerticalAccuracy:(int)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(void)setHasVerticalAccuracy:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(long long)latitude;
-(long long)longitude;
-(int)verticalAccuracy;
-(int)altitude;
-(void)setLocationType:(int)arg1 ;
-(int)locationType;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasScore;
-(void)setScore:(unsigned)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(int)accuracy;
@end

