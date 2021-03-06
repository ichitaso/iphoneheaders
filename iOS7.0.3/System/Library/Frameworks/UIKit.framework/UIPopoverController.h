/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKit/UIAppearanceContainer.h>

@class UIViewController, _UIPopoverView, UIDimmingView, UIView, UIBarButtonItem, UIColor, _UIPopoverLayoutInfo, UIPanGestureRecognizer, NSArray;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer> {

	id _delegate;
	UIViewController* _contentViewController;
	UIViewController* _splitParentController;
	_UIPopoverView* _popoverView;
	UIDimmingView* _dimmingView;
	UIView* _layoutConstraintView;
	CGRect _targetRectInEmbeddingView;
	UIBarButtonItem* _targetBarButtonItem;
	unsigned _requestedArrowDirections;
	unsigned _currentArrowDirection;
	int _popoverBackgroundStyle;
	UIColor* _backgroundColor;
	_UIPopoverLayoutInfo* _preferredLayoutInfo;
	Class _popoverBackgroundViewClass;
	CGSize _popoverContentSize;
	CGRect _targetRectInDimmingView;
	CGRect _embeddedTargetRect;
	int _popoverControllerStyle;
	BOOL _ignoresKeyboardNotifications;
	UIView* _currentPresentationView;
	CGRect _currentPresentationRectInView;
	unsigned _originalArrowDirections;
	unsigned draggingChildScrollViewCount;
	id _target;
	SEL _didEndSelector;
	UIViewController* _modalPresentationFromViewController;
	UIViewController* _modalPresentationToViewController;
	unsigned _toViewAutoResizingMask;
	UIViewController* _slidingViewController;
	UIView* _presentingView;
	unsigned _presentationEdge;
	int _presentationDirection;
	int _presentationState;
	BOOL _didPresentInActiveSequence;
	unsigned _slideTransitionCount;
	UIPanGestureRecognizer* _vendedGestureRecognizer;
	UIPanGestureRecognizer* _dimmingViewGestureRecognizer;
	struct {
		unsigned isPresentingModalViewController : 1;
		unsigned isPresentingActionSheet : 1;
		unsigned wasIgnoringDimmingViewTouchesBeforeScrolling : 1;
		unsigned isInTextEffectsWindow : 1;
		unsigned isEmbeddingInView : 1;
		unsigned embeddedPresentationBounces : 1;
	}  _popoverControllerFlags;
	BOOL _allowResizePastTargetRect;
	BOOL _dismissesOnRotation;
	BOOL _showsTargetRect;
	BOOL _showsOrientationMarker;
	BOOL _showsPresentationArea;
	BOOL _retainsSelfWhilePresented;
	unsigned _popoverArrowDirection;
	UIEdgeInsets _popoverLayoutMargins;

}

