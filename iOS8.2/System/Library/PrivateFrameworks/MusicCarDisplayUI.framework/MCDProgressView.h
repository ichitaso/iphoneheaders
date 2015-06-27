/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface MCDProgressView : UIView {

	char _progressActive;
	UILabel* _timeLabel;
	UILabel* _timeRemainingLabel;
	UIView* _progressView;
	UIView* _trackView;
	UIView* _indicatorView;
	float _progress;
	char _isLive;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPlaybackTime:(double)arg1 duration:(double)arg2 ;
@end
