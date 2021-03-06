/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBSlideToUnlockFailureRecognizerSettings : _UISettings {

	BOOL _enabled;
	BOOL _viewDebugArea;
	unsigned _maxAllowableVerticalOffset;
	float _topAngle;
	float _bottomAngle;

}

@property (assign,nonatomic) BOOL enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL viewDebugArea;                               //@synthesize viewDebugArea=_viewDebugArea - In the implementation block
@property (assign,nonatomic) unsigned maxAllowableVerticalOffset;              //@synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset - In the implementation block
@property (assign,nonatomic) float topAngle;                                   //@synthesize topAngle=_topAngle - In the implementation block
@property (assign,nonatomic) float bottomAngle;                                //@synthesize bottomAngle=_bottomAngle - In the implementation block
+(id)settingsControllerModule;
-(void)setViewDebugArea:(BOOL)arg1 ;
-(void)setMaxAllowableVerticalOffset:(unsigned)arg1 ;
-(void)setTopAngle:(float)arg1 ;
-(void)setBottomAngle:(float)arg1 ;
-(BOOL)viewDebugArea;
-(unsigned)maxAllowableVerticalOffset;
-(float)topAngle;
-(float)bottomAngle;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDefaultValues;
-(BOOL)enabled;
@end

