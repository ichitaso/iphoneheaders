/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHXUserShapes : NSObject
+(void)readFromCharSpaceNode:(xmlNode*)arg1 state:(id)arg2 ;
+(float)readRealCoordinate:(xmlNode*)arg1 ;
+(CGPoint)readRealPoint:(xmlNode*)arg1 ;
+(id)readDrawable:(xmlNode*)arg1 anchor:(id)arg2 drawingState:(id)arg3 ;
+(id)readRelativeSizeAnchor:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readAbsoluteSizeAnchor:(xmlNode*)arg1 drawingState:(id)arg2 ;
@end
