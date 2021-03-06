/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIView.h>

@interface _GKCustomDrawnSpeechBalloonBackgroundView : UIView {

	unsigned char _drawStyle;
	unsigned char _tipDirection;

}

@property (assign,nonatomic) unsigned char drawStyle;                 //@synthesize drawStyle=_drawStyle - In the implementation block
@property (assign,nonatomic) unsigned char tipDirection;              //@synthesize tipDirection=_tipDirection - In the implementation block
-(unsigned char)tipDirection;
-(unsigned char)drawStyle;
-(void)setDrawStyle:(unsigned char)arg1 ;
-(void)setTipDirection:(unsigned char)arg1 ;
-(unsigned char)_tipDirectionForCurrentUILayoutDirection;
-(id)speechBalloonMaskForRect:(CGRect)arg1 ;
-(CGGradientRef)_gradientForColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)tintColorDidChange;
@end

