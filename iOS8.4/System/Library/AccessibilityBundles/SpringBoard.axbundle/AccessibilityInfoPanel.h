/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class UIViewController, AccessibilityInfoPanelWindow, UIView, UILabel, NSString;

@interface AccessibilityInfoPanel : NSObject {

	UIViewController* _accessibilityInfoPanelController;
	AccessibilityInfoPanelWindow* _accessibilityInfoPanelWindow;
	UIView* _accessibilityInfoPanelView;
	UIView* _rootView;
	UILabel* _labelView;
	UIView* _backgroundView;
	NSString* _title;
	BOOL _displayOnBottomEdge;

}

@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL displayOnBottomEdge; 
-(BOOL)displayOnBottomEdge;
-(id)_accessibilityInfoPanelView;
-(id)_accessibilityInfoPanelWindow;
-(CGRect)_displayFrame;
-(void)setDisplayOnBottomEdge:(BOOL)arg1 ;
-(id)_accessibilityInfoPanelController;
-(void)hide;
-(void)show;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 ;
-(void)fadeOut;
-(id)_rootView;
-(void)_setup;
-(void)_layoutSubviews;
@end
