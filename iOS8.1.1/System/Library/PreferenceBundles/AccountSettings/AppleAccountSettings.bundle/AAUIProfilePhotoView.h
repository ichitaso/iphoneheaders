/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UIButton, UIImage;

@interface AAUIProfilePhotoView : UIView {

	UIImageView* _photoView;
	UIButton* _editButton;
	BOOL _isEditing;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,setter=setEditing:,nonatomic) BOOL isEditing;              //@synthesize isEditing=_isEditing - In the implementation block
-(id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(UIImage *)photo;
-(void)layoutSubviews;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setPhoto:(UIImage *)arg1 ;
@end
