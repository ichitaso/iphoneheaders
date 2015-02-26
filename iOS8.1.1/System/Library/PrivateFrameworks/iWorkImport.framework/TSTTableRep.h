/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostRep.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TSTTableAnimationController, TSTTableChromeProvider, TSTCanvasReferenceController, TSTTableRepDelegate, TSTTableKnobTrackerVisitorProtocol;
@class TSDTilingLayer, CALayer, NSMutableArray, TSTTableCellTextEditingRep, TSWPTextEditing, TSTTableReferences, CAShapeLayer, TSTTableSelection, TSTSelectionDragController, TSDKnobTracker, NSSet, TSWPStorage, TSWPHyperlinkField, NSMutableDictionary, TSTTableInfo, TSTTableModel, TSTEditingState, TSTLayout, TSTMasterLayout, TSDCanvasView, TSDEditorController, TSTCellRegion, TSTAnimation, TSTSearchReference, NSString;

@interface TSTTableRep : TSWPTextHostRep <UITextFieldDelegate> {

	CGRect mCanvasVisibleRect;
	CGRect mSearchSelectionBounds;
	TSDTilingLayer* mOverlayTableName;
	TSDTilingLayer* mOverlayFrozenHeaderCorner;
	TSDTilingLayer* mOverlayFrozenHeaderRows;
	TSDTilingLayer* mOverlayFrozenHeaderColumns;
	CALayer* mOverlayFrozenHeaderRowsMask;
	CALayer* mOverlayFrozenHeaderColumnsMask;
	CALayer* mOverlayFrozenHeaderTableBodyMask;
	CALayer* mOverlayFrozenHeaderTableNameMask;
	double mCurrentScreenScale;
	SCD_Struct_TS496 mDirtyCellRange;
	BOOL mRecursivelyDrawingInContext;
	NSMutableArray* mAnimationStack;
	id<TSTTableAnimationController> mAnimationController;
	TSTTableCellTextEditingRep* mContainedTextEditingRep;
	TSWPTextEditing* mTableNameTextEditing;
	SCD_Struct_TS272 mControlCellID;
	SCD_Struct_TS272 mRatingsDragCellID;
	id<TSTTableChromeProvider> mTableChrome;
	TSTTableReferences* mReferences;
	CAShapeLayer* mHighlightedHyperlinkLayer;
	BOOL mIsAspectOperationInProgress;
	BOOL mIsZoomOperationInProgress;
	BOOL mIsZoomToEditOperationInProgress;
	SCD_Struct_TS496 mZoomToEditVisibleCellRange;
	CAShapeLayer* mFindSelectionHighlightLayer;
	TSTTableSelection* mSourceFillSelection;
	TSTTableSelection* mTargetFillSelection;
	BOOL mWPEndedTableNameEditing;
	BOOL _settingSelection;
	TSTSelectionDragController* mCellDragController;
	BOOL mDragByHandleOnly;
	BOOL mSelectionUsesBezierPath;
	BOOL mSelectsCellOnInitialTap;
	BOOL mUsesWholeChromeResizer;
	id<TSTCanvasReferenceController> mCanvasReferenceController;
	id<TSTTableRepDelegate> mDelegate;
	TSDKnobTracker*<TSTTableKnobTrackerVisitorProtocol> mVisitorKnobTracker;
	NSSet* mVisibleFillKnobs;
	SCD_Struct_TS272 mEditingHyperlinkCellID;
	TSWPStorage* mHyperlinkParentStorage;
	BOOL mHyperlinkModified;
	BOOL mInspectingHyperlinkInEditingStorage;
	TSWPHyperlinkField* mHyperlinkField;
	CAShapeLayer* mCellEditingMaskLayer;
	NSMutableDictionary* mChildTextReps;

}

