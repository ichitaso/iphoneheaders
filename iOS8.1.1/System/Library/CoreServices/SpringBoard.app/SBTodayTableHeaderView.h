/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface SBTodayTableHeaderView : UIView {

	UILabel* _dateLabel;
	UILabel* _lunarDateLabel;
	BOOL _isContentValid;
	CGRect _calculatedDateLabelFrame;
	BOOL _achievedPreferredDateLabelLayout;
	CGSize _sizeThatFitsCalculatedDateLabelFrame;
	CGRect _calculatedLunarDateLabelFrame;
	long long _layoutMode;

}

@property (assign,nonatomic) long long layoutMode;              //@synthesize layoutMode=_layoutMode - In the implementation block
+(id)defaultLunarDateFont;
+(id)defaultDateFont;
+(double)lunarDateBaselineOffset;
+(id)defaultTextColor;
+(id)defaultBackgroundColor;
-(void)setLayoutMode:(long long)arg1 ;
-(void)invalidateContent;
-(void)_updateForContentCategorySizeDidChange;
-(id)dateHeaderOnSingleLine:(BOOL)arg1 ;
-(id)lunarCalendarIdentifier;
-(double)_dateLabelWidthForSize:(CGSize)arg1 layoutMode:(long long)arg2 ;
-(BOOL)_dateLabelNeedsLayoutForSize:(CGSize)arg1 ;
-(id)dateHeaderAttributedStringOnSingleLine:(BOOL)arg1 ;
-(BOOL)_isCachedSizeThatFitsValidForSize:(CGSize)arg1 ;
-(CGRect)dateLabelFrameForBounds:(CGRect)arg1 force:(BOOL)arg2 ;
-(BOOL)showsLunarDate;
-(id)lunarDateHeaderString;
-(CGRect)_lunarDateLabelFrameForBounds:(CGRect)arg1 ;
-(void)_layoutLunarDateLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)layoutMode;
-(void)_layoutDateLabel;
@end

