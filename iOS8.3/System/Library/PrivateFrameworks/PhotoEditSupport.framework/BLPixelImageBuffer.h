/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:59:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLImageBuffer.h>

@interface BLPixelImageBuffer : BLImageBuffer
+(id)bufferWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
+(id)bufferWithImage:(id)arg1 colorManagement:(int)arg2 ;
-(id)image;
-(void)accessPixelsByContextInBlock:(/*^block*/id)arg1 ;
-(void)accessPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
@end

