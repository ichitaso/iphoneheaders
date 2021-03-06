/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:52:11 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString, UIFont, UIColor;

@interface TKLabelContainerView : UIView {

	UILabel* _label;
	UIEdgeInsets _labelPaddingInsets;

}

@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,retain) UIFont * labelFont; 
@property (nonatomic,retain) UIColor * labelTextColor; 
@property (nonatomic,retain) UIColor * labelShadowColor; 
@property (assign,nonatomic) UIOffset labelShadowOffset; 
@property (assign,nonatomic) UIEdgeInsets labelPaddingInsets;                 //@synthesize labelPaddingInsets=_labelPaddingInsets - In the implementation block
@property (setter=_setLabel:,nonatomic,retain) UILabel * _label;              //@synthesize label=_label - In the implementation block
-(void)setLabelText:(NSString *)arg1 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(void)setLabelTextColor:(UIColor *)arg1 ;
-(void)setLabelShadowColor:(UIColor *)arg1 ;
-(void)setLabelShadowOffset:(UIOffset)arg1 ;
-(NSString *)labelText;
-(UIColor *)labelTextColor;
-(UIFont *)labelFont;
-(UILabel *)_label;
-(void)_setLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)labelPaddingInsets;
-(UIColor *)labelShadowColor;
-(UIOffset)labelShadowOffset;
-(void)setLabelPaddingInsets:(UIEdgeInsets)arg1 ;
@end

