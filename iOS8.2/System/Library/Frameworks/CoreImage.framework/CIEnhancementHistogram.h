/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CIEnhancementHistogram : NSObject {

	float hist[256];

}
+(id)histogramFromData:(const float*)arg1 ;
+(id)histogramFromFloatData:(const float*)arg1 ;
+(id)histogramFromDoubleData:(const double*)arg1 ;
-(const float*)values;
@end

