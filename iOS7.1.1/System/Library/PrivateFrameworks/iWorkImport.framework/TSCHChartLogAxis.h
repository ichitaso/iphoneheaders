/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHChartValueAxis.h>

@interface TSCHChartLogAxis : TSCHChartValueAxis
-(double)interceptForAxis:(id)arg1 ;
-(double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2 ;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg1 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg1 ;
-(id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg1 ;
-(double)unitSpaceValueForDataSpaceValue:(double)arg1 min:(double)arg2 max:(double)arg3 ;
-(id)userMin;
-(id)userMax;
-(double)validateUserMinForDouble:(double)arg1 ;
-(double)validateUserMaxForDouble:(double)arg1 ;
-(id)p_orthogonalAxis;
@end
