/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CATransformLayer.h>
#import <iWorkImport/TSCHMultiDataElementShapeLayer.h>

@class TSDFill, CAShapeLayer, CALayer;

@interface TSCHMultiDataBubbleShapeLayer : CATransformLayer <TSCHMultiDataElementShapeLayer> {

	TSDFill* mFill;
	float mViewScale;
	CAShapeLayer* mMaskLayer;
	CAShapeLayer* mStrokeLayer;
	CALayer* mImageLayer;
	float _viewScale;

}

@property (nonatomic,retain) TSDFill * fill; 
@property (assign,nonatomic) float viewScale;              //@synthesize viewScale=_viewScale - In the implementation block
-(float)viewScale;
-(id)chartRep;
-(void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2 ;
-(void)updateElementFrame:(CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3 ;
-(char)aboveIntercept;
-(id)currentValueLayer;
-(void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(float)arg3 ;
-(id)p_bubbleElementsRenderer;
-(void)p_addLayerAnimationsForUpdatingImage:(CGImageRef)arg1 bounds:(CGRect)arg2 position:(CGPoint)arg3 toAnimationInfo:(id)arg4 ;
-(void)p_addAnimationsForUpdatingPath:(CGPathRef)arg1 position:(CGPoint)arg2 toAnimationInfo:(id)arg3 onLayer:(id)arg4 ;
-(CGAffineTransform)p_renderingSymbolElementTransform;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(TSDFill *)fill;
-(void)setContentsScale:(float)arg1 ;
-(void)setFill:(TSDFill *)arg1 ;
-(void)setViewScale:(float)arg1 ;
@end

