/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <StoreBookkeeper/SBKKeyValuePayloadPair.h>
#import <StoreBookkeeper/NSCopying.h>

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKKeyValuePayloadPair, NSCopying> {

	BOOL _hasBeenPlayed;
	NSString* _itemIdentifier;
	double _timestamp;
	double _bookmarkTime;
	unsigned long long _playCount;

}

@property (copy) NSString * itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double bookmarkTime;                             //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign) BOOL hasBeenPlayed;                              //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (assign) unsigned long long playCount;                    //@synthesize playCount=_playCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(BOOL)arg3 ;
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
+(id)_testableMetadataItem_1;
+(id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg1 itemTitle:(id)arg2 albumName:(id)arg3 itemArtistName:(id)arg4 feedURL:(id)arg5 feedGUID:(id)arg6 ;
+(id)metadataWithValuesFromDataSourceItem:(id)arg1 ;
+(id)metadataWithItemIdentifier:(id)arg1 bookmarkTime:(double)arg2 bookmarkTimestamp:(double)arg3 hasBeenPlayed:(BOOL)arg4 playCount:(unsigned long long)arg5 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 ;
-(double)bookmarkTime;
-(unsigned long long)playCount;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(NSString *)itemIdentifier;
-(id)kvsKey;
-(id)kvsPayload;
-(id)kvsValueDescription;
-(id)initAsTestableItem;
-(id)keyValueStorePayload;
-(void)setItemIdentifier:(NSString *)arg1 ;
@end
