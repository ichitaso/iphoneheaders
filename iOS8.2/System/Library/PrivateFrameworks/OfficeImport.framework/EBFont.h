/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EBFont : NSObject
+(int)convertXlScriptEnumToED:(int)arg1 ;
+(int)convertXlUnderlineEnumToED:(int)arg1 ;
+(id)edFontFromXlFont:(XlFont*)arg1 edResources:(id)arg2 ;
+(id)edFontFromXlDXfFont:(XlDXfFont*)arg1 edResources:(id)arg2 ;
+(int)convertEDScriptEnumToXl:(int)arg1 ;
+(int)convertEDUnderlineEnumToXl:(int)arg1 ;
@end
