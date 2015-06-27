/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITableViewCellAccessibility_super.h>

@interface UITableViewCellAccessibility : __UITableViewCellAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryTargetClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)_accessibilityIsDescendantOfElement:(id)arg1 ;
-(id)_accessibilityUserTestingChildren;
-(id)_accessibilityChildren;
-(char)_accessibilityIsSpeakThisElement;
-(void)_accessibilityClearChildren;
-(id)_accessibilityInternalData;
-(id)_accessibilityScannerGroupElements;
-(id)_accessibilityIndexPath;
-(id)_accessibilityTableViewSwitch;
-(id)_accessibilitySubviewsForAdding;
-(void)registerMockChild:(id)arg1 ;
-(char)_accessibilityLabelShouldBeDistinct:(id)arg1 ;
-(void)unregisterMockChild:(id)arg1 ;
-(void)_accessibilitySwitchMockView:(id)arg1 toParent:(id)arg2 withPossibleSubviews:(id)arg3 ;
-(char)_accessibilityIsRemoveControlVisible;
-(char)_accessibilityIsRemoveConfirmVisible;
-(void)_accessibilityHandleRemoveSwitch;
-(void)_accessibilityHandleRemoveConfirm;
-(char)_accessibilityAlwaysReturnsChild;
-(void)_accessibilityReevaluateChildren;
-(id)_accessibilityRetrieveTableViewCellText;
-(id)_accessibilityRetrieveTableViewIvarsText;
-(char)_accessibilityUsesOverrideContainerProtocol;
-(id)_accessibilityContainerElements;
-(id)_accessibilityOverrideChildren;
-(char)_accessibilityIgnoreInternalLabels;
-(char)_axSubviewIgnoredDueToHiddenAncestry:(id)arg1 ;
-(char)_accessibilityTableViewCellSubclassShouldExist;
-(int)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(void)_accessibilityUpdateRemoveControl;
-(id)_accessibilityCustomActions;
-(char)_accessibilityCanEditTableViewCell;
-(char)_accessibilityPerformSwipeAction:(id)arg1 ;
-(char)_accessibilityIsInTableCell;
-(char)_accessibilityIsTableCell;
-(void)_accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(id)_accessibilityMockParent;
-(void)_setAccessibilityMockParent:(id)arg1 ;
-(id)_accessibilityTextElementText;
-(CGRect)tableTextAccessibleFrame:(id)arg1 ;
-(id)tableTextAccessibleLabel:(id)arg1 ;
-(float)_accessibilityAllowedGeometryOverlap;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)_beginSwiping;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)_setShowingDeleteConfirmation:(char)arg1 ;
-(void)didTransitionToState:(unsigned)arg1 ;
-(void)setShowingDeleteConfirmation:(char)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(id)_checkmarkImage:(char)arg1 ;
-(void)setAccessoryView:(id)arg1 ;
-(void)editControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasClicked:(id)arg1 ;
-(void)deleteConfirmationControlWasCancelled:(id)arg1 ;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(char)shouldGroupAccessibilityChildren;
-(char)accessibilityElementIsFocused;
-(char)accessibilityActivate;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(NSRange)accessibilityRowRange;
@end
