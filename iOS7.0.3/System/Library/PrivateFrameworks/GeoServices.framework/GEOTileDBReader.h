/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:05 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSString, GEOTileDBMRU;

@interface GEOTileDBReader : NSObject {

	BOOL _defunct;
	BOOL _closed;
	int _editionUpdating;
	NSObject<OS_dispatch_queue>* _readQueue;
	NSString* _path;
	sqlite3Ref _db;
	sqlite3_stmtRef _tileQuery;
	sqlite3_stmtRef _versionQuery;
	GEOTileDBMRU* _tileDBMRU;
	SCD_Struct_GE46* _expirationRecords;
	unsigned _expirationRecordCount;

}

@property (assign) BOOL closed; 
@property (nonatomic,retain) GEOTileDBMRU * tileDBMRU;              //@synthesize tileDBMRU=_tileDBMRU - In the implementation block
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(void)_databaseReset:(id)arg1 ;
-(void)_editionUpdateBegin:(id)arg1 ;
-(void)_editionUpdateEnd:(id)arg1 ;
-(void)_deviceLocking;
-(void)_closeDB;
-(void)_openDB;
-(id)_dataForKey:(GEOTileKey)arg1 ;
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(void)dataForKey:(GEOTileKey*)arg1 asyncHandler:(/*^block*/ id)arg2 ;
-(void)dataForKeys:(id)arg1 asyncHandler:(/*^block*/ id)arg2 ;
-(void)setExpirationRecords:(SCD_Struct_GE46*)arg1 count:(unsigned)arg2 ;
-(id)tileDBMRU;
-(void)setTileDBMRU:(id)arg1 ;
-(id)dataForKey:(GEOTileKey*)arg1 ;
@end
