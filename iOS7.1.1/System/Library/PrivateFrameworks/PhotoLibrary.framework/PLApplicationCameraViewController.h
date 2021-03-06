/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLCameraViewController.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeObserver.h>
#import <PhotoLibrary/PLAssetContainerObserver.h>
#import <PhotoLibrary/PLCameraPreviewWellImageChangeObserver.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <PhotoLibrary/PLPhotoBrowserControllerDelegate.h>

@protocol PLApplicationCameraViewControllerDelegate, OS_dispatch_queue;
@class NSDictionary, NSObject, PLKeepDaemonAliveAssertion, UIToolbar, UIViewController;

@interface PLApplicationCameraViewController : PLCameraViewController <PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLCameraPreviewWellImageChangeObserver, UINavigationControllerDelegate, PLPhotoBrowserControllerDelegate> {

	/*^block*/ id _previewButtonAction;
	/*^block*/ id _doneButtonAction;
	NSDictionary* _configuration;
	<PLApplicationCameraViewControllerDelegate>* _delegate;
	bool _usesSessionAlbum;
	double _sessionStartTime;
	NSObject<OS_dispatch_queue>* _photoStreamDispatchQueue;
	PLKeepDaemonAliveAssertion* _keepDaemonAliveAssertion;
	bool _isReadyToTest;
	long long _testPictureCounter;
	long long _testPicturesReceivedCounter;
	double _testPictureRepeatDelay;
	bool __shouldShowCameraRoll;
	bool __dismissingCameraRoll;
	bool __dismissingCameraRollForSuspension;
	bool __shouldRetryDismissal;
	bool __handlesVolumeButtons;
	bool __ignoringVolumeButtons;
	NSObject* _cameraAlbum;
	UIToolbar* _bottomButtonBar;
	UIViewController* __cameraRollViewController;

}

