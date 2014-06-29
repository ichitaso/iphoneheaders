/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/InfiniteScrollViewController.h>
#import <MobileCal/MainViewController.h>

@class UIView, EKCalendarDate, UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface YearViewController : InfiniteScrollViewController <MainViewController> {

	UIView* _pressHighlight;
	EKCalendarDate* _backButtonDate;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;

}

@property (nonatomic,readonly) Class multipleMonthViewClass; 
@property (nonatomic,readonly) Class monthViewControllerClass; 
@property (nonatomic,readonly) unsigned monthsPerRow; 
-(void)_viewTapped:(id)arg1 ;
-(CGRect)frameForTodayHighlight;
-(void)showDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateBackButtonToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
-(id)bestDateForNewEvent;
-(void)invalidateBackButtonDate;
-(id)initWithCalendarDate:(id)arg1 model:(id)arg2 ;
-(id)pastMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(id)calendarDateForSubviewBelowSubviewWithCalendarDate:(id)arg1 ;
-(float)heightForSubviewWithCalendarDate:(id)arg1 ;
-(BOOL)shouldAnimateScrollToDate:(id)arg1 fromClosestDate:(id)arg2 ;
-(id)futureMajorBoundaryCalendarDateForCalendarDate:(id)arg1 ;
-(id)calendarDateForSubviewAboveSubviewWithCalendarDate:(id)arg1 ;
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)_viewLongPressed:(id)arg1 ;
-(id)createInitialViewForDate:(id)arg1 ;
-(float)topInsetForSubviewWithCalendarDate:(id)arg1 ;
-(unsigned)maximumCachedReusableViews;
-(id)newTopViewAboveViewWithCalendarDate:(id)arg1 ;
-(id)newBottomViewBelowViewWithCalendarDate:(id)arg1 ;
-(void)_significantTimeChanged:(id)arg1 ;
-(id)pushedMonthViewControllerWithDate:(id)arg1 animated:(BOOL)arg2 ;
-(Class)multipleMonthViewClass;
-(Class)monthViewControllerClass;
-(unsigned)monthsPerRow;
-(BOOL)shouldAnimateTransitionsToMonthView;
-(id)monthViewForCalendarDate:(id)arg1 ;
-(id)_flooredCalendarDateForCalendarDate:(id)arg1 ;
-(id)_viewForCalendarDate:(id)arg1 ;
-(void)_updateBackButtonToSelectedDate;
-(void)localeDidChange;
-(void)_fadePressHighlightViewToAlpha:(float)arg1 duration:(float)arg2 completion:(/*^block*/ id)arg3 ;
-(void)_showPressHighlightWithFadeDuration:(float)arg1 ;
-(void)_hidePressHighlightWithFadeDuration:(float)arg1 ;
-(void)_selectedDateChanged;
-(CGRect)monthFrameForCalendarDate:(id)arg1 ;
-(CGPoint)monthHeaderLocationForCalendarDate:(id)arg1 ;
-(void)enableGestureRecognizers;
-(void)disableGestureRecognizers;
-(void)dealloc;
-(id)title;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)_localeChanged:(id)arg1 ;
@end
