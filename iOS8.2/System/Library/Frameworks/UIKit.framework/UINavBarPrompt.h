/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UINavigationBar;

@interface UINavBarPrompt : UIView {

	UILabel* _label;
	UINavigationBar* _navBar;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(void)clearWeakReference:(id)arg1 ;
-(id)initWithPrompt:(id)arg1 navBar:(id)arg2 ;
-(CGRect)promptBounds;
-(CGRect)_labelFrame;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
-(CGSize)_updateLabelTextColorAndFontReturningShadowOffset_legacy;
@end

