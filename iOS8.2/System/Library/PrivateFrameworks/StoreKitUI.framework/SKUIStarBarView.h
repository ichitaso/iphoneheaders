/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface SKUIStarBarView : UIView {

	UIImage* _emptyStarImage;
	UIImage* _fullStarImage;
	int _numberOfStars;
	float _value;

}

@property (assign,nonatomic) int numberOfStars;              //@synthesize numberOfStars=_numberOfStars - In the implementation block
@property (assign,nonatomic) float value;                    //@synthesize value=_value - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setValue:(float)arg1 ;
-(float)value;
-(void)setNumberOfStars:(int)arg1 ;
-(int)numberOfStars;
@end
