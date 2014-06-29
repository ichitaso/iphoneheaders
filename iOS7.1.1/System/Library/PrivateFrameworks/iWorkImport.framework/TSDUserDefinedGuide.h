/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSDUserDefinedGuide : NSObject {

	double mPosition;
	int mGuideType;

}

@property (nonatomic,readonly) double position; 
@property (nonatomic,readonly) int guideType; 
-(int)guideType;
-(id)initWithPosition:(double)arg1 type:(int)arg2 ;
-(id)initWithTSDAlignmentGuide:(id)arg1 ;
-(id)alignmentGuide;
-(id)alignmentGuideForEditing;
-(id)description;
-(double)position;
@end
