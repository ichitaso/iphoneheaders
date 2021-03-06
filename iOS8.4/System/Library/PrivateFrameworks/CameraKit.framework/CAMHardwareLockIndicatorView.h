/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class NSDictionary;

@interface CAMHardwareLockIndicatorView : UIView {

	BOOL _focusLocked;
	BOOL _exposureLocked;
	NSDictionary* __indicatorTextAttributes;

}

@property (assign,getter=isFocusLocked,nonatomic) BOOL focusLocked;                    //@synthesize focusLocked=_focusLocked - In the implementation block
@property (assign,getter=isExposureLocked,nonatomic) BOOL exposureLocked;              //@synthesize exposureLocked=_exposureLocked - In the implementation block
@property (nonatomic,readonly) NSDictionary * _indicatorTextAttributes;                //@synthesize _indicatorTextAttributes=__indicatorTextAttributes - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateFromHardwareChange;
-(void)_commonCAMHardwareLockIndicatorViewInitialization;
-(id)_textForCurrentHardwareState;
-(NSDictionary *)_indicatorTextAttributes;
-(CGSize)_roundedSizeOfText:(id)arg1 withAttributes:(id)arg2 ;
-(void)setFocusLocked:(BOOL)arg1 ;
-(void)setExposureLocked:(BOOL)arg1 ;
-(BOOL)isFocusLocked;
-(BOOL)isExposureLocked;
@end

