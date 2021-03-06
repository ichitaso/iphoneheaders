/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:27 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOHorizontalCelestialBodyData : NSObject {

	double _altitude;
	double _azimuth;

}

@property (nonatomic,readonly) double altitude;              //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double azimuth;               //@synthesize azimuth=_azimuth - In the implementation block
-(void)_calcuateAzimuthandAltitudeForCoordiante:(SCD_Struct_GE15)arg1 julianDay:(double)arg2 eclipticLongitude:(double)arg3 eclipticLatitude:(double)arg4 radius:(double)arg5 ;
-(id)initWithLocation:(SCD_Struct_GE15)arg1 date:(id)arg2 body:(int)arg3 ;
-(double)altitude;
-(double)azimuth;
@end

