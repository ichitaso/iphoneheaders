/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/TKPickerRowItem.h>

@class NSString;

@interface TKPickerSelectableItem : TKPickerRowItem {

	char _textCentered;
	char _showsCheckmark;
	char _showsDisclosureIndicator;
	NSString* _text;
	NSString* _detailText;

}

@property (nonatomic,copy) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (assign,getter=isTextCentered,nonatomic) char textCentered;              //@synthesize textCentered=_textCentered - In the implementation block
@property (nonatomic,copy) NSString * detailText;                                  //@synthesize detailText=_detailText - In the implementation block
@property (assign,nonatomic) char showsCheckmark;                                  //@synthesize showsCheckmark=_showsCheckmark - In the implementation block
@property (assign,nonatomic) char showsDisclosureIndicator;                        //@synthesize showsDisclosureIndicator=_showsDisclosureIndicator - In the implementation block
-(NSString *)detailText;
-(void)dealloc;
-(NSString *)text;
-(void)_setText:(id)arg1 ;
-(void)_setShowsDisclosureIndicator:(char)arg1 ;
-(void)_setTextCentered:(char)arg1 ;
-(void)_setDetailText:(id)arg1 ;
-(void)_setShowsCheckmark:(char)arg1 ;
-(char)showsDisclosureIndicator;
-(char)isTextCentered;
-(char)showsCheckmark;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
@end
