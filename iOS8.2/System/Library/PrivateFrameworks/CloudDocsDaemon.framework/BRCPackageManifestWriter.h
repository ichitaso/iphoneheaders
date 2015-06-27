/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PBMessageStreamWriter, NSOutputStream, NSError;

@interface BRCPackageManifestWriter : NSObject {

	PBMessageStreamWriter* _writer;
	NSOutputStream* _stream;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(char)done;
-(char)addItem:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)_handleStreamError;
-(char)addLocalItem:(id)arg1 ;
-(NSError *)error;
@end
