/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:00 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol SBThermalWarningAlertItemDelegate;
@interface SBThermalWarningAlertItem : SBAlertItem {

	<SBThermalWarningAlertItemDelegate>* _delegate;
	int _actionTaken;

}

@property (getter=isWaitingForResponse,nonatomic,readonly) BOOL waitingForResponse; 
-(void)_tryToSendAction:(int)arg1 ;
-(void)_autoCoolDown;
-(BOOL)unlocksScreen;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_playPresentationSound;
-(BOOL)undimsScreen;
-(void)willActivate;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)isWaitingForResponse;
@end
