/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface CompassRotatingView : UIView {

	double _compassHeading;
	double _angle;

}

@property (assign,nonatomic) double compassHeading;              //@synthesize compassHeading=_compassHeading - In the implementation block
@property (nonatomic,readonly) double angle;                     //@synthesize angle=_angle - In the implementation block
-(double)angle;
-(double)compassHeading;
-(void)setCompassHeading:(double)arg1 ;
@end

