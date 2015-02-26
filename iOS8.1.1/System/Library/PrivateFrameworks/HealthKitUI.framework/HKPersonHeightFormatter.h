/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLengthFormatter, NSNumber;

@interface HKPersonHeightFormatter : NSObject {

	NSLengthFormatter* _heightFormatter;
	NSNumber* _usesImperialUnits;

}
+(id)sharedFormatter;
-(void)dealloc;
-(id)init;
-(void)_getFeet:(double*)arg1 inches:(double*)arg2 fromCentimeters:(double)arg3 ;
-(id)_formattedValueForFeet:(double)arg1 ;
-(id)_formattedValueForInches:(double)arg1 ;
-(id)_formattedValueForCentimeters:(double)arg1 ;
-(double)_centimetersFromFeet:(double)arg1 inches:(double)arg2 ;
-(BOOL)_usesImperialUnits;
-(id)stringFromHeightInCentimeters:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
@end
