/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:30 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIStatusBarStyleDelegate <NSObject>
@optional
-(void)statusBar:(id)arg1 didTriggerButtonType:(int)arg2 withAction:(int)arg3;

@required
-(int)statusBar:(id)arg1 styleForRequestedStyle:(int)arg2 overrides:(int)arg3;
-(void)statusBar:(id)arg1 willAnimateFromHeight:(float)arg2 toHeight:(float)arg3 duration:(double)arg4 animation:(int)arg5;
-(void)statusBar:(id)arg1 didAnimateFromHeight:(float)arg2 toHeight:(float)arg3 animation:(int)arg4;

@end
