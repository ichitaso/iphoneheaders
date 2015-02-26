/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface UIKeyboardCandidateGridSecondaryCandidatesLayout : UICollectionViewFlowLayout {

	int _candidatesVisualStyle;
	SCD_Struct_UI32 _visualStyling;

}

@property (assign,nonatomic) SCD_Struct_UI32 visualStyling;              //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                  //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
+(Class)layoutAttributesClass;
-(void)setVisualStyling:(SCD_Struct_UI32)arg1 ;
-(SCD_Struct_UI32)visualStyling;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)updateAttributes:(id)arg1 ;
@end
