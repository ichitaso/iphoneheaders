/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBApplication, UIView;

@interface SBMiniAlertController : NSObject {

	SBApplication* _displayShowingAnAlert;
	unsigned _sbMiniAlertVisible : 1;
	UIView* _hiddenAlertWindow;

}
+(id)sharedInstance;
-(char)miniAlertVisible;
-(void)deactivateAlertItemsForDisplay:(id)arg1 ;
-(void)displayDidDismissMiniAlert:(id)arg1 ;
-(void)noteMiniAlertStateChanged;
-(void)_setAlertVisibleNotifyState:(char)arg1 ;
-(void)_hideMiniAlertsForApp:(id)arg1 ;
-(void)_setDisplayShowingAnAlert:(id)arg1 ;
-(void)showApplicationMiniAlertsIfNeeded;
-(id)displayShowingAnAlert;
-(void)hideApplicationMiniAlerts;
-(void)displayWillShowMiniAlert:(id)arg1 ;
-(void)displayWillDismissMiniAlert:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)canShowAlerts;
@end

