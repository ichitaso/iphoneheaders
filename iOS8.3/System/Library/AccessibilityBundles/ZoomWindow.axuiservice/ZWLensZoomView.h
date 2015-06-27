/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:53:09 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CAReplicatorLayer, CABackdropLayer, CAShapeLayer;

@interface ZWLensZoomView : UIView {

	char _roundedLensCorners;
	char _lensResizingHandlesShowing;
	UIView* _zoomView;
	CAReplicatorLayer* _zoomReplicatorLayer;
	CABackdropLayer* _zoomBackdropLayer;
	UIView* _effectView;
	CAReplicatorLayer* _effectReplicatorLayer;
	CABackdropLayer* _effectBackdropLayer;
	CAShapeLayer* _maskLayer;
	float _zoomFactor;
	CGPoint _zoomPanOffset;

}

@property (nonatomic,retain) UIView * zoomView;                                      //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * zoomReplicatorLayer;                //@synthesize zoomReplicatorLayer=_zoomReplicatorLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * zoomBackdropLayer;                    //@synthesize zoomBackdropLayer=_zoomBackdropLayer - In the implementation block
@property (nonatomic,retain) UIView * effectView;                                    //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * effectReplicatorLayer;              //@synthesize effectReplicatorLayer=_effectReplicatorLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * effectBackdropLayer;                  //@synthesize effectBackdropLayer=_effectBackdropLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * maskLayer;                               //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic) float zoomFactor;                                       //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) CGPoint zoomPanOffset;                                  //@synthesize zoomPanOffset=_zoomPanOffset - In the implementation block
@property (assign,nonatomic) char roundedLensCorners;                                //@synthesize roundedLensCorners=_roundedLensCorners - In the implementation block
@property (assign,nonatomic) char lensResizingHandlesShowing;                        //@synthesize lensResizingHandlesShowing=_lensResizingHandlesShowing - In the implementation block
-(CGSize)sampledContentSizeWithZoomFactor:(float)arg1 ;
-(void)showLensResizingHandlesShowing:(char)arg1 ;
-(void)setZoomReplicatorLayer:(CAReplicatorLayer *)arg1 ;
-(void)setZoomBackdropLayer:(CABackdropLayer *)arg1 ;
-(void)setEffectReplicatorLayer:(CAReplicatorLayer *)arg1 ;
-(void)setEffectBackdropLayer:(CABackdropLayer *)arg1 ;
-(char)roundedLensCorners;
-(CGPoint)updateZoomPanOffset:(CGPoint)arg1 zoomFactor:(float)arg2 roundedLensCorners:(char)arg3 animated:(char)arg4 animationDuration:(double)arg5 completion:(/*^block*/id)arg6 ;
-(CGSize)_prescaledSizeForFinalSize:(CGSize)arg1 zoomFactor:(float)arg2 ;
-(void)setLensResizingHandlesShowing:(char)arg1 ;
-(CABackdropLayer *)zoomBackdropLayer;
-(CABackdropLayer *)effectBackdropLayer;
-(void)setRoundedLensCorners:(char)arg1 ;
-(CGRect)_effectiveRectForBounds:(CGRect)arg1 position:(CGPoint)arg2 scaleFactor:(float)arg3 ;
-(CAReplicatorLayer *)zoomReplicatorLayer;
-(char)lensResizingHandlesShowing;
-(CAReplicatorLayer *)effectReplicatorLayer;
-(void)updateLensEffect:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(UIView *)effectView;
-(void)setEffectView:(UIView *)arg1 ;
-(CGPoint)zoomPanOffset;
-(void)setZoomPanOffset:(CGPoint)arg1 ;
-(CAShapeLayer *)maskLayer;
-(void)setMaskLayer:(CAShapeLayer *)arg1 ;
-(UIView *)zoomView;
-(void)setZoomView:(UIView *)arg1 ;
@end
