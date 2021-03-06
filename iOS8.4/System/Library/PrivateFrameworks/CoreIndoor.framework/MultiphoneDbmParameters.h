/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface MultiphoneDbmParameters : PBCodable <NSCopying> {

	float _searchWidth;
	float _variancePerSecond;
	SCD_Struct_Mu1 _has;

}

@property (assign,nonatomic) BOOL hasVariancePerSecond; 
@property (assign,nonatomic) float variancePerSecond;                //@synthesize variancePerSecond=_variancePerSecond - In the implementation block
@property (assign,nonatomic) BOOL hasSearchWidth; 
@property (assign,nonatomic) float searchWidth;                      //@synthesize searchWidth=_searchWidth - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVariancePerSecond:(float)arg1 ;
-(void)setHasVariancePerSecond:(BOOL)arg1 ;
-(BOOL)hasVariancePerSecond;
-(void)setSearchWidth:(float)arg1 ;
-(void)setHasSearchWidth:(BOOL)arg1 ;
-(BOOL)hasSearchWidth;
-(float)variancePerSecond;
-(float)searchWidth;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

