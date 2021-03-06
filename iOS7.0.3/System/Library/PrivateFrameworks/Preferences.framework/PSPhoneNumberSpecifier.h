/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTextFieldSpecifier.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <UITextFieldDelegate> {

	NSString* _countryCode;

}

@property (nonatomic,retain) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setCountryCode:(id)arg1 ;
-(id)countryCode;
@end

