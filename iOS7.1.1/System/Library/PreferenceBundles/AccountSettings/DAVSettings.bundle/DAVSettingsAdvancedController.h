/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/DAVSettings.bundle/DAVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class DAAccount, NSString, DAVSettingsAccountsUIController;

@interface DAVSettingsAdvancedController : PSListController {

	DAAccount* _account;
	NSString* _placeHolder;
	bool _isReloadingProperties;
	DAVSettingsAccountsUIController* _accountController;

}
-(void)dealloc;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(id)specifiers;
@end
