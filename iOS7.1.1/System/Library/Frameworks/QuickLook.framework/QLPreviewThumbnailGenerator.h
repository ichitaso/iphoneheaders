/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewItem;
#import <QuickLook/QuickLook-Structs.h>
@class UIImage, NSString;

@interface QLPreviewThumbnailGenerator : NSObject {

	<QLPreviewItem>* _item;
	CGSize _size;
	double _scale;
	UIImage* _thumbnailImage;
	NSString* _contentType;
	int _status;

}

@property (readonly) UIImage * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
+(bool)canGenerateThumbnailForPreviewItem:(id)arg1 ;
+(id)generatorForPreviewItem:(id)arg1 size:(CGSize)arg2 ;
-(id)_thumbnailForImage;
-(id)_thumbnailForPDF;
-(id)_thumbnailForMovie;
-(CGSize)_pixelSize;
-(CGContextRef)_beginContext;
-(id)_endContextWithContentFrame:(CGRect)arg1 ;
-(void)generateWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(id)thumbnailImage;
@end
