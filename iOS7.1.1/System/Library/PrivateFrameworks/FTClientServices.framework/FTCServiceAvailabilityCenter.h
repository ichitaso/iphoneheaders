/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(bool)removeListenerID:(id)arg1 forService:(long long)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(long long)arg2 ;
-(bool)addListenerID:(id)arg1 forService:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(bool)hasListenerID:(id)arg1 forService:(long long)arg2 ;
-(void)_postNotificationForService:(long long)arg1 availability:(long long)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(bool)_isValidServiceType:(long long)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(long long)arg1 create:(bool)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
@end

