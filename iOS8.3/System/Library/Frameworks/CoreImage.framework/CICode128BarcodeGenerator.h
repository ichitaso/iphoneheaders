/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:43:02 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CICode128BarcodeGenerator : CICodeGenerator {

	NSNumber* inputQuietSpace;

}

@property (nonatomic,copy) NSNumber * inputQuietSpace; 
+(id)customAttributes;
-(CGImageRef)outputCGImage;
-(NSNumber *)inputQuietSpace;
-(void)setInputQuietSpace:(NSNumber *)arg1 ;
@end

