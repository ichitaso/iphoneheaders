/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:20:51 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>
#import <iAd/ADDimmerViewDelegate.h>

@class ADInterstitialAd, NSString;

@interface ADInterstitialView : UIView <ADDimmerViewDelegate> {

	ADInterstitialAd* _interstitialAd;
	CGRect _dismissButtonRect;

}

@property (assign,nonatomic) CGRect dismissButtonRect;                         //@synthesize dismissButtonRect=_dismissButtonRect - In the implementation block
@property (nonatomic,readonly) ADInterstitialAd * interstitialAd; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)requiresConstraintBasedLayout;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(CGPoint)arg2 ;
-(char)enableDimmerView:(id)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(void)setDismissButtonRect:(CGRect)arg1 ;
-(CGRect)dismissButtonRect;
@end
