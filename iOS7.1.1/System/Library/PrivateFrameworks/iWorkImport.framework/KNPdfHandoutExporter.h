/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNPdfExporter.h>

@interface KNPdfHandoutExporter : KNPdfExporter {

	bool mPrintingRuledLines;
	bool mPrintingNotes;
	bool mPrintingDivider;
	bool mIsPrintingNote;

}

@property (assign,getter=isPrintingNotes,nonatomic) bool printingNotes; 
@property (assign,getter=isPrintingRuledLines,nonatomic) bool printingRuledLines; 
@property (assign,getter=isPrintingDivider,nonatomic) bool printingDivider; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)currentInfos;
-(bool)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(bool)arg4 ;
-(bool)incrementPage;
-(void)p_drawNotesForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(CGRect)arg3 unscaledClipRect:(CGRect)arg4 scaledClipRect:(CGRect)arg5 context:(CGContextRef)arg6 ;
-(void)p_drawDividerLineForRect:(CGRect)arg1 pageRect:(CGRect)arg2 context:(CGContextRef)arg3 ;
-(void)p_drawRuledLinesForRect:(CGRect)arg1 pageRect:(CGRect)arg2 numberOfLines:(unsigned long long)arg3 context:(CGContextRef)arg4 ;
-(bool)isPrintingRuledLines;
-(bool)isPrintingNotes;
-(void)setPrintingRuledLines:(bool)arg1 ;
-(void)setPrintingNotes:(bool)arg1 ;
-(bool)isPrintingDivider;
-(void)setPrintingDivider:(bool)arg1 ;
@end
