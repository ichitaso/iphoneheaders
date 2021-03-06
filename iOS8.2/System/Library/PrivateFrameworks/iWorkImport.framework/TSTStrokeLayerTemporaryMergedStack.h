/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTStrokeLayerStack.h>

@interface TSTStrokeLayerTemporaryMergedStack : TSTStrokeLayerStack
+(float)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 inRange:(TSTSimpleRange)arg3 cachedMax:(float)arg4 ;
+(float)p_maxWidthForMajorStrokes:(id)arg1 mergedWithMinorStrokes:(id)arg2 atIndex:(int)arg3 ;
-(void)lockForRead;
-(void)lockForWrite;
-(id)initWithMajorStrokes:(id)arg1 andMinorStrokes:(id)arg2 ;
-(float)p_maxWidthOfStrokesInRange:(TSTSimpleRange)arg1 cachedMax:(float)arg2 ;
-(float)p_widthOfStrokesAtIndex:(int)arg1 ;
-(void)unlock;
@end

