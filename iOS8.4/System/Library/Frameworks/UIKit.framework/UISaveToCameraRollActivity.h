/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@interface UISaveToCameraRollActivity : UIActivity {

	long long _imageCount;
	long long _videoCount;

}

@property (assign,nonatomic) long long imageCount;              //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) long long videoCount;              //@synthesize videoCount=_videoCount - In the implementation block
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(long long)imageCount;
-(void)setImageCount:(long long)arg1 ;
-(long long)videoCount;
-(void)setVideoCount:(long long)arg1 ;
@end

