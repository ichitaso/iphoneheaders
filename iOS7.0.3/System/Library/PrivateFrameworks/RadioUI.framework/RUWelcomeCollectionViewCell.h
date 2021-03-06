/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <RadioUI/MPUStackViewDataSource.h>

@class MPUStackView, UIImage, UIView;

@interface RUWelcomeCollectionViewCell : UICollectionViewCell <MPUStackViewDataSource> {

	MPUStackView* _stackView;
	UIImage* _artworkImage;
	CGSize _artworkSize;

}

@property (nonatomic,retain) UIImage * artworkImage;                      //@synthesize artworkImage=_artworkImage - In the implementation block
@property (assign,nonatomic) CGSize artworkSize;                          //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,retain) UIView * perspectiveTargetView; 
@property (assign,nonatomic) CGPoint vanishingPoint; 
+(CGSize)artworkSizeForOrientation:(int)arg1 ;
-(id)artworkImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setArtworkImage:(id)arg1 ;
-(void)stackView:(id)arg1 applyAttributesToItem:(id)arg2 atIndex:(int)arg3 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(int)numberOfItemsInStackView:(id)arg1 ;
-(void)stackView:(id)arg1 didCreateItem:(id)arg2 ;
-(id)perspectiveTargetView;
-(CGPoint)vanishingPoint;
-(void)setArtworkSize:(CGSize)arg1 ;
-(void).cxx_destruct;
-(CGSize)artworkSize;
@end

