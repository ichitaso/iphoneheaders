/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <PassKit/WLCardViewDelegate.h>

@protocol PKPassPickerViewControllerDelegate;
@class PKPassLibrary, UINavigationBar, UIScrollView, NSArray, NSLayoutConstraint, UIPageControl;

@interface PKPassPickerViewController : UIViewController <UIScrollViewDelegate, WLCardViewDelegate> {

	PKPassLibrary* _library;
	UINavigationBar* _navigationBar;
	UIScrollView* _passScrollView;
	NSArray* _passViews;
	NSLayoutConstraint* _scrollViewYConstraint;
	UIPageControl* _pageControl;
	int _oldStatusBarStyle;
	NSArray* _passes;
	<PKPassPickerViewControllerDelegate>* _delegate;

}

@property (nonatomic,retain) NSArray * passes;                                             //@synthesize passes=_passes - In the implementation block
@property (assign,nonatomic) <PKPassPickerViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)passViewBackGrowsCentered:(id)arg1 ;
-(void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2 ;
-(void)_updatePageControl;
-(unsigned)_displayIndex;
-(void)setPasses:(id)arg1 ;
-(id)initWithPasses:(id)arg1 ;
-(void)_pageControlChanged;
-(void)_setupScrollViewYConstraintForTallPass:(BOOL)arg1 ;
-(void)_setupPassViews;
-(void)_handleHideNoDelegate;
-(BOOL)_passBacksAreTall;
-(float)_scrollViewYOffsetWithTallPass:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)delegate;
-(unsigned)supportedInterfaceOrientations;
-(int)modalPresentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)hidesBottomBarWhenPushed;
-(void)use;
-(void)cancel;
-(id)passes;
@end

