/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SteppingSignsCarouselDelegate;
@class UIScrollView, UIPanGestureRecognizer, NSArray, UIView, GuidanceSignAccessoryView, NSMutableArray, NSString;

@interface SteppingSignsCarousel : UIView <UIScrollViewDelegate> {

	id<SteppingSignsCarouselDelegate> _delegate;
	UIScrollView* _scrollView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	float _minimumMarginBetweenSigns;
	float _maximumWidthOfPeekingSignsArea;
	float _signWidth;
	float _topMargin;
	float _currentHeight;
	NSArray* _signs;
	unsigned _selectedSignIndex;
	NSRange _selectableSignRange;
	NSRange _targetSelectableSignRange;
	NSRange _visibleSignRange;
	UIView* _signsContainerView;
	char _displayedInLockscreen;
	GuidanceSignAccessoryView* _guidanceAccessoryView;
	NSMutableArray* _guidanceAccessoryItems;
	int _variant;
	CGPoint _lastContentOffset;

}

@property (assign,nonatomic,__weak) id<SteppingSignsCarouselDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) float maximumWidthOfPeekingSignsArea;                           //@synthesize maximumWidthOfPeekingSignsArea=_maximumWidthOfPeekingSignsArea - In the implementation block
@property (assign,nonatomic) float minimumMarginBetweenSigns;                                //@synthesize minimumMarginBetweenSigns=_minimumMarginBetweenSigns - In the implementation block
@property (assign,nonatomic) float signWidth;                                                //@synthesize signWidth=_signWidth - In the implementation block
@property (assign,nonatomic) int variant;                                                    //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) float topMargin;                                                //@synthesize topMargin=_topMargin - In the implementation block
@property (nonatomic,copy) NSArray * signs;                                                  //@synthesize signs=_signs - In the implementation block
@property (assign,nonatomic) unsigned selectedSignIndex;                                     //@synthesize selectedSignIndex=_selectedSignIndex - In the implementation block
@property (readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,retain) GuidanceSignAccessoryView * guidanceAccessoryView; 
@property (assign,nonatomic) CGPoint lastContentOffset;                                      //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowsDimmedSigns:(char)arg1 animation:(id)arg2 ;
-(NSArray *)signs;
-(void)updateDividerHeightForRect:(CGRect)arg1 ;
-(void)updateViewHierarchyForCarouselViewport;
-(void)setSignWidth:(float)arg1 ;
-(void)setMaximumWidthOfPeekingSignsArea:(float)arg1 ;
-(void)setMinimumMarginBetweenSigns:(float)arg1 ;
-(void)setSigns:(NSArray *)arg1 ;
-(void)setGuidanceAccessoryItem:(id)arg1 forSignAtIndex:(unsigned)arg2 ;
-(float)maximumVisibleSignFrameY;
-(void)setSelectedSignIndex:(unsigned)arg1 scrollSignToVisible:(char)arg2 animated:(char)arg3 ;
-(unsigned)selectedSignIndex;
-(void)_signSizeMayHaveChanged;
-(CGRect)updateBackgroundHeightForIndex:(unsigned)arg1 ;
-(GuidanceSignAccessoryView *)guidanceAccessoryView;
-(float)_actualSignWidth;
-(float)_actualMargin;
-(void)_layoutSigns;
-(void)_recenterAnimated:(char)arg1 ;
-(void)scrollToSignAtIndex:(unsigned)arg1 animated:(char)arg2 ;
-(float)minimumMarginBetweenSigns;
-(float)maximumWidthOfPeekingSignsArea;
-(float)signWidth;
-(void)setSelectableSignRange:(NSRange)arg1 animated:(char)arg2 ;
-(void)_setSelectableSignRange:(NSRange)arg1 animated:(char)arg2 ;
-(char)hasSubSelectableRange;
-(void)_updateVisibleRangeAnimated:(char)arg1 ;
-(void)_setVisibleSignRange:(NSRange)arg1 animated:(char)arg2 ;
-(void)_updateScrollViewContentOffset;
-(void)updateBackgroundBlurAndSignTextHeightAnimated:(char)arg1 ;
-(void)_updateGuidanceAccessoryView;
-(float)_calculatePercentAndFirstIndex:(unsigned*)arg1 andSecondIndex:(unsigned*)arg2 ;
-(void)_setSelectedSignIndex:(unsigned)arg1 scrollSignToVisible:(char)arg2 animated:(char)arg3 cause:(int)arg4 ;
-(void)_updateSelectedStepIndexFromGesture;
-(void)_setSelectableSignRangeAfterDelay;
-(void)_updateGuidanceAccessoryViewInMotion;
-(void)setGuidanceAccessoryView:(GuidanceSignAccessoryView *)arg1 ;
-(float)_XOriginForSignAtIndex:(unsigned)arg1 ;
-(void)willAnimateRotate;
-(void)setSelectedSignIndex:(unsigned)arg1 selectableSignRange:(NSRange)arg2 scrollSignToVisible:(char)arg3 animated:(char)arg4 ;
-(void)setSelectedSignIndex:(unsigned)arg1 ;
-(void)signViewNeedsLayout:(id)arg1 ;
-(void)setSignInactive:(char)arg1 atIndex:(unsigned)arg2 ;
-(CGPoint)lastContentOffset;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(float)topMargin;
-(void)setTopMargin:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SteppingSignsCarouselDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SteppingSignsCarouselDelegate>)delegate;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(UIScrollView *)scrollView;
-(CGRect)visibleFrame;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end

