/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDStyledInfo.h>
#import <iWorkImport/TSSThemedObject.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSDReducableInfo.h>
#import <iWorkImport/TSKSearchable.h>

@class TSDPathSource, TSDShapeStyle, TSDLineEnd, TSDFill, NSString;

@interface TSDShapeInfo : TSDStyledInfo <TSSThemedObject, TSDMixing, TSDReducableInfo, TSKSearchable> {

	TSDPathSource* mPathSource;
	TSDShapeStyle* mStyle;
	TSDLineEnd* mHeadLineEnd;
	TSDLineEnd* mTailLineEnd;

}

@property (nonatomic,retain) TSDPathSource * pathSource; 
@property (nonatomic,readonly) TSDShapeStyle * shapeStyle; 
@property (nonatomic,copy) TSDFill * fill; 
@property (nonatomic,retain) TSDLineEnd * headLineEnd; 
@property (nonatomic,retain) TSDLineEnd * tailLineEnd; 
@property (nonatomic,readonly) BOOL supportsTextInset; 
@property (nonatomic,readonly) BOOL supportsShrinkTextToFit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(int)elementKind;
-(void)p_correctLineSegmentGeometry;
-(void)p_correctNearZeroWidthLines;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ShapeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ShapeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(Class)repClass;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)animationFilters;
-(id)childCommandForApplyThemeCommand:(id)arg1 ;
-(Class)styleClass;
-(void)setValuesForProperties:(id)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(id)imageDatasForReducingFileSizeWithAssociatedHints;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3 ;
-(id)commandToFlipWithOrientation:(int)arg1 ;
-(TSDLineEnd *)headLineEnd;
-(TSDLineEnd *)tailLineEnd;
-(void)setPathSource:(TSDPathSource *)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 ;
-(TSDPathSource *)pathSource;
-(void)setHeadLineEnd:(TSDLineEnd *)arg1 ;
-(void)setTailLineEnd:(TSDLineEnd *)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 ;
-(BOOL)supportsTextInset;
-(BOOL)supportsShrinkTextToFit;
-(id)commandForSettingBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)dealloc;
-(TSDFill *)fill;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(void)setGeometry:(id)arg1 ;
-(void)setFill:(TSDFill *)arg1 ;
-(TSDShapeStyle *)shapeStyle;
-(Class)layoutClass;
@end

