/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, CKDPQuery, CKDPRequestedFields, CKDPRecordZoneIdentifier;

@interface CKDPQueryRetrieveRequest : PBRequest <NSCopying> {

	NSData* _continuationMarker;
	unsigned _limit;
	CKDPQuery* _query;
	CKDPRequestedFields* _requestedFields;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) CKDPQuery * query;                                      //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) BOOL hasContinuationMarker; 
@property (nonatomic,retain) NSData * continuationMarker;                            //@synthesize continuationMarker=_continuationMarker - In the implementation block
@property (assign,nonatomic) BOOL hasLimit; 
@property (assign,nonatomic) unsigned limit;                                         //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                  //@synthesize requestedFields=_requestedFields - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQuery:(CKDPQuery *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(BOOL)hasRequestedFields;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(CKDPRequestedFields *)requestedFields;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setHasLimit:(BOOL)arg1 ;
-(BOOL)hasLimit;
-(void)setContinuationMarker:(NSData *)arg1 ;
-(BOOL)hasContinuationMarker;
-(NSData *)continuationMarker;
-(BOOL)hasQuery;
-(unsigned)limit;
-(void)setLimit:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

