/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImage;

@interface PLCameraFlashLabelView : UIView {

	NSString* _text;
	UIImage* _image;
	bool _labelIsVisible;
	CGImageRef _labelVisibleContents;
	CGImageRef _labelHiddenContents;
	CGSize _contentsSize;
	double backgroundAlpha;

}

@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) bool labelIsVisible; 
@property (assign,nonatomic) CGSize contentsSize; 
@property (assign,nonatomic) double backgroundAlpha; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)image;
-(bool)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)sizeToFit;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)updateLabelContents;
-(void)_reloadLabelContents;
-(double)backgroundAlpha;
-(CGImageRef)_newLabelImage:(bool)arg1 ;
-(void)setLabelIsVisible:(bool)arg1 ;
-(bool)labelIsVisible;
-(void)setContentsSize:(CGSize)arg1 ;
-(CGSize)contentsSize;
@end
