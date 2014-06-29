/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABFMFActionButtonsDelegate.h>

@class ABUnknownPersonViewController, UIButton;

@interface ABFMFActionButtons : NSObject <ABFMFActionButtonsDelegate> {

	ABUnknownPersonViewController* _upvc;
	UIButton* _messageButton;
	UIButton* _facetimeButton;
	UIButton* _callButton;

}

@property (assign,nonatomic) void* displayedPerson; 
@property (nonatomic,readonly) bool hasTelephonyCapability; 
-(bool)hasTelephonyCapability;
-(void)showFMFMessageButton:(bool)arg1 withAction:(id)arg2 ;
-(void)showFMFFacetimeButton:(bool)arg1 withAction:(id)arg2 ;
-(void)showFMFCallButton:(bool)arg1 withAction:(id)arg2 ;
-(id)initWithMessageButton:(id)arg1 facetimeButton:(id)arg2 callButton:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void*)displayedPerson;
-(void)setDisplayedPerson:(void*)arg1 ;
@end
