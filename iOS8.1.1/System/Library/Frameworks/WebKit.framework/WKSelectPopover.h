/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormRotatingAccessoryPopover.h>
#import <WebKit/WKFormControl.h>

@class WKContentView;

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {

	WKContentView* _view;
	RetainPtr<WKSelectTableViewController>* _tableViewController;
	RetainPtr<UIKeyboard>* _keyboard;

}
-(void)dealloc;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)_userActionDismissedPopover:(id)arg1 ;
-(id)initWithView:(id)arg1 hasGroups:(BOOL)arg2 ;
@end