@property (nonatomic,retain) NSObject<PLAlbumProtocol> * cameraAlbum;                                                                                                        //@synthesize cameraAlbum=_cameraAlbum - In the implementation block
@property (nonatomic,copy) id previewButtonAction;                                                                                                                           //@synthesize previewButtonAction=_previewButtonAction - In the implementation block
@property (assign,nonatomic) <PLApplicationCameraViewControllerDelegate> * delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIToolbar * bottomButtonBar;                                                                                                                  //@synthesize bottomButtonBar=_bottomButtonBar - In the implementation block
@property (assign,nonatomic) long long testPictureCounter;                                                                                                                   //@synthesize testPictureCounter=_testPictureCounter - In the implementation block
@property (assign,nonatomic) double testPictureRepeatDelay;                                                                                                                  //@synthesize testPictureRepeatDelay=_testPictureRepeatDelay - In the implementation block
@property (assign,setter=_setShouldShowCameraRoll:,nonatomic) bool _shouldShowCameraRoll;                                                                                    //@synthesize _shouldShowCameraRoll=__shouldShowCameraRoll - In the implementation block
@property (assign,setter=_setDismissingCameraRoll:,getter=_isDismissingCameraRoll,nonatomic) bool _dismissingCameraRoll;                                                     //@synthesize _dismissingCameraRoll=__dismissingCameraRoll - In the implementation block
@property (assign,setter=_setDismissingCameraRollForSuspension:,getter=_isDismissingCameraRollForSuspension,nonatomic) bool _dismissingCameraRollForSuspension;              //@synthesize _dismissingCameraRollForSuspension=__dismissingCameraRollForSuspension - In the implementation block
@property (nonatomic,readonly) bool _shouldRetryDismissal;                                                                                                                   //@synthesize _shouldRetryDismissal=__shouldRetryDismissal - In the implementation block
@property (nonatomic,readonly) UIViewController * _cameraRollViewController;                                                                                                 //@synthesize _cameraRollViewController=__cameraRollViewController - In the implementation block
@property (assign,setter=_setHandlesVolumeButtons:,nonatomic) bool _handlesVolumeButtons;                                                                                    //@synthesize _handlesVolumeButtons=__handlesVolumeButtons - In the implementation block
@property (assign,setter=_setIgnoringVolumeButtons:,nonatomic) bool _ignoringVolumeButtons;                                                                                  //@synthesize _ignoringVolumeButtons=__ignoringVolumeButtons - In the implementation block
-(void)setSessionID:(id)arg1 ;
-(void)startCameraPreview;
-(void)saveCameraConfiguration;
-(void)prepareForDismissal;
-(void)dismissCameraRollForSuspension;
-(void)startCameraPreviewWithSavedConfiguration;
-(void)stopCameraPreview;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)applicationWillSuspend;
-(void)prepareForDefaultImageSnapshot;
-(void)applicationDidResume;
-(bool)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_PL3*)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3 ;
-(void)takePicture;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(bool)cameraViewShouldShowPreviewAfterSelection:(id)arg1 ;
-(void)_handleVolumeButtonDown;
-(void)_handleVolumeButtonUp;
-(void)cameraViewDidFinishUnblurringForPreview:(id)arg1 ;
-(void)cameraViewFinishedTakingPicture:(id)arg1 ;
-(void)presentCameraRollAboveCameraView:(id)arg1 ;
-(void)cameraViewFinishedSuspensionBlur:(id)arg1 ;
-(void)animateBlurForSuspension;
-(id)bottomButtonBar;
-(id)initWithSessionID:(id)arg1 usesCameraLocationBundleID:(bool)arg2 startPreviewImmediately:(bool)arg3 ;
-(id)newAlbumNavigationControllerForAlbum:(NSObject*)arg1 ;
-(void)prepareAlbumNavigationControllerForReuse:(id)arg1 withAlbum:(NSObject*)arg2 ;
-(void)_kickoffCameraControllerPreview;
-(void)_setWantsVolumeButtonEvents:(bool)arg1 ;
-(void)setPreviewButtonAction:(/*^block*/ id)arg1 ;
-(void)_applyConfiguration;
-(void)_saveConfiguration;
-(void)viewWillShowForLaunch;
-(void)setupForCameraStart;
-(void)_applyAutorotationCorrectingTransformForOrientation:(long long)arg1 ;
-(void)prepareForSuspension;
-(void)_refreshCameraUIForAlbumChange;
-(CGAffineTransform)_autorotationCorrectingTransformFromOrientation:(long long)arg1 ;
-(void)_setShouldShowCameraRoll:(bool)arg1 ;
-(NSObject*)_cameraAlbum;
-(bool)_shouldShowCameraRoll;
-(void)_updateVolumeButtonEventsAbility;
-(void)dismissCameraRollAnimated:(bool)arg1 forSuspension:(bool)arg2 ;
-(void)stopCameraPreviewAnimated:(bool)arg1 ;
-(void)startPictureTest;
-(void)_startPictureTestAfterSeconds:(double)arg1 ;
-(bool)_shouldResetMode:(id)arg1 ;
-(void)_defaultCameraDevice:(id*)arg1 cameraMode:(id*)arg2 ;
-(id)_dictionaryFromPackedArray:(id)arg1 ;
-(bool)showingCameraPreview;
-(bool)_shouldResumeTorch;
-(id)_packedArrayFromDictionary:(id)arg1 ;
-(void)cleanupForCameraEnd;
-(id)_currentPhotoBrowser;
-(void)_makeViewControllersPerformSelector:(SEL)arg1 withNotification:(id)arg2 ;
-(id)_cameraRollViewController;
-(id)initWithSessionID:(id)arg1 startPreviewImmediately:(bool)arg2 ;
-(void)testSetHDROn:(bool)arg1 ;
-(void)testSetAutofocusDisabled:(bool)arg1 ;
-(void)setTestPictureCounter:(long long)arg1 ;
-(bool)_cameraIsRunning;
-(id)cameraButtonBar;
-(void)_startCameraPreviewWithPreviewStartedBlock:(/*^block*/ id)arg1 ;
-(bool)shouldAnimateBlurForSuspension;
-(id)_stringForHDRMode:(int)arg1 ;
-(void)preferencesDidChange;
-(void)setUsesSessionAlbum:(bool)arg1 ;
-(long long)testPictureCounter;
-(double)testPictureRepeatDelay;
-(void)setTestPictureRepeatDelay:(double)arg1 ;
-(NSObject*)cameraAlbum;
-(void)_setCameraAlbum:(NSObject*)arg1 ;
-(/*^block*/ id)previewButtonAction;
-(bool)_isDismissingCameraRoll;
-(void)_setDismissingCameraRoll:(bool)arg1 ;
-(bool)_isDismissingCameraRollForSuspension;
-(void)_setDismissingCameraRollForSuspension:(bool)arg1 ;
-(bool)_shouldRetryDismissal;
-(bool)_handlesVolumeButtons;
-(void)_setHandlesVolumeButtons:(bool)arg1 ;
-(bool)_ignoringVolumeButtons;
-(void)_setIgnoringVolumeButtons:(bool)arg1 ;
-(void)pausePhotoStreams;
-(void)resumePhotoStreams;
-(void)assetContainerDidChange:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(void)cameraPreviewWellImageDidChange:(id)arg1 ;
-(void)dismissCameraRoll:(id)arg1 ;
-(void)_libraryDidChange:(id)arg1 ;
-(void)photoBrowserControllerWillBeginPaging:(id)arg1 ;
-(void)photoBrowserControllerDidEndPaging:(id)arg1 ;
@end

