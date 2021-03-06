/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/CLLocationManagerDelegate.h>
#import <passd/NFCardEmulationDelegate.h>
#import <passd/PDDistributedNotificationConsumer.h>

@protocol OS_dispatch_source, PDContactlessInterfaceDelegate;
@class PDDistributedNotificationManager, PDDatabaseManager, NSMutableSet, CLGeocoder, CLLocationManager, NFCardEmulation, NSObject, PDSecureElement, NSDate, NSString;

@interface PDContactlessInterface : NSObject <CLLocationManagerDelegate, NFCardEmulationDelegate, PDDistributedNotificationConsumer> {

	PDDistributedNotificationManager* _notificationManager;
	PDDatabaseManager* _databaseManager;
	NSMutableSet* _transactionUpdateSets;
	CLGeocoder* _geocoder;
	CLLocationManager* _locationManager;
	NFCardEmulation* _cardEmulation;
	NSObject*<OS_dispatch_source> _locationUpdateTimeoutTimer;
	BOOL _cardEmulationStarted;
	BOOL _fieldDetectionStarted;
	BOOL _delayingExitForLocationUpdates;
	BOOL _isInField;
	PDSecureElement* _secureElement;
	id<PDContactlessInterfaceDelegate> _delegate;
	NSDate* _transactionStartDate;

}

@property (nonatomic,readonly) BOOL isDetectingField; 
@property (nonatomic,readonly) BOOL isInField;                                         //@synthesize isInField=_isInField - In the implementation block
@property (assign,nonatomic) PDSecureElement * secureElement;                          //@synthesize secureElement=_secureElement - In the implementation block
@property (assign,nonatomic) id<PDContactlessInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * transactionStartDate;                            //@synthesize transactionStartDate=_transactionStartDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNotificationManager:(id)arg1 databaseManager:(id)arg2 delegate:(id)arg3 ;
-(void)setSecureElement:(PDSecureElement *)arg1 ;
-(void)updateFieldDetectionState;
-(BOOL)isInField;
-(void)handleNotificationWithName:(id)arg1 ;
-(BOOL)pendingLocationLookupForTransaction:(id)arg1 ;
-(PDSecureElement *)secureElement;
-(void)preheatForTransactionEvent;
-(BOOL)_contactlessInterfaceAccessIsRestricted;
-(void)_startUpdatingLocationIfPossible;
-(void)_updateFieldDetectionForRestrictionChange;
-(void)setTransactionStartDate:(NSDate *)arg1 ;
-(void)_continueUpdatingLocationForTransactionUpdateSet:(id)arg1 ;
-(void)_updateLocation:(id)arg1 forTransaction:(id)arg2 paymentApplication:(id)arg3 passUniqueIdentifier:(id)arg4 ;
-(void)_stopUpdatingLocationIfPossible;
-(void)_abortUpdatingLocationForTransactionUpdateSet:(id)arg1 ;
-(void)_abortUpdatingLocationForAllTransactionUpdateSets;
-(void)_reverseGeocodeLocation:(id)arg1 forTransaction:(id)arg2 paymentApplication:(id)arg3 passUniqueIdentifier:(id)arg4 ;
-(BOOL)isDetectingField;
-(NSDate *)transactionStartDate;
-(void)dealloc;
-(void)setDelegate:(id<PDContactlessInterfaceDelegate>)arg1 ;
-(id)init;
-(id<PDContactlessInterfaceDelegate>)delegate;
-(void)_startCardEmulation;
-(void)_stopCardEmulation;
-(void)cardEmulation:(id)arg1 isSuspended:(BOOL)arg2 ;
-(void)fieldDetect:(id)arg1 isSuspended:(BOOL)arg2 ;
-(void)cardEmulation:(id)arg1 didDetectField:(BOOL)arg2 ;
-(void)cardEmulation:(id)arg1 didSelectCard:(id)arg2 ;
-(void)cardEmulation:(id)arg1 didStartTransaction:(id)arg2 ;
-(void)cardEmulation:(id)arg1 didEndTransaction:(id)arg2 ;
-(void)cardEmulation:(id)arg1 didExpireTransactionForCards:(id)arg2 ;
-(void)cardEmulation:(id)arg1 didChangeRestrictedMode:(BOOL)arg2 ;
-(void)startCardEmulation;
-(void)stopCardEmulation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)notificationNames;
@end

