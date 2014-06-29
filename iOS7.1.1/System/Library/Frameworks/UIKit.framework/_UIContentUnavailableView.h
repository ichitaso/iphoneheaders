/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, _UIBackdropView, UIView, UILabel, UIButton, NSLayoutConstraint, NSMutableArray;

@interface _UIContentUnavailableView : UIView {

	unsigned long long _style;
	NSString* _title;
	_UIBackdropView* _backdrop;
	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _actionButton;
	NSLayoutConstraint* titleToMessageConstraint;
	NSLayoutConstraint* messageToButtonConstraint;
	UIView* _fromSnapshot;
	UIView* _toSnapshot;
	CGSize _fromSnapshotSize;
	NSMutableArray* _containerViewContraints;
	NSString* _message;
	NSString* _buttonTitle;
	/*^block*/ id _buttonAction;
	unsigned long long _vibrantOptions;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;                           //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) id buttonAction;                                  //@synthesize buttonAction=_buttonAction - In the implementation block
@property (assign,nonatomic) unsigned long long vibrantOptions;              //@synthesize vibrantOptions=_vibrantOptions - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)message;
-(void)updateConstraints;
-(void)setMessage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 ;
-(void)setButtonAction:(/*^block*/ id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 style:(unsigned long long)arg3 includeBackdrop:(bool)arg4 ;
-(bool)_hasVibrantButton;
-(void)_updateViewHierarchy;
-(bool)_hasVibrantText;
-(id)_vibrantBaseColor;
-(id)_flatTextColor;
-(double)_labelAlpha;
-(void)_actionButtonPressed:(id)arg1 ;
-(id)_buttonBackgroundImageForStyle:(unsigned long long)arg1 controlState:(unsigned long long)arg2 ;
-(/*^block*/ id)buttonAction;
-(void)windowWillRotateNotification:(id)arg1 ;
-(void)windowWillAnimateRotateNotification:(id)arg1 ;
-(void)windowDidRotateNotification:(id)arg1 ;
-(unsigned long long)vibrantOptions;
-(void)setButtonTitle:(id)arg1 ;
-(void)setVibrantOptions:(unsigned long long)arg1 ;
-(id)buttonTitle;
@end
