/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM7 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM7 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM7 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM10 magneticField; 
-(SCD_Struct_CM10)magneticField;
-(id)initWithDeviceMotion:(SCD_Struct_CM9)arg1 andTimestamp:(double)arg2 ;
-(int)magneticFieldCalibrationLevel;
-(bool)doingYawCorrection;
-(bool)doingBiasEstimation;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(SCD_Struct_CM7)gravity;
-(id)attitude;
-(SCD_Struct_CM7)userAcceleration;
-(SCD_Struct_CM7)rotationRate;
@end

