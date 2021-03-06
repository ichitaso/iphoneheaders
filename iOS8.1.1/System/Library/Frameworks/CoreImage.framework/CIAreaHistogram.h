/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIContext;

@interface CIAreaHistogram : CIFilter {

	CIImage* inputImage;
	CIVector* inputExtent;
	NSNumber* inputScale;
	NSNumber* inputCount;
	CIContext* _context;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputCount; 
+(id)customAttributes;
-(void)setInputCount:(NSNumber *)arg1 ;
-(void)setInputExtent:(CIVector *)arg1 ;
-(id)_outputData:(BOOL)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(CIImage *)inputImage;
-(void)setDefaults;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)outputData;
-(NSNumber *)inputCount;
-(id)outputImage;
@end

