/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/SpringBoardPlugins/Assistant.uibundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol ACAssistantEducationAlertItemDelegate;
@class NSOrderedSet, NSSet;

@interface ACAssistantEducationAlertItem : SBAlertItem {

	NSOrderedSet* _languageCodes;
	int _type;
	NSSet* _displayedLanguageCodes;
	id<ACAssistantEducationAlertItemDelegate> _delegate;

}

@property (nonatomic,readonly) int type;                                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSSet * displayedLanguageCodes;                                  //@synthesize displayedLanguageCodes=_displayedLanguageCodes - In the implementation block
@property (assign,nonatomic,__weak) id<ACAssistantEducationAlertItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<ACAssistantEducationAlertItemDelegate>)arg1 ;
-(id<ACAssistantEducationAlertItemDelegate>)delegate;
-(int)type;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)performUnlockAction;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(void)_assistantDidActivate:(id)arg1 ;
-(id)initWithType:(int)arg1 languageCodes:(id)arg2 delegate:(id)arg3 ;
-(NSSet *)displayedLanguageCodes;
@end
