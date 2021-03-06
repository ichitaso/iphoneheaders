/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class SearchResult;

@interface PersistentSearchResultHistoryItem : PBCodable <NSCopying> {

	SearchResult* _searchResult;

}

@property (nonatomic,readonly) bool hasSearchResult; 
@property (nonatomic,retain) SearchResult * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
-(void)setSearchResult:(id)arg1 ;
-(bool)hasSearchResult;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(void).cxx_destruct;
-(bool)readFrom:(id)arg1 ;
-(id)searchResult;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

