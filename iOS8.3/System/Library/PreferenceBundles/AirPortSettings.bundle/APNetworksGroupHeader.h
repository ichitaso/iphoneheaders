/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:49:06 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <AirPortSettings/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, PSSpecifier;

@interface APNetworksGroupHeader : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _spinner;
	UILabel* _text;
	PSSpecifier* _specifier;

}
-(id)initWithSpecifier:(id)arg1 ;
-(void)hideText;
-(void)showSpinner;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)showText;
-(void)hideSpinner;
@end
