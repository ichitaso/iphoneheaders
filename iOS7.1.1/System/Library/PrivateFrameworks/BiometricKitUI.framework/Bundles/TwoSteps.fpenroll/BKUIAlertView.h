/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, UIView, UILabel;

@interface BKUIAlertView : UIView <UIAlertViewDelegate> {

	UIAlertView* _alert;
	double _alertHudTextStartTime;
	id _parent;
	SEL _cancelButtonSelector;
	SEL _otherButtonSelector;
	UIView* _alertHudView;
	UILabel* _alertHudText;
	double _alertHudTimeout;
	double _alertHudMinDisplayTime;

}

@property (assign,nonatomic,__weak) id parent;                           //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) SEL cancelButtonSelector;                   //@synthesize cancelButtonSelector=_cancelButtonSelector - In the implementation block
@property (assign,nonatomic) SEL otherButtonSelector;                    //@synthesize otherButtonSelector=_otherButtonSelector - In the implementation block
@property (assign,nonatomic,__weak) UIView * alertHudView;               //@synthesize alertHudView=_alertHudView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * alertHudText;              //@synthesize alertHudText=_alertHudText - In the implementation block
@property (assign,nonatomic) double alertHudTimeout;                     //@synthesize alertHudTimeout=_alertHudTimeout - In the implementation block
@property (assign,nonatomic) double alertHudMinDisplayTime;              //@synthesize alertHudMinDisplayTime=_alertHudMinDisplayTime - In the implementation block
-(void)_hideAlertHudView;
-(void)setAlertHudMinDisplayTime:(double)arg1 ;
-(void)show:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 ;
-(void)_setFadeAnimation:(id)arg1 ;
-(double)alertHudMinDisplayTime;
-(id)alertHudText;
-(void)setAlertHudText:(id)arg1 ;
-(bool)isAlertHidden;
-(void)setAlertHudTimeout:(double)arg1 ;
-(void)show:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 cancelButtonSelector:(SEL)arg5 otherButtonTitle:(id)arg6 otherButtonSelector:(SEL)arg7 ;
-(double)alertHudTimeout;
-(SEL)otherButtonSelector;
-(void)setOtherButtonSelector:(SEL)arg1 ;
-(SEL)cancelButtonSelector;
-(void)setCancelButtonSelector:(SEL)arg1 ;
-(id)alertHudView;
-(void)show:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 cancelButtonSelector:(SEL)arg5 ;
-(void)setAlertHudView:(id)arg1 ;
-(id)init;
-(void)_init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)hide;
-(void).cxx_destruct;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

