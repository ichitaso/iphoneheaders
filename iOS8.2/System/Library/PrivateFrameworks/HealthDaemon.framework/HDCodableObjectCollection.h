/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>

@class NSMutableArray, HDCodableSource, NSString;

@interface HDCodableObjectCollection : PBCodable <NSCopying> {

	NSMutableArray* _activityCaches;
	NSMutableArray* _categorySamples;
	NSMutableArray* _correlations;
	NSMutableArray* _quantitySamples;
	HDCodableSource* _source;
	NSString* _sourceBundleIdentifier;
	NSMutableArray* _workouts;

}

@property (nonatomic,readonly) char hasSourceBundleIdentifier; 
@property (nonatomic,retain) NSString * sourceBundleIdentifier;              //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,readonly) char hasSource; 
@property (nonatomic,retain) HDCodableSource * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSMutableArray * categorySamples;               //@synthesize categorySamples=_categorySamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * quantitySamples;               //@synthesize quantitySamples=_quantitySamples - In the implementation block
@property (nonatomic,retain) NSMutableArray * workouts;                      //@synthesize workouts=_workouts - In the implementation block
@property (nonatomic,retain) NSMutableArray * correlations;                  //@synthesize correlations=_correlations - In the implementation block
@property (nonatomic,retain) NSMutableArray * activityCaches;                //@synthesize activityCaches=_activityCaches - In the implementation block
-(unsigned)count;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(HDCodableSource *)source;
-(void)setSource:(HDCodableSource *)arg1 ;
-(char)hasSource;
-(NSMutableArray *)activityCaches;
-(id)decodedObjects;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(NSMutableArray *)workouts;
-(void)addActivityCaches:(id)arg1 ;
-(void)addCategorySamples:(id)arg1 ;
-(void)addQuantitySamples:(id)arg1 ;
-(void)addWorkouts:(id)arg1 ;
-(void)addCorrelations:(id)arg1 ;
-(NSMutableArray *)categorySamples;
-(NSMutableArray *)quantitySamples;
-(NSMutableArray *)correlations;
-(char)isEquivalentToObjectCollection:(id)arg1 ;
-(unsigned)categorySamplesCount;
-(void)clearCategorySamples;
-(id)categorySamplesAtIndex:(unsigned)arg1 ;
-(unsigned)quantitySamplesCount;
-(void)clearQuantitySamples;
-(id)quantitySamplesAtIndex:(unsigned)arg1 ;
-(unsigned)workoutsCount;
-(void)clearWorkouts;
-(id)workoutsAtIndex:(unsigned)arg1 ;
-(unsigned)correlationsCount;
-(void)clearCorrelations;
-(id)correlationsAtIndex:(unsigned)arg1 ;
-(unsigned)activityCachesCount;
-(void)clearActivityCaches;
-(id)activityCachesAtIndex:(unsigned)arg1 ;
-(char)hasSourceBundleIdentifier;
-(void)setCategorySamples:(NSMutableArray *)arg1 ;
-(void)setQuantitySamples:(NSMutableArray *)arg1 ;
-(void)setWorkouts:(NSMutableArray *)arg1 ;
-(void)setCorrelations:(NSMutableArray *)arg1 ;
-(void)setActivityCaches:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

