/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDBezierPathSource.h>
#import <iWorkImport/TSDSmartPathSource.h>

@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource> {

	int mType;
	float mOutsetFrom;
	float mOutsetTo;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) float outsetFrom; 
@property (assign,nonatomic) float outsetTo; 
@property (readonly) unsigned numberOfControlKnobs; 
+(id)pathSourceAtAngleOfSize:(CGSize)arg1 forType:(int)arg2 ;
+(id)pathSourceOfLength:(float)arg1 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(id)initWithBezierPath:(id)arg1 ;
-(void)bend;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(char)isLineSegment;
-(void)setControlKnobPosition:(unsigned)arg1 toPoint:(CGPoint)arg2 ;
-(CGPoint)getControlKnobPosition:(unsigned)arg1 ;
-(id)getFeedbackStringForKnob:(unsigned)arg1 ;
-(CGPathRef)newFeedbackPathForKnob:(unsigned)arg1 ;
-(unsigned)numberOfControlKnobs;
-(float)outsetFrom;
-(float)outsetTo;
-(void)p_setBezierPath:(id)arg1 ;
-(void)setOutsetFrom:(float)arg1 ;
-(void)setOutsetTo:(float)arg1 ;
-(int)pathElementIndexForKnobTag:(unsigned)arg1 ;
-(CGPoint)fixedPointForControlKnobChange;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)bezierPath;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isRectangular;
-(char)isCircular;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
@end
