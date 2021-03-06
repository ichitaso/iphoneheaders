/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHVoicemailListViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <MobilePhone/PHVoicemailListViewControllerConcrete.h>

@class UIActionSheet, NSString, NSArray;

@interface PHVoicemailBlockedListViewController : PHVoicemailListViewController <UIActionSheetDelegate, PHVoicemailListViewControllerConcrete> {

	UIActionSheet* _deleteAllConfirmationActionSheet;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * cellDetailDestructiveActionText; 
@property (readonly) NSString * navigationBarText; 
@property (readonly) NSString * folderName; 
@property (readonly) unsigned flagsToHave; 
@property (readonly) unsigned flagsNotToHave; 
@property (readonly) char popOffIfEmpty; 
@property (readonly) NSString * tableViewDestructiveActionText; 
@property (readonly) NSString * navigationBarTextWithCountFormat; 
@property (readonly) NSArray * childListControllers; 
-(NSString *)cellDetailDestructiveActionText;
-(void)performCellDetailDestructiveActionForVoicemail:(id)arg1 ;
-(unsigned)flagsToHave;
-(unsigned)flagsNotToHave;
-(void)performTableViewDestructiveActionForVoicemail:(id)arg1 ;
-(NSString *)navigationBarText;
-(char)popOffIfEmpty;
-(NSString *)tableViewDestructiveActionText;
-(void)deleteAllTapped;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(NSString *)folderName;
-(id)initWithNavigationController:(id)arg1 ;
@end

