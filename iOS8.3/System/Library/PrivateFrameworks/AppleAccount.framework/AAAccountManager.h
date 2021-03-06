/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:40:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {

	ACAccountStore* _accountStore;
	NSMutableArray* _accounts;
	NSMutableArray* _originalAccounts;
	id _accountStoreDidChangeObserver;

}
+(id)sharedManager;
-(void)dealloc;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_removeAppleIDCertsForUsername:(id)arg1 ;
-(id)accountsEnabledForDataclass:(id)arg1 ;
-(id)accountWithUsername:(id)arg1 ;
-(id)accountWithPersonID:(id)arg1 ;
-(void)updateAccount:(id)arg1 ;
-(void)saveAllAccounts;
-(id)primaryAccount;
-(id)accountWithIdentifier:(id)arg1 ;
-(id)accounts;
-(void)removeAccount:(id)arg1 ;
-(void)reloadAccounts;
-(void)addAccount:(id)arg1 ;
-(id)_accountStore;
@end

