/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:01:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface PLContactPhotoOverlay : UIView {

	UILabel* _titleLabel;
	UIImageView* __avatarPreview;

}

@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets overlayEdgeInsets; 
@property (nonatomic,readonly) UIImageView * _avatarPreview;                //@synthesize _avatarPreview=__avatarPreview - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UIEdgeInsets)overlayEdgeInsets;
-(CGRect)inscribingBounds;
-(void)_commonPLContactPhotoOverlayInitialization;
-(void)beginAvatarTrackingFromImageView:(id)arg1 ;
-(void)endAvatarTracking;
-(UIImageView *)_avatarPreview;
@end

