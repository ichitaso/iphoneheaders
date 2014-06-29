/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebDocumentViewAccessibility_super.h>

@interface UIWebDocumentViewAccessibility : UIWebDocumentViewAccessibility_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityRootObject;
-(id)_accessibilityDocumentView;
-(void)_axZoomToCenterWithScale:(CGPoint)arg1 scale:(double)arg2 ;
-(void)_accessibilityZoomAtPoint:(CGPoint)arg1 zoomIn:(bool)arg2 ;
-(void)dealloc;
-(id)accessibilityLabel;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2 ;
-(void)clearSelection;
-(void)stopLoading:(id)arg1 ;
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(bool)shouldGroupAccessibilityChildren;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityScrollStatus;
-(bool)_accessibilityIsScrollAncestor;
-(bool)_accessibilityScrollingEnabled;
-(bool)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(void)accessibilityScrollLeftPage;
-(void)accessibilityScrollRightPage;
-(void)accessibilityScrollUpPage;
-(void)accessibilityScrollDownPage;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(bool)_accessibilityHasTextOperations;
-(CGRect)_accessibilityContentFrame;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(bool)_accessibilityIsFirstElementForFocus;
-(id)_accessibilityResponderElement;
@end
