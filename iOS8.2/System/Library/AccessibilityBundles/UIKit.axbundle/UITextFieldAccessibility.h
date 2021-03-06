/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextFieldAccessibility_super.h>

@interface UITextFieldAccessibility : __UITextFieldAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)_accessibilityHitTestShouldFallbackToNearestChild;
-(void)_accessibilitySetValue:(id)arg1 ;
-(id)_accessibilityInternalData;
-(void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1 ;
-(id)_accessibilityInternalButton;
-(void)_accessibilityUpdateButtons;
-(id)_accessibilityTextFieldElement;
-(char)_axTextFieldIsHidden;
-(int)_accessibilityCountAccessibleChildren:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(char)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(char)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(char)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_clearButtonClicked:(id)arg1 ;
-(void)_updateButtons;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityPlaceholderValue;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
@end

