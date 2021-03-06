/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <Social/SLPlaceDataSourceDelegate.h>
#import <Social/SLSheetPlaceViewControllerDelegate.h>
#import <Social/SLFacebookAudienceViewControllerDelegate.h>
#import <Social/SLFacebookAlbumChooserViewControllerDelegate.h>
#import <Social/SLFacebookVideoOptionsDelegate.h>

@protocol SLFacebookAudienceViewController;
@class SLFacebookSession, ACAccountStore, ACAccount, SLSheetPlaceViewController, UIViewController, SLFacebookAlbumChooserViewController, SLFacebookVideoOptionsViewController, SLFacebookPost, SLFacebookPostPrivacyManager, SLFacebookPlaceManager, SLFacebookAlbumManager, ALAssetsLibrary, SLSheetAction, SLVideoQualityOption;

@interface SLFacebookComposeViewController : SLComposeServiceViewController <SLPlaceDataSourceDelegate, SLSheetPlaceViewControllerDelegate, SLFacebookAudienceViewControllerDelegate, SLFacebookAlbumChooserViewControllerDelegate, SLFacebookVideoOptionsDelegate> {

	bool _wasPresented;
	bool _hasAccessToAccount;
	bool _hasCheckedAccess;
	bool _hasShowedLocationDeniedAlert;
	SLFacebookSession* _session;
	ACAccountStore* _accountStore;
	bool _didFetchPrivilegedAccount;
	ACAccount* _privilegedAccount;
	SLSheetPlaceViewController* _placeViewController;
	UIViewController<SLFacebookAudienceViewController>* _audienceViewController;
	SLFacebookAlbumChooserViewController* _albumChooserViewController;
	SLFacebookVideoOptionsViewController* _videoOptionsViewController;
	SLFacebookPost* _post;
	SLFacebookPostPrivacyManager* _postPrivacyManager;
	SLFacebookPlaceManager* _placeManager;
	SLFacebookAlbumManager* _albumManager;
	ALAssetsLibrary* _assetsLibrary;
	SLSheetAction* _privacySheetAction;
	SLSheetAction* _albumSheetAction;
	SLSheetAction* _placeSheetAction;
	SLSheetAction* _videoOptionsAction;
	SLVideoQualityOption* _selectedVideoQualityOption;
	struct {
		unsigned showAlbumAction : 1;
		unsigned showPrivacyAction : 1;
		unsigned showPlaceAction : 1;
		unsigned showVideoDetailAction : 1;
	}  _actionFlags;
	/*^block*/ id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (@dynamic,retain) ACAccountStore * accountStore; 
@property (readonly) ACAccount * privilegedAccount; 
+(id)serviceBundle;
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(bool)validateText:(id)arg1 ;
-(void)albumChooserViewController:(id)arg1 didSelectAlbum:(id)arg2 ;
-(id)albumManager;
-(void)placeManager:(id)arg1 failedWithError:(id)arg2 ;
-(void)placeManager:(id)arg1 updatedPlaces:(id)arg2 ;
-(void)videoOptionsViewController:(id)arg1 didSelectVideoQualityOption:(id)arg2 ;
-(void)placeViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)audienceViewController:(id)arg1 didSelectPostPrivacySetting:(id)arg2 ;
-(void)_presentAudienceViewController;
-(id)_privacySheetAction;
-(id)_postPrivacyManager;
-(void)_presentPlaceViewController;
-(void)_presentAlbumViewController;
-(id)_albumSheetAction;
-(void)_presentVideoOptionsViewController;
-(id)_videoOptionsAction;
-(id)_placeSheetAction;
-(void)_presentFacebookDisabledAlert;
-(void)handleImagePostWithURL;
-(id)privilegedAccount;
-(id)_videoOptionIdentifer;
-(void)_setVideoSizeOptionIdentifier:(id)arg1 ;
-(bool)_isLocationAuthorizationDenied;
-(void)_setPlace:(id)arg1 ;
-(id)_videoQualityOption;
-(bool)hasAccountAccess;
-(void)_handlePostPrivacyResultWithSuccess:(bool)arg1 error:(id)arg2 ;
-(void)_presentNoAccountsAlert;
-(void)_updateAlbumSheetActionWithDefaultAlbum;
-(void)_updatePrivacySheetActionWithDefaultPrivacySetting;
-(bool)canPost;
-(void)setupCommonUI;
-(void)callCompletionHandlerWithResult:(long long)arg1 ;
-(void)sheetPresentationAnimationDidFinish;
-(id)init;
-(void)didReceiveMemoryWarning;
-(/*^block*/ id)completionHandler;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)send;
-(void).cxx_destruct;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(id)sheetActions;
@end

