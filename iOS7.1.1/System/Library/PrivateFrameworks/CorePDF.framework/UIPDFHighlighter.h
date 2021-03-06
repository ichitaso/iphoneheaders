/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface UIPDFHighlighter : NSObject {

	NSMutableArray* _highLightLayers;
	CGColorRef _highlightColor;
	CGColorRef _borderColor;
	CGColorRef _whiteColor;
	CGPDFPageRef _page;
	double _enlargeFactor;
	double _pdfToViewScale;
	double inset;

}

@property (assign,nonatomic) double inset; 
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setInset:(double)arg1 ;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)clear;
-(void)addAnimation:(id)arg1 ;
-(double)inset;
-(void)addRectPath:(CGPathRef)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(SCD_Struct_UI5)arg4 upright:(bool)arg5 ;
-(void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI5)arg3 upright:(bool)arg4 ;
-(void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI5)arg3 upright:(bool)arg4 ;
-(void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned long long)arg2 to:(id)arg3 animated:(bool)arg4 ;
-(void)unhide;
-(void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(bool)arg3 ;
@end

