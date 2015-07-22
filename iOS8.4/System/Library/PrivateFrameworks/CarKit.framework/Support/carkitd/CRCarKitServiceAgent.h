/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <carkitd/CRVehicleAccessoryManagerDelegate.h>
#import <carkitd/CRCarPlayPreferencesDelegate.h>
#import <carkitd/NSXPCListenerDelegate.h>
#import <carkitd/CRCarKitService.h>

@protocol OS_dispatch_source;
@class CRVehicleAccessoryManager, CRVehicleStore, CRCarPlayPreferences, CRBulletinDataProvider, CRBluetoothCarManager, CRWiFiCarManager, NSMutableArray, NSObject, NSString;

@interface CRCarKitServiceAgent : NSObject <CRVehicleAccessoryManagerDelegate, CRCarPlayPreferencesDelegate, NSXPCListenerDelegate, CRCarKitService> {

	CRVehicleAccessoryManager* _accessoryManager;
	CRVehicleStore* _vehicleStore;
	CRCarPlayPreferences* _preferencesManager;
	CRBulletinDataProvider* _bulletinProvider;
	CRBluetoothCarManager* _bluetoothManager;
	CRWiFiCarManager* _wifiManager;
	NSMutableArray* _outstandingVehicleApprovals;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,retain) CRVehicleAccessoryManager * accessoryManager;              //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (nonatomic,retain) CRVehicleStore * vehicleStore;                             //@synthesize vehicleStore=_vehicleStore - In the implementation block
@property (nonatomic,retain) CRCarPlayPreferences * preferencesManager;                 //@synthesize preferencesManager=_preferencesManager - In the implementation block
@property (nonatomic,retain) CRBulletinDataProvider * bulletinProvider;                 //@synthesize bulletinProvider=_bulletinProvider - In the implementation block
@property (nonatomic,retain) CRBluetoothCarManager * bluetoothManager;                  //@synthesize bluetoothManager=_bluetoothManager - In the implementation block
@property (nonatomic,retain) CRWiFiCarManager * wifiManager;                            //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * outstandingVehicleApprovals;              //@synthesize outstandingVehicleApprovals=_outstandingVehicleApprovals - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                       //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVehicleStore:(CRVehicleStore *)arg1 ;
-(void)setPreferencesManager:(CRCarPlayPreferences *)arg1 ;
-(CRCarPlayPreferences *)preferencesManager;
-(void)setBulletinProvider:(CRBulletinDataProvider *)arg1 ;
-(void)setBluetoothManager:(CRBluetoothCarManager *)arg1 ;
-(void)setOutstandingVehicleApprovals:(NSMutableArray *)arg1 ;
-(void)handleVehicleStoreAvailabiltyDidChange:(id)arg1 ;
-(CRBulletinDataProvider *)bulletinProvider;
-(CRVehicleStore *)vehicleStore;
-(BOOL)_isVehicleActionable:(id)arg1 ;
-(CRBluetoothCarManager *)bluetoothManager;
-(BOOL)_isRestricted:(id*)arg1 ;
-(BOOL)postInCarNotificationForVehicle:(id)arg1 ;
-(BOOL)postOutOfCarNotificationForVehicle:(id)arg1 ;
-(id)actionableVehiclesConnectedOnBluetooth;
-(void)handleCarPlayAttachedAccessories:(id)arg1 ;
-(void)updateVehiclesMatchingAccessories:(id)arg1 ;
-(void)_dismissApprovalAlertForVehicleAccessory:(id)arg1 ;
-(void)handleCarPlayAttached;
-(void)_dismissApprovalAlerts;
-(id)_certificateSerialNumbersWithKnownPairing;
-(id)_unknownPairingAccessoriesFromAccessories:(id)arg1 ;
-(void)_presentApprovalAlertForVehicleAccessory:(id)arg1 ;
-(void)updateVehicle:(id)arg1 usingAccessory:(id)arg2 ;
-(NSMutableArray *)outstandingVehicleApprovals;
-(void)dealloc;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(id)vehicleForBluetoothAddress:(id)arg1 ;
-(void)handleCarPlayAllowedDidChange;
-(void)accessoryManager:(id)arg1 didConnectVehicleAccessory:(id)arg2 ;
-(void)accessoryManager:(id)arg1 didDisconnectVehicleAccessory:(id)arg2 ;
-(void)accessoryManager:(id)arg1 didUpdateVehicleAccessory:(id)arg2 ;
-(void)setAccessoryManager:(CRVehicleAccessoryManager *)arg1 ;
-(CRVehicleAccessoryManager *)accessoryManager;
-(CRWiFiCarManager *)wifiManager;
-(void)setWifiManager:(CRWiFiCarManager *)arg1 ;
-(void)isPairedWithCertificateSerial:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)saveVehicle:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeVehicle:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchAllVehiclesWithReply:(/*^block*/id)arg1 ;
-(void)handleDidConnectBluetoothAddress:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)handleDidDisconnectBluetoothAddress:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)isBluetoothInCarWithReply:(/*^block*/id)arg1 ;
-(void)saveWiFiCredentialsForAccessoryConnectionIdentifier:(unsigned long long)arg1 credentials:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)allowsConnectionsForWiFiUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
