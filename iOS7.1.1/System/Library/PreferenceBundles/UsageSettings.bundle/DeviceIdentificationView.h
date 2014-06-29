/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UsageSettings/UsageSettings-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage;

@interface DeviceIdentificationView : UIView {

	UIImageView* _deviceImageView;
	UILabel* _deviceNameLabel;
	UILabel* _deviceModelLabel;

}

@property (assign,nonatomic,@dynamic) UIImage * deviceImage; 
+(void)initialize;
-(id)deviceImage;
-(void)setDeviceImage:(id)arg1 ;
-(void)loadImageForDeviceIdentifier:(id)arg1 URL:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 deviceName:(id)arg2 deviceIdentifier:(id)arg3 imageURL:(id)arg4 isCurrentDevice:(bool)arg5 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)sizeToFit;
@end
