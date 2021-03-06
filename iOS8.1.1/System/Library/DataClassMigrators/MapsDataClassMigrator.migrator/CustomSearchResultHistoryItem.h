/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/HistoryItem.h>

@class SearchResult, NSString;

@interface CustomSearchResultHistoryItem : NSObject <HistoryItem> {

	SearchResult* _customSearchResult;

}

@property (nonatomic,readonly) SearchResult * customSearchResult;              //@synthesize customSearchResult=_customSearchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SearchResult *)customSearchResult;
-(id)initWithSearchResult:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)timestamp;
-(int)type;
@end

