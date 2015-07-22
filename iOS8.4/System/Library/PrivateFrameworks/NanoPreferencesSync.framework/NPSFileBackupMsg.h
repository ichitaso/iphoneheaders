/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/nanoprefsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <nanoprefsyncd/nanoprefsyncd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanoprefsyncd/NSCopying.h>

@class NSData;

@interface NPSFileBackupMsg : PBCodable <NSCopying> {

	NSData* _fileURL;

}

@property (nonatomic,readonly) BOOL hasFileURL; 
@property (nonatomic,retain) NSData * fileURL;               //@synthesize fileURL=_fileURL - In the implementation block
-(BOOL)hasFileURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)fileURL;
-(void)setFileURL:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
