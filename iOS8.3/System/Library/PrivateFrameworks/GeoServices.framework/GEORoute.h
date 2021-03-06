/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray, NSData, NSString;

@interface GEORoute : PBCodable <NSCopying> {

	SCD_Struct_GE54* _advisorys;
	SCD_Struct_GE48* _incidentEndOffsetsInRoutes;
	SCD_Struct_GE48* _incidentIndices;
	SCD_Struct_GE48* _trafficColorOffsets;
	SCD_Struct_GE48* _trafficColors;
	NSMutableArray* _advisoryNotices;
	NSData* _arrivalRouteID;
	unsigned _arrivalStepID;
	NSData* _basicPoints;
	NSData* _departureRouteID;
	unsigned _departureStepID;
	unsigned _distance;
	int _drivingSide;
	unsigned _expectedTime;
	unsigned _historicTravelTime;
	NSString* _name;
	NSString* _phoneticName;
	NSData* _routeID;
	NSMutableArray* _routeNames;
	int _routeType;
	NSMutableArray* _steps;
	int _transportType;
	NSData* _unpackedLatLngVertices;
	NSData* _zilchPoints;
	SCD_Struct_GE60 _has;

}

@property (readonly) unsigned pointCount; 
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) int transportType;                                       //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                  //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                                 //@synthesize phoneticName=_phoneticName - In the implementation block
@property (assign,nonatomic) char hasDistance; 
@property (assign,nonatomic) unsigned distance;                                       //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) char hasExpectedTime; 
@property (assign,nonatomic) unsigned expectedTime;                                   //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) char hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                        //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) char hasRouteType; 
@property (assign,nonatomic) int routeType;                                           //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) char hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                    //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) char hasDrivingSide; 
@property (assign,nonatomic) int drivingSide;                                         //@synthesize drivingSide=_drivingSide - In the implementation block
@property (nonatomic,readonly) char hasDepartureRouteID; 
@property (nonatomic,retain) NSData * departureRouteID;                               //@synthesize departureRouteID=_departureRouteID - In the implementation block
@property (assign,nonatomic) char hasDepartureStepID; 
@property (assign,nonatomic) unsigned departureStepID;                                //@synthesize departureStepID=_departureStepID - In the implementation block
@property (nonatomic,readonly) char hasArrivalRouteID; 
@property (nonatomic,retain) NSData * arrivalRouteID;                                 //@synthesize arrivalRouteID=_arrivalRouteID - In the implementation block
@property (assign,nonatomic) char hasArrivalStepID; 
@property (assign,nonatomic) unsigned arrivalStepID;                                  //@synthesize arrivalStepID=_arrivalStepID - In the implementation block
@property (nonatomic,readonly) char hasBasicPoints; 
@property (nonatomic,retain) NSData * basicPoints;                                    //@synthesize basicPoints=_basicPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * advisoryNotices;                        //@synthesize advisoryNotices=_advisoryNotices - In the implementation block
@property (nonatomic,readonly) unsigned trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,retain) NSMutableArray * routeNames;                             //@synthesize routeNames=_routeNames - In the implementation block
@property (assign,nonatomic) char hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                             //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (nonatomic,readonly) unsigned advisorysCount; 
@property (nonatomic,readonly) int* advisorys; 
@property (nonatomic,readonly) char hasUnpackedLatLngVertices; 
@property (nonatomic,retain) NSData * unpackedLatLngVertices;                         //@synthesize unpackedLatLngVertices=_unpackedLatLngVertices - In the implementation block
@property (nonatomic,readonly) unsigned incidentIndicesCount; 
@property (nonatomic,readonly) unsigned* incidentIndices; 
@property (nonatomic,readonly) unsigned incidentEndOffsetsInRoutesCount; 
@property (nonatomic,readonly) unsigned* incidentEndOffsetsInRoutes; 
-(int)transportTypeForStep:(id)arg1 ;
-(int)transportTypeForStep:(id)arg1 ;
-(CGImageRef)_mapKitImage;
-(id)maneuverImageForStep:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 ;
-(id)instructionsForStep:(id)arg1 ;
-(int)routeType;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)debugDescription;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(char)hasRouteID;
-(char)hasZilchPoints;
-(NSData *)routeID;
-(NSData *)zilchPoints;
-(unsigned)expectedTime;
-(id)stepAtIndex:(unsigned)arg1 ;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)addStep:(id)arg1 ;
-(void)clearSteps;
-(void)clearTrafficColors;
-(unsigned)trafficColorAtIndex:(unsigned)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(void)clearTrafficColorOffsets;
-(unsigned)trafficColorOffsetAtIndex:(unsigned)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)setDistance:(unsigned)arg1 ;
-(void)setHasDistance:(char)arg1 ;
-(char)hasDistance;
-(void)setTransportType:(int)arg1 ;
-(char)hasTransportType;
-(void)setPhoneticName:(NSString *)arg1 ;
-(char)hasPhoneticName;
-(NSString *)phoneticName;
-(void)setDepartureRouteID:(NSData *)arg1 ;
-(void)setArrivalRouteID:(NSData *)arg1 ;
-(void)setBasicPoints:(NSData *)arg1 ;
-(void)setAdvisoryNotices:(NSMutableArray *)arg1 ;
-(void)setRouteNames:(NSMutableArray *)arg1 ;
-(void)setUnpackedLatLngVertices:(NSData *)arg1 ;
-(void)addAdvisoryNotice:(id)arg1 ;
-(void)addRouteName:(id)arg1 ;
-(unsigned)advisoryNoticesCount;
-(void)clearAdvisoryNotices;
-(id)advisoryNoticeAtIndex:(unsigned)arg1 ;
-(unsigned)routeNamesCount;
-(void)clearRouteNames;
-(id)routeNameAtIndex:(unsigned)arg1 ;
-(unsigned)advisorysCount;
-(void)clearAdvisorys;
-(int)advisoryAtIndex:(unsigned)arg1 ;
-(void)addAdvisory:(int)arg1 ;
-(unsigned)incidentIndicesCount;
-(void)clearIncidentIndices;
-(unsigned)incidentIndicesAtIndex:(unsigned)arg1 ;
-(void)addIncidentIndices:(unsigned)arg1 ;
-(unsigned)incidentEndOffsetsInRoutesCount;
-(void)clearIncidentEndOffsetsInRoutes;
-(unsigned)incidentEndOffsetsInRouteAtIndex:(unsigned)arg1 ;
-(void)addIncidentEndOffsetsInRoute:(unsigned)arg1 ;
-(void)setHasTransportType:(char)arg1 ;
-(void)setExpectedTime:(unsigned)arg1 ;
-(void)setHasExpectedTime:(char)arg1 ;
-(char)hasExpectedTime;
-(void)setRouteType:(int)arg1 ;
-(void)setHasRouteType:(char)arg1 ;
-(char)hasRouteType;
-(void)setDrivingSide:(int)arg1 ;
-(void)setHasDrivingSide:(char)arg1 ;
-(char)hasDrivingSide;
-(char)hasDepartureRouteID;
-(void)setDepartureStepID:(unsigned)arg1 ;
-(void)setHasDepartureStepID:(char)arg1 ;
-(char)hasDepartureStepID;
-(char)hasArrivalRouteID;
-(void)setArrivalStepID:(unsigned)arg1 ;
-(void)setHasArrivalStepID:(char)arg1 ;
-(char)hasArrivalStepID;
-(char)hasBasicPoints;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(char)arg1 ;
-(char)hasHistoricTravelTime;
-(int*)advisorys;
-(void)setAdvisorys:(int*)arg1 count:(unsigned)arg2 ;
-(char)hasUnpackedLatLngVertices;
-(unsigned*)incidentIndices;
-(void)setIncidentIndices:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned*)incidentEndOffsetsInRoutes;
-(void)setIncidentEndOffsetsInRoutes:(unsigned*)arg1 count:(unsigned)arg2 ;
-(NSData *)departureRouteID;
-(unsigned)departureStepID;
-(NSData *)arrivalRouteID;
-(unsigned)arrivalStepID;
-(NSData *)basicPoints;
-(NSMutableArray *)advisoryNotices;
-(NSMutableArray *)routeNames;
-(unsigned)historicTravelTime;
-(NSData *)unpackedLatLngVertices;
-(char)unpackLatLngVertices;
-(void*)controlPoints;
-(int)transportTypeForStep:(id)arg1 ;
-(id)newETARoute;
-(char)unpackZilchPoints;
-(char)unpackBasicPoints;
-(unsigned)indexForStepID:(unsigned)arg1 ;
-(id)newETARouteFromStepIndex:(unsigned)arg1 stepPercentRemaining:(double)arg2 ;
-(unsigned)distanceFromStepIndex:(unsigned)arg1 toStepIndex:(unsigned)arg2 ;
-(id)simplifiedDescription;
-(id)convertToFullRoute:(id)arg1 includeDepartureRoutes:(char)arg2 uniquePointRange:(NSRange*)arg3 ;
-(char)isContingentRouteFor:(id)arg1 afterPoint:(unsigned)arg2 mainRoutes:(id)arg3 ;
-(unsigned)distance;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasName;
-(unsigned)pointCount;
-(unsigned)trafficColorsCount;
-(SCD_Struct_GE15)pointAt:(unsigned)arg1 ;
-(unsigned)trafficColorOffsetsCount;
-(unsigned*)trafficColorOffsets;
-(unsigned*)trafficColors;
-(unsigned)stepsCount;
-(int)transportType;
-(unsigned)stepIndexForPointIndex:(unsigned)arg1 ;
-(NSMutableArray *)steps;
-(int)drivingSide;
@end

