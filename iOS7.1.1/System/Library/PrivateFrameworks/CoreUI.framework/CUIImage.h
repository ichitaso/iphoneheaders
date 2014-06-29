/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface CUIImage : NSObject <NSCopying> {

	CGImageRef _cgImage;

}

@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
+(id)imageWithCGImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)image;
-(CGImageRef)cgImage;
@end
