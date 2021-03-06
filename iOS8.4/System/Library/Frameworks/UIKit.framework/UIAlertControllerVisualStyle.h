/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIAlertControllerDescriptor, UITraitCollection;

@interface UIAlertControllerVisualStyle : NSObject {

	UIAlertControllerDescriptor* _descriptor;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) UIAlertControllerDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,retain) UITraitCollection * traitCollection;                   //@synthesize traitCollection=_traitCollection - In the implementation block
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(double)maximumWidth;
-(id)backgroundView;
-(id)dimmingView;
-(void)setDescriptor:(UIAlertControllerDescriptor *)arg1 ;
-(double)verticalContentMargin;
-(id)titleLabelFont;
-(id)titleLabelColor;
-(double)marginAboveTitleLabelFirstBaseline;
-(double)marginBelowLastLabelLastBaseline;
-(long long)maximumNumberOfLinesInTitleLabel;
-(id)messageLabelFont;
-(id)messageLabelColor;
-(long long)maximumNumberOfLinesInMessageLabel;
-(double)horizontalContentMargin;
-(double)visualAltitude;
-(id)regularActionFont;
-(id)defaultActionFont;
-(id)actionHighlightedBackgroundView;
-(id)highlightedActionContentColor;
-(id)defaultActionBackgroundColorWhenSeparate;
-(double)minimumActionHeight;
-(id)disabledActionContentColor;
-(BOOL)focusedActionAnimatesOnPresentationAndDismissal;
-(CGAffineTransform)presentationAnimationStartTransform;
-(double)sectionDelimitingSeparatorDimension;
-(BOOL)hideActionSeparators;
-(double)marginBelowTitleLabelLastBaseline;
-(double)marginAboveMessageLabelFirstBaseline;
-(double)marginBelowMessageLabelLastBaseline;
-(id)_detailMessageFont;
-(double)actionWidthForMinimumActionWidth:(double)arg1 ;
-(double)backgroundCornerRadius;
-(CGSize)collectionViewOutsetSize;
-(double)_scaledMarginAboveTitleLabelFirstBaseline;
-(double)_scaledMarginBelowTitleLabelLastBaseline;
-(double)_scaledMarginAboveMessageLabelFirstBaseline;
-(double)_scaledMarginBelowMessageLabelLastBaseline;
-(double)_scaledMarginBelowLastLabelLastBaseline;
-(UIAlertControllerDescriptor *)descriptor;
@end

