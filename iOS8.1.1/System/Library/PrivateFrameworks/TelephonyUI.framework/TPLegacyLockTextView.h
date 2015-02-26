/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSTimer, UIFont, UIImage;

@interface TPLegacyLockTextView : UIView {

	NSString* _label;
	CGImageRef _textCache;
	char* _textData;
	NSTimer* _maskTimer;
	double _maskStartTime;
	UIFont* _labelFont;
	double _deltaFromDefaultTrackWidth;
	UIImage* _maskImage;
	double _fps;

}

@property (readonly) double deltaFromDefaultTrackWidth;              //@synthesize deltaFromDefaultTrackWidth=_deltaFromDefaultTrackWidth - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)movedFromWindow:(id)arg1 ;
-(id)label;
-(void)stopAnimation;
-(BOOL)isAnimating;
-(void)startAnimation;
-(void)_cacheLabel:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithLabel:(id)arg1 fontSize:(double)arg2 trackWidthDelta:(double)arg3 ;
-(void)setFPS:(double)arg1 ;
-(double)fps;
-(double)deltaFromDefaultTrackWidth;
@end