@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,readonly) TSTEditingState * editingState; 
@property (nonatomic,readonly) TSTLayout * tableLayout; 
@property (nonatomic,readonly) TSTMasterLayout * masterLayout; 
@property (assign,nonatomic) id<TSTTableAnimationController> animationController; 
@property (nonatomic,readonly) id<TSTTableRepDelegate> delegate; 
@property (assign,nonatomic) TSTSelectionDragController * cellDragController; 
@property (nonatomic,readonly) CGAffineTransform transformToCanvas; 
@property (nonatomic,readonly) CGAffineTransform transformFromCanvas; 
@property (nonatomic,readonly) CGRect canvasVisibleRect; 
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (nonatomic,readonly) TSDEditorController * editorController; 
@property (nonatomic,readonly) id<TSTTableChromeProvider> tableChrome; 
@property (nonatomic,readonly) id<TSTCanvasReferenceController> canvasReferenceController; 
@property (nonatomic,readonly) TSTCellRegion * selectionRegion; 
@property (nonatomic,readonly) CALayer * layerForRep; 
@property (nonatomic,readonly) TSDKnobTracker*<TSTTableKnobTrackerVisitorProtocol> visitorKnobTracker; 
@property (assign,nonatomic) SCD_Struct_TS272 ratingsDragCellID; 
@property (nonatomic,readonly) BOOL isZoomToEditOperationInProgress; 
@property (nonatomic,readonly) TSTAnimation * currentAnimation; 
@property (nonatomic,retain) TSTSearchReference * activeSearchReference; 
@property (nonatomic,retain) NSMutableDictionary * childTextReps; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)tableRepDelegateClass;
-(TSTTableModel *)tableModel;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3 ;
-(void)willBeRemoved;
-(CGRect)layerFrameInScaledCanvas;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(void)beginDragInsertFromPalette;
-(void)endDragInsertFromPalette;
-(void)viewScaleDidChange;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(BOOL)mustDrawOnMainThreadForInteractiveCanvas;
-(BOOL)canDrawInParallel;
-(void)updateFromLayout;
-(id)overlayLayers;
-(TSDCanvasView *)canvasView;
-(id)itemsToAddToEditMenu;
-(TSDEditorController *)editorController;
-(id)childReps;
-(id)hitRep:(CGPoint)arg1 ;
-(void)invalidateComments;
-(BOOL)canDrawTilingLayerInBackground:(id)arg1 ;
-(void)invalidateAnnotationColor;
-(void)screenScaleDidChange;
-(BOOL)canDrawInBackgroundDuringScroll;
-(id)additionalLayersUnderLayer;
-(id)additionalLayersOverLayer;
-(id<TSTCanvasReferenceController>)canvasReferenceController;
-(id)hitRepChrome:(CGPoint)arg1 ;
-(id)repForDragging;
-(void)updateChildrenFromLayout;
-(id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2 ;
-(BOOL)handlesEditMenu;
-(TSTMasterLayout *)masterLayout;
-(TSTEditingState *)editingState;
-(TSTTableInfo *)tableInfo;
-(CGAffineTransform)transformToCanvas;
-(CGAffineTransform)transformFromCanvas;
-(void)invalidateSelection;
-(void)invalidateTableName;
-(id)editorSelection;
-(NSMutableDictionary *)childTextReps;
-(TSTAnimation *)currentAnimation;
-(void)setChildTextReps:(NSMutableDictionary *)arg1 ;
-(CGRect)deviceBoundsForCellRange:(SCD_Struct_TS496)arg1 ;
-(void)validateVisibleRect;
-(id<TSTTableChromeProvider>)tableChrome;
-(void)dirtyCellRange:(SCD_Struct_TS496)arg1 ;
-(void)setNeedsDisplayInCellRange:(SCD_Struct_TS496)arg1 ;
-(CGRect)canvasVisibleRect;
-(id)p_frozenHeaderOverlayLayers;
-(void)validateTableName;
-(void)validateFrozenHeaderCorner;
-(void)validateFrozenHeaderRows;
-(void)validateFrozenHeaderColumns;
-(void)validateFrozenHeaderTableBodyMask;
-(void)invalidateCellRange:(SCD_Struct_TS496)arg1 fittingRange:(SCD_Struct_TS496)arg2 invalidateSize:(BOOL)arg3 ;
-(void)p_invalidateCellCommentBadges;
-(id)p_tableNameOverlayLayers;
-(CALayer *)layerForRep;
-(CGRect)p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(void)pushAnimation:(id)arg1 ;
-(void)popAnimation;
-(TSTCellRegion *)selectionRegion;
-(BOOL)shouldRestartTextEditing;
-(BOOL)shouldCommitPendingTextEdit;
-(void)asyncPostTextChangedInRange:(SCD_Struct_TS496)arg1 ;
-(void)invalidateEditingCell;
-(CGRect)canvasBoundsForCellRange:(SCD_Struct_TS496)arg1 ;
-(CGRect)boundsForCellSelection:(SCD_Struct_TS272)arg1 ;
-(void)contentsRectForCellRangeAcrossSpaces:(SCD_Struct_TS496)arg1 contentsCenterInfo:(SCD_Struct_TS536*)arg2 canvasFrame:(CGRect*)arg3 contentsRect:(CGRect*)arg4 ;
-(void)validateStrokesInEditingSpillingTextRange;
-(BOOL)isFullyVisibleWithBorder:(int)arg1 ;
-(void)updateDynamicModeForEditingSpillText;
-(void)invalidateCellRange:(SCD_Struct_TS496)arg1 ;
-(void)invalidateFrozenHeaders;
-(id)p_textImageForPath:(CGPathRef)arg1 shouldPulsate:(BOOL)arg2 ;
-(TSTSelectionDragController *)cellDragController;
-(void)setCellDragController:(TSTSelectionDragController *)arg1 ;
-(SCD_Struct_TS272)ratingsDragCellID;
-(void)setRatingsDragCellID:(SCD_Struct_TS272)arg1 ;
-(TSDKnobTracker*<TSTTableKnobTrackerVisitorProtocol>)visitorKnobTracker;
-(BOOL)isZoomToEditOperationInProgress;
-(void)dealloc;
-(void)setNeedsDisplay;
-(NSString *)description;
-(id<TSTTableRepDelegate>)delegate;
-(void)setAnimationController:(id<TSTTableAnimationController>)arg1 ;
-(id<TSTTableAnimationController>)animationController;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)isDraggable;
-(TSTLayout *)tableLayout;
-(int)tilingMode;
-(void)orientationDidChange:(id)arg1 ;
@end
