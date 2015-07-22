/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSInputStream : NSStream

@property (readonly) BOOL hasBytesAvailable; 
+(id)inputStreamWithData:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)inputStreamWithURL:(id)arg1 ;
+(id)inputStreamWithFileAtPath:(id)arg1 ;
-(SCD_Struct_NS12)_cfStreamError;
-(unsigned long long)_cfTypeID;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)hasBytesAvailable;
@end
