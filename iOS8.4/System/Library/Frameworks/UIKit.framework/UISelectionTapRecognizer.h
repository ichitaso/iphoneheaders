/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextTapRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UISelectionTapRecognizer : UITextTapRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (assign) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(void)setState:(long long)arg1 ;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(UIResponder*<UITextInput>)textView;
-(BOOL)isCloseToSelection;
@end
