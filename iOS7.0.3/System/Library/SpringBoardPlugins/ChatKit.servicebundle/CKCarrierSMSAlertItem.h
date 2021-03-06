/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKAlertItem.h>

@class NSString;

@interface CKCarrierSMSAlertItem : CKAlertItem {

	NSString* _messageBody;
	NSString* _sender;
	/*^block*/ id _acknowledgeBlock;

}
-(id)messageText;
-(id)initWithMessageBody:(id)arg1 sender:(id)arg2 acknowledgeBlock:(/*^block*/ id)arg3 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)willShowInAwayItems;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(id)name;
-(void)didDeactivateForReason:(int)arg1 ;
@end

