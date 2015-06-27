/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIBackdropView.h>

@class NSMutableArray, UIKeyboardBackdropCornerView;

@interface UIKBBackdropView : _UIBackdropView {

	char _primaryBackdrop;
	NSMutableArray* _secondaryBackdrops;
	UIKeyboardBackdropCornerView* _backdropCornerView;
	char _hasUpdatedFrame;

}

@property (nonatomic,readonly) char _hasUpdatedFrame;              //@synthesize hasUpdatedFrame=_hasUpdatedFrame - In the implementation block
+(id)unconditionalTriggerNotificationNames;
+(void)overlayRelevantSettings:(id)arg1 ontoSettings:(id)arg2 ;
+(id)triggerNotificationNames;
+(void)_registerSecondaryBackdropView:(id)arg1 ;
+(void)_unregisterSecondaryBackdropView:(id)arg1 ;
+(void)_updatedSecondaryBackdropsWithSettings:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateFrame:(CGRect)arg1 withCorners:(int)arg2 ;
-(void)applySettings:(id)arg1 ;
-(void)triggerUpdate:(id)arg1 ;
-(void)transitionToStyle:(int)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 primaryBackdrop:(char)arg3 ;
-(int)textEffectsVisibilityLevel;
-(void)willCallRenderInContextOnBackdropViewLayer;
-(void)didCallRenderInContextOnBackdropViewLayer;
-(char)_hasUpdatedFrame;
@end
