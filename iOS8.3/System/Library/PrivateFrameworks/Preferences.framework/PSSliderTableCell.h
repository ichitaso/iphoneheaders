/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:09:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSControlTableCell.h>

@class UIView;

@interface PSSliderTableCell : PSControlTableCell {

	UIView* _disabledView;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)setValue:(id)arg1 ;
-(id)titleLabel;
-(void)prepareForReuse;
-(char)canReload;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setCellEnabled:(char)arg1 ;
-(id)newControl;
-(id)controlValue;
@end
