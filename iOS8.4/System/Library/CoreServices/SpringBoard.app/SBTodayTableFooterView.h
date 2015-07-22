/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBNewWidgetsLabel, SBNotificationVibrantButton, SBNotificationSeparatorView, SBAttributionWrapperViewController, UIControl;

@interface SBTodayTableFooterView : UIView {

	SBNewWidgetsLabel* _newWidgetsLabel;
	SBNotificationVibrantButton* _button;
	SBNotificationSeparatorView* _separatorView;
	SBAttributionWrapperViewController* _attributionViewController;
	long long _layoutMode;

}

@property (assign,nonatomic) long long layoutMode;                                                        //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,readonly) UIControl * button;                                                        //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) SBAttributionWrapperViewController * attributionViewController;              //@synthesize attributionViewController=_attributionViewController - In the implementation block
-(void)setLayoutMode:(long long)arg1 ;
-(void)setAttributionViewController:(SBAttributionWrapperViewController *)arg1 ;
-(void)_updateForContentCategorySizeDidChange;
-(void)_availableWidgetsUpdated:(id)arg1 ;
-(void)_updateForLockStateDidChange:(id)arg1 ;
-(BOOL)_isDevicePasscodeLocked;
-(double)_buttonBottomPadding;
-(void)_updateAttributionFrame;
-(double)_attributionOriginY;
-(SBAttributionWrapperViewController *)attributionViewController;
-(UIControl *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)layoutMode;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
@end
