/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CHDChart, OADDrawingTheme;

@interface CHAutoStyling : NSObject {

	CHDChart* mChart;
	OADDrawingTheme* mDrawingTheme;

}
+(id)autoStylingWithChart:(id)arg1 drawingTheme:(id)arg2 ;
-(void)dealloc;
-(id)drawingTheme;
-(id)initWithChart:(id)arg1 drawingTheme:(id)arg2 ;
-(int)defaultMarkerStyleForSeriesIndex:(unsigned long long)arg1 ;
-(void)replaceStrokeAndFillInEmptyMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 ;
@end

