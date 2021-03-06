/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMFocusView.h>

@class CAKeyframeAnimation;

@interface CAMFocusLockView : CAMFocusView {

	CAKeyframeAnimation* _lockBoundsAnimation;

}
-(double)fadeInDuration;
-(void)startAnimatingContents:(BOOL)arg1 bounds:(BOOL)arg2 fadeIn:(BOOL)arg3 ;
-(id)_createBoundsAnimation;
-(id)_createLockBoundsAnimation;
-(void)animateLock;
-(void)animateScaleDownWithCompletion:(/*^block*/id)arg1 ;
@end

