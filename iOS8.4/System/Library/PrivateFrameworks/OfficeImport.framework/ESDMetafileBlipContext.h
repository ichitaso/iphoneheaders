/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDBlipContext.h>

@interface ESDMetafileBlipContext : ESDBlipContext {

	unsigned mCb;
	unsigned defaultHeaderSize;

}

@property (assign) unsigned defaultHeaderSize; 
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 uncompressed:(unsigned)arg3 stream:(SsrwOOStream*)arg4 streamID:(unsigned)arg5 ;
-(void)setDefaultHeaderSize:(unsigned)arg1 ;
-(unsigned)defaultHeaderSize;
@end

