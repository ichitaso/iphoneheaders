/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:34:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <AccessibilitySettings/ASTGestureRecorderViewControllerDelegate.h>
#import <AccessibilitySettings/ASTGestureRecorderControlsViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class ASTGestureRecorderStyleProvider, ASTGestureRecorderViewController, ASTGestureRecorderControlsView, UILabel, UIBarButtonItem, UIAlertView, AXAssertion, NSString;

@interface ASTGestureRecorderMainViewController : PSViewController <ASTGestureRecorderViewControllerDelegate, ASTGestureRecorderControlsViewDelegate, UITextFieldDelegate> {

	char _inReplayMode;
	ASTGestureRecorderStyleProvider* _styleProvider;
	ASTGestureRecorderViewController* _gestureRecorderViewController;
	ASTGestureRecorderControlsView* _controlsView;
	UILabel* _instructionsLabel;
	UIBarButtonItem* _saveButton;
	UIAlertView* _saveAlertView;
	unsigned _leftButtonIdentifier;
	unsigned _rightButtonIdentifier;
	SEL _customGesturesGetter;
	SEL _customGesturesSetter;
	AXAssertion* _disableSystemGesturesAssertion;
	id _appDidResignActiveNotificationHandlerToken;
	double _gestureRecordingDidStartTimeInterval;

}

@property (assign,nonatomic) SEL customGesturesGetter;                                                      //@synthesize customGesturesGetter=_customGesturesGetter - In the implementation block
@property (assign,nonatomic) SEL customGesturesSetter;                                                      //@synthesize customGesturesSetter=_customGesturesSetter - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderStyleProvider * styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderViewController * gestureRecorderViewController;              //@synthesize gestureRecorderViewController=_gestureRecorderViewController - In the implementation block
@property (nonatomic,retain) ASTGestureRecorderControlsView * controlsView;                                 //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,retain) UILabel * instructionsLabel;                                                   //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                                  //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIAlertView * saveAlertView;                                                   //@synthesize saveAlertView=_saveAlertView - In the implementation block
@property (assign,nonatomic) unsigned leftButtonIdentifier;                                                 //@synthesize leftButtonIdentifier=_leftButtonIdentifier - In the implementation block
@property (assign,nonatomic) unsigned rightButtonIdentifier;                                                //@synthesize rightButtonIdentifier=_rightButtonIdentifier - In the implementation block
@property (assign,nonatomic) double gestureRecordingDidStartTimeInterval;                                   //@synthesize gestureRecordingDidStartTimeInterval=_gestureRecordingDidStartTimeInterval - In the implementation block
@property (assign,getter=isInReplayMode,nonatomic) char inReplayMode;                                       //@synthesize inReplayMode=_inReplayMode - In the implementation block
@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;                                  //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,retain) id appDidResignActiveNotificationHandlerToken;                                 //@synthesize appDidResignActiveNotificationHandlerToken=_appDidResignActiveNotificationHandlerToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)setInstructionsLabel:(UILabel *)arg1 ;
-(UILabel *)instructionsLabel;
-(void)_updateFingerView:(id)arg1 ;
-(char)isInReplayMode;
-(ASTGestureRecorderControlsView *)controlsView;
-(void)_releaseOutlets;
-(id)appDidResignActiveNotificationHandlerToken;
-(void)setAppDidResignActiveNotificationHandlerToken:(id)arg1 ;
-(SEL)customGesturesGetter;
-(SEL)customGesturesSetter;
-(void)setCustomGesturesSetter:(SEL)arg1 ;
-(void)setCustomGesturesGetter:(SEL)arg1 ;
-(void)setGestureRecorderViewController:(ASTGestureRecorderViewController *)arg1 ;
-(ASTGestureRecorderViewController *)gestureRecorderViewController;
-(void)setControlsView:(ASTGestureRecorderControlsView *)arg1 ;
-(void)_setLeftButtonIdentifier:(unsigned)arg1 enabled:(char)arg2 rightButtonIdentifier:(unsigned)arg3 enabled:(char)arg4 animate:(char)arg5 completion:(/*^block*/id)arg6 ;
-(void)_saveWithMessage:(id)arg1 ;
-(void)setLeftButtonIdentifier:(unsigned)arg1 ;
-(void)setRightButtonIdentifier:(unsigned)arg1 ;
-(void)_getButtonPropertiesForIdentifier:(unsigned)arg1 enabled:(char)arg2 color:(int*)arg3 title:(id*)arg4 ;
-(double)gestureRecordingDidStartTimeInterval;
-(void)setInReplayMode:(char)arg1 ;
-(void)setGestureRecordingDidStartTimeInterval:(double)arg1 ;
-(void)_manageDisplayLinkManager:(char)arg1 ;
-(void)setSaveAlertView:(UIAlertView *)arg1 ;
-(char)_canSaveGestureWithName:(id)arg1 ;
-(void)_didSaveGestureWithName:(id)arg1 ;
-(void)_updateProgressView:(id)arg1 ;
-(unsigned)rightButtonIdentifier;
-(void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(id)arg1 ;
-(unsigned)leftButtonIdentifier;
-(void)_enterWaitingMode;
-(void)_enterReplayMode;
-(void)gestureRecorderControlsView:(id)arg1 buttonTappedAtIndex:(unsigned)arg2 ;
-(double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(id)arg1 ;
-(void)gestureRecorderViewControllerDidStartRecordingAtomicFingerPath:(id)arg1 ;
-(void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(id)arg1 ;
-(UIAlertView *)saveAlertView;
-(ASTGestureRecorderStyleProvider *)styleProvider;
-(void)setStyleProvider:(ASTGestureRecorderStyleProvider *)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)_commonInit;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_hide;
-(void)_reset;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(UIBarButtonItem *)saveButton;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(void)_saveButtonTapped:(id)arg1 ;
@end
