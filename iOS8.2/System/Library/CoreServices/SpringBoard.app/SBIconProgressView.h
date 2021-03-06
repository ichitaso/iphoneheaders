/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBIconProgressViewDelegate;
@class _SBIconProgressStateTransition, _SBIconProgressPausedTransition, _SBIconProgressFractionTransition, CADisplayLink, UIImage;

@interface SBIconProgressView : UIView {

	_SBIconProgressStateTransition* _activeStateTransition;
	_SBIconProgressPausedTransition* _activePausedTransition;
	_SBIconProgressFractionTransition* _activeFractionTransition;
	int _modelState;
	char _modelPaused;
	float _modelFraction;
	CADisplayLink* _displayLink;
	double _lastUpdate;
	UIImage* _maskImage;
	char _canAnimate;
	char _displayingPaused;
	id<SBIconProgressViewDelegate> _delegate;
	UIImage* _overlayImage;
	float _backgroundAlpha;
	float _foregroundAlpha;
	float _circleRadiusFraction;
	float _pauseRadiusFraction;
	int _displayedState;
	float _displayedFraction;

}

@property (assign,nonatomic) id<SBIconProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                               //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) char canAnimate;                                      //@synthesize canAnimate=_canAnimate - In the implementation block
@property (assign,nonatomic) float backgroundAlpha;                                //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) float foregroundAlpha;                                //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) float circleRadiusFraction;                           //@synthesize circleRadiusFraction=_circleRadiusFraction - In the implementation block
@property (assign,nonatomic) float pauseRadiusFraction;                            //@synthesize pauseRadiusFraction=_pauseRadiusFraction - In the implementation block
@property (nonatomic,readonly) CGRect circleBoundingRect; 
@property (assign,nonatomic) int displayedState;                                   //@synthesize displayedState=_displayedState - In the implementation block
@property (assign,nonatomic) char displayingPaused;                                //@synthesize displayingPaused=_displayingPaused - In the implementation block
@property (assign,nonatomic) float displayedFraction;                              //@synthesize displayedFraction=_displayedFraction - In the implementation block
+(id)_pieImagesMemoryPool;
+(id)_pieImageAtFraction:(float)arg1 ;
-(void)_updateTransitionsAnimated:(char)arg1 ;
-(void)_clearTransitionIfComplete:(id*)arg1 ;
-(void)_updatePausedTransitionAnimated:(char)arg1 ;
-(void)_updateStateTransitionAnimated:(char)arg1 ;
-(void)_updateFractionTransitionAnimated:(char)arg1 ;
-(char)_hasActiveTransitions;
-(void)_ensureDisplayLink;
-(void)_drawPieWithCenter:(CGPoint)arg1 ;
-(void)_drawOutgoingCircleWithCenter:(CGPoint)arg1 ;
-(void)_drawIncomingCircleWithCenter:(CGPoint)arg1 ;
-(void)_drawPauseUIWithCenter:(CGPoint)arg1 ;
-(void)setState:(int)arg1 paused:(char)arg2 fractionLoaded:(float)arg3 animated:(char)arg4 ;
-(void)setCanAnimate:(char)arg1 ;
-(CGRect)circleBoundingRect;
-(char)canAnimate;
-(void)setForegroundAlpha:(float)arg1 ;
-(float)circleRadiusFraction;
-(void)setCircleRadiusFraction:(float)arg1 ;
-(float)pauseRadiusFraction;
-(void)setPauseRadiusFraction:(float)arg1 ;
-(int)displayedState;
-(void)setDisplayedState:(int)arg1 ;
-(char)displayingPaused;
-(void)setDisplayingPaused:(char)arg1 ;
-(float)displayedFraction;
-(void)setDisplayedFraction:(float)arg1 ;
-(UIImage *)overlayImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<SBIconProgressViewDelegate>)arg1 ;
-(id<SBIconProgressViewDelegate>)delegate;
-(float)foregroundAlpha;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)_clearDisplayLink;
-(id)_maskImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(float)backgroundAlpha;
@end