@property (assign,nonatomic) <UIPopoverControllerDelegate> * delegate;                                                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (assign,nonatomic) CGSize popoverContentSize; 
@property (getter=isPopoverVisible,nonatomic,readonly) BOOL popoverVisible; 
@property (assign,nonatomic) unsigned popoverArrowDirection;                                                                                      //@synthesize popoverArrowDirection=_popoverArrowDirection - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) UIEdgeInsets popoverLayoutMargins;                                                                                   //@synthesize popoverLayoutMargins=_popoverLayoutMargins - In the implementation block
@property (nonatomic,retain) Class popoverBackgroundViewClass;                                                                                    //@synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass - In the implementation block
@property (nonatomic,retain) UIDimmingView * dimmingView;                                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) BOOL allowResizePastTargetRect;                                                                                      //@synthesize allowResizePastTargetRect=_allowResizePastTargetRect - In the implementation block
@property (assign,nonatomic) BOOL dismissesOnRotation;                                                                                            //@synthesize dismissesOnRotation=_dismissesOnRotation - In the implementation block
@property (nonatomic,retain) _UIPopoverLayoutInfo * preferredLayoutInfo;                                                                          //@synthesize preferredLayoutInfo=_preferredLayoutInfo - In the implementation block
@property (assign,setter=_setPresentingView:,getter=_presentingView,nonatomic) UIView * presentingView;                                           //@synthesize presentingView=_presentingView - In the implementation block
@property (assign,setter=_setPresentationEdge:,getter=_presentationEdge,nonatomic) unsigned presentationEdge;                                     //@synthesize presentationEdge=_presentationEdge - In the implementation block
@property (assign,setter=_setIgnoresKeyboardNotifications:,nonatomic,@dynamic) BOOL _ignoresKeyboardNotifications; 
@property (assign,nonatomic) BOOL showsTargetRect;                                                                                                //@synthesize showsTargetRect=_showsTargetRect - In the implementation block
@property (assign,nonatomic) BOOL showsOrientationMarker;                                                                                         //@synthesize showsOrientationMarker=_showsOrientationMarker - In the implementation block
@property (assign,nonatomic) BOOL showsPresentationArea;                                                                                          //@synthesize showsPresentationArea=_showsPresentationArea - In the implementation block
@property (assign,setter=_setRetainsSelfWhilePresented:,getter=_retainsSelfWhilePresented,nonatomic) BOOL retainsSelfWhilePresented;              //@synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented - In the implementation block
+(BOOL)_popoversDisabled;
+(UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)arg1 andContentViewController:(id)arg2 ;
+(BOOL)_showTargetRectPref;
+(Class)_popoverViewClass;
+(BOOL)_forceAttemptsToAvoidKeyboard;
-(id)copyScriptPopOver;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(int)_popoverControllerStyle;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)contentViewController;
-(BOOL)_embedsInView;
-(void)setPopoverContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(void)_containedViewControllerModalStateChanged;
-(int)_popoverBackgroundStyle;
-(id)popoverView;
-(BOOL)_popoverBackgroundViewWantsDefaultContentAppearance;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(BOOL)_manuallyHandlesContentViewControllerAppearanceCalls;
-(BOOL)isPopoverVisible;
-(void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 ;
-(id)_dimmingView;
-(id)_splitParentController;
-(void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(BOOL)arg2 ;
-(void)_newViewControllerWillBePushed:(id)arg1 ;
-(void)_newViewControllerWasPushed:(id)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)passthroughViews;
-(void)setPassthroughViews:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(id)arg1 ;
-(void)presentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned)arg3 animated:(BOOL)arg4 ;
-(void)_setManagingSplitViewController:(id)arg1 ;
-(id)_gestureRecognizerForPresentationFromEdge:(unsigned)arg1 ;
-(void)_setGesturesEnabled:(BOOL)arg1 ;
-(id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(int)arg2 ;
-(void)setPopoverBackgroundViewClass:(Class)arg1 ;
-(void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned)arg2 animated:(BOOL)arg3 ;
-(void)_presentPopoverFromEdge:(unsigned)arg1 ofView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_dismissPopoverAnimated:(BOOL)arg1 stateOnly:(BOOL)arg2 notifyDelegate:(BOOL)arg3 ;
-(unsigned)_slideTransitionCount;
-(void)_setPopoverBackgroundStyle:(int)arg1 ;
-(id)dimmingView;
-(void)_setRetainsSelfWhilePresented:(BOOL)arg1 ;
-(void)_performHierarchyCheckOnViewController:(id)arg1 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_swipe:(id)arg1 ;
-(void)setContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAllowResizePastTargetRect:(BOOL)arg1 ;
-(id)_layoutInfoForCurrentKeyboardState;
-(float)_presentationAnimationDuration;
-(void)setPreferredLayoutInfo:(id)arg1 ;
-(BOOL)_isPresenting;
-(void)setPopoverFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1 ;
-(id)_managingSplitViewController;
-(Class)_popoverLayoutInfoForChromeClass:(Class)arg1 ;
-(id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2 ;
-(void)_startWatchingForKeyboardNotificationsIfNecessary;
-(id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1 ;
-(void)_incrementSlideTransitionCount:(BOOL)arg1 ;
-(void)_startWatchingForWindowRotations;
-(/*^block*/ id)_completionBlockForDismissalWhenNotifyingDelegate:(BOOL)arg1 ;
-(int)_presentationState;
-(void)_setPresentationState:(int)arg1 ;
-(void)_setPresentingView:(id)arg1 ;
-(void)_setPresentationEdge:(unsigned)arg1 ;
-(void)_postludeForDismissal;
-(void)_resetSlideTransitionCount;
-(void)_presentPopoverBySlidingIn:(BOOL)arg1 fromEdge:(unsigned)arg2 ofView:(id)arg3 animated:(BOOL)arg4 stateOnly:(BOOL)arg5 notifyDelegate:(BOOL)arg6 ;
-(Class)_defaultChromeViewClass;
-(CGPoint)_centerPointForScale:(float)arg1 frame:(CGRect)arg2 anchor:(CGPoint)arg3 ;
-(void)_presentPopoverFromRect:(CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned)arg4 animate:(BOOL)arg5 ;
-(BOOL)_shimPresentSlidingPopoverAnimated:(BOOL)arg1 ;
-(BOOL)isPresentingOrDismissing;
-(void)_startWatchingForScrollViewNotifications;
-(void)_commonPresentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned)arg3 animated:(BOOL)arg4 ;
-(void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1 ;
-(void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(CGRect)arg2 inView:(id)arg3 arrowDirections:(unsigned)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6 ;
-(void)_setSplitParentController:(id)arg1 ;
-(void)_setPopoverView:(id)arg1 ;
-(void)_stopWatchingForNotifications;
-(float)_dismissalAnimationDuration;
-(BOOL)_isDismissing;
-(BOOL)_attemptsToAvoidKeyboard;
-(void)_moveAwayFromTheKeyboard:(id)arg1 ;
-(void)_keyboardStateChanged:(id)arg1 ;
-(void)_invalidateLayoutInfo;
-(BOOL)_canRepresentAutomatically;
-(void)_hostingWindowWillRotate:(id)arg1 ;
-(void)_hostingWindowDidRotate:(id)arg1 ;
-(void)_scrollViewWillBeginDragging:(id)arg1 ;
-(void)_scrollViewDidEndDragging:(id)arg1 ;
-(void)_stopWatchingForKeyboardNotifications;
-(void)_stopWatchingForScrollViewNotifications;
-(void)_stopWatchingForWindowRotations;
-(CGSize)_currentPopoverContentSize;
-(void)_modalAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(CGSize)popoverContentSize;
-(void)setPopoverContentSize:(CGSize)arg1 ;
-(unsigned)popoverArrowDirection;
-(void)_presentPopoverFromRect:(CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned)arg4 ;
-(void)_setContentViewController:(id)arg1 backgroundStyle:(int)arg2 animated:(BOOL)arg3 ;
-(void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4 ;
-(void)_startWatchingForNavigationControllerNotifications:(id)arg1 ;
-(void)_stopWatchingForNavigationControllerNotifications:(id)arg1 ;
-(BOOL)_ignoresKeyboardNotifications;
-(void)_setIgnoresKeyboardNotifications:(BOOL)arg1 ;
-(void)setDimmingView:(id)arg1 ;
-(BOOL)allowResizePastTargetRect;
-(BOOL)dismissesOnRotation;
-(void)setDismissesOnRotation:(BOOL)arg1 ;
-(UIEdgeInsets)popoverLayoutMargins;
-(void)setPopoverLayoutMargins:(UIEdgeInsets)arg1 ;
-(Class)popoverBackgroundViewClass;
-(BOOL)showsTargetRect;
-(void)setShowsTargetRect:(BOOL)arg1 ;
-(BOOL)showsOrientationMarker;
-(void)setShowsOrientationMarker:(BOOL)arg1 ;
-(BOOL)showsPresentationArea;
-(void)setShowsPresentationArea:(BOOL)arg1 ;
-(BOOL)_retainsSelfWhilePresented;
-(id)preferredLayoutInfo;
-(id)_presentingView;
-(unsigned)_presentationEdge;
-(void)setPopoverArrowDirection:(unsigned)arg1 ;
@end

