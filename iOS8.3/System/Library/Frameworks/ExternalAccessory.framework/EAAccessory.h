/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:48:52 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EAAccessoryInternal, NSString, NSArray;

@interface EAAccessory : NSObject {

	EAAccessoryInternal* _internal;

}

@property (getter=isConnected,nonatomic,readonly) char connected; 
@property (nonatomic,readonly) unsigned connectionID; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * modelNumber; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * firmwareRevision; 
@property (nonatomic,readonly) NSString * hardwareRevision; 
@property (nonatomic,readonly) NSArray * protocolStrings; 
@property (assign,nonatomic) id<EAAccessoryDelegate> delegate; 
-(id)_initWithAccessory:(id)arg1 ;
-(unsigned)_internalConnectionID;
-(void)_setConnected:(char)arg1 ;
-(void)_setNotPresentInIAPAccessoriesArray:(char)arg1 ;
-(char)_internalNotPresentInIAPAccessoriesArray;
-(void)_updateAccessoryInfo:(id)arg1 ;
-(void)_openCompleteForSession:(unsigned)arg1 ;
-(void)_endSession:(unsigned)arg1 ;
-(void)setEqNames:(id)arg1 ;
-(void)setEqIndex:(unsigned)arg1 ;
-(void)setLocationSentenceTypesMask:(int)arg1 ;
-(void)setVehicleInfoSupportedTypes:(id)arg1 ;
-(id)_protocolIDForProtocolString:(id)arg1 ;
-(void)_addSession:(id)arg1 ;
-(void)_removeSession:(id)arg1 ;
-(NSString *)firmwareRevision;
-(NSString *)hardwareRevision;
-(NSArray *)protocolStrings;
-(id)_createWakeToken;
-(id)allPublicProtocolStrings;
-(id)preferredApp;
-(int)classType;
-(id)audioPorts;
-(id)eqNames;
-(unsigned)eqIndex;
-(char)pointOfInterestHandoffEnabled;
-(unsigned)pointOfInterestDataFormatMaximumSupportedVersion;
-(int)locationSentenceTypesMask;
-(id)vehicleInfoSupportedTypes;
-(id)vehicleInfoInitialData;
-(id)wakeToken;
-(id)bonjourName;
-(char)hasIPConnection;
-(char)isAvailableOverBonjour;
-(char)supportsCarPlay;
-(unsigned)accessoryCapabilities;
-(char)supportsPublicIap;
-(char)shouldBeHiddenFromUI;
-(char)supportsLocation;
-(char)accessoryHasNMEASentencesAvailable;
-(char)getNMEASentence:(id*)arg1 ;
-(char)setNMEASentencesToFilter:(id)arg1 ;
-(void)setIAPTimeSyncParams:(id)arg1 ;
-(void)getIAPTimeSyncInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetIAPTimeSyncKalmanFilter;
-(char)getEphemerisURL:(id*)arg1 ;
-(char)getEphemerisRecommendRefreshInterval:(double*)arg1 ;
-(char)getEphemerisExpirationInterval:(double*)arg1 ;
-(char)sendGpsWeek:(unsigned)arg1 gpsTOW:(double)arg2 ;
-(char)sendEphemerisPointDataGpsWeek:(unsigned)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5 ;
-(char)sendEphemeris:(id)arg1 ;
-(char)sendPointOfInterestInformation:(id)arg1 identifier:(unsigned short)arg2 ;
-(void)setVehicleInfovehicleInfoInitialData:(id)arg1 ;
-(id)getVehicleInfoData;
-(char)supportsAccessibility;
-(void)updateSystemProperty:(int)arg1 withValue:(id)arg2 ;
-(void)updateItemProperty:(int)arg1 withValue:(id)arg2 ;
-(char)supportsPointOfInterest;
-(void)dealloc;
-(void)setDelegate:(id<EAAccessoryDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<EAAccessoryDelegate>)delegate;
-(NSString *)name;
-(NSString *)modelNumber;
-(unsigned)connectionID;
-(NSString *)manufacturer;
-(NSString *)serialNumber;
-(id)_shortDescription;
-(id)macAddress;
-(char)isConnected;
@end
