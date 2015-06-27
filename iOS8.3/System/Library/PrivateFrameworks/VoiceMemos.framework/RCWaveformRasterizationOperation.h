/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:06:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <Foundation/NSOperation.h>

@class RCGLWaveformRenderer, RCCompositionWaveformDataSource, RCComposition, UIImage, RCUIConfiguration;

@interface RCWaveformRasterizationOperation : NSOperation {

	RCGLWaveformRenderer* _renderer;
	RCCompositionWaveformDataSource* _dataSource;
	char _loadingSuccessful;
	RCComposition* _composition;
	UIImage* _rasterizedImage;
	CGSize _imageSize;

}

@property (nonatomic,readonly) RCComposition * composition;                  //@synthesize composition=_composition - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                             //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,copy) RCUIConfiguration * UIConfiguration; 
@property (nonatomic,readonly) UIImage * rasterizedImage;                    //@synthesize rasterizedImage=_rasterizedImage - In the implementation block
+(id)waveformImageForComposition:(id)arg1 imageSize:(CGSize)arg2 ;
-(RCComposition *)composition;
-(CGSize)imageSize;
-(void)main;
-(void)setUIConfiguration:(RCUIConfiguration *)arg1 ;
-(RCUIConfiguration *)UIConfiguration;
-(id)initWithComposition:(id)arg1 imageSize:(CGSize)arg2 ;
-(UIImage *)rasterizedImage;
@end
