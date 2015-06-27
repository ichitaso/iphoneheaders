/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/DeviceOMatic.app/DeviceOMatic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <DeviceOMatic/DeviceOMatic-Structs.h>
@class NSDictionary, NSString, DOMPersonality, NSNumber, NSObject;

@interface DOMDevice : NSObject {

	char _isHub;
	char _isAttachedToHub;
	char _powerHog;
	NSDictionary* _properties;
	NSString* _name;
	unsigned _io_service;
	DOMPersonality* _winningDomPersonality;
	NSNumber* _winningScore;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _io_notification;
	NSString* _dialogBodyKey;
	unsigned long long _IORegEntryID;
	unsigned long long _winningIORegEntryID;

}

@property (readonly) char isHub;                                                  //@synthesize isHub=_isHub - In the implementation block
@property (readonly) char isAttachedToHub;                                        //@synthesize isAttachedToHub=_isAttachedToHub - In the implementation block
@property (readonly) char powerHog;                                               //@synthesize powerHog=_powerHog - In the implementation block
@property (assign) unsigned io_service;                                           //@synthesize io_service=_io_service - In the implementation block
@property (assign) unsigned long long IORegEntryID;                               //@synthesize IORegEntryID=_IORegEntryID - In the implementation block
@property (nonatomic,retain) DOMPersonality * winningDomPersonality;              //@synthesize winningDomPersonality=_winningDomPersonality - In the implementation block
@property (assign) unsigned long long winningIORegEntryID;                        //@synthesize winningIORegEntryID=_winningIORegEntryID - In the implementation block
@property (nonatomic,retain) NSNumber * winningScore;                             //@synthesize winningScore=_winningScore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (assign) unsigned io_notification;                                      //@synthesize io_notification=_io_notification - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                           //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * dialogBodyKey;                            //@synthesize dialogBodyKey=_dialogBodyKey - In the implementation block
-(NSString *)dialogBodyKey;
-(DOMPersonality *)winningDomPersonality;
-(NSNumber *)winningScore;
-(void)setDialogBodyKey:(NSString *)arg1 ;
-(id)initWithIOService:(unsigned)arg1 notificationPort:(IONotificationPortRef)arg2 ;
-(char)powerHog;
-(char)shouldMatchDevice;
-(void)updateDeviceProperties;
-(unsigned long long)IORegEntryID;
-(char)compositeDeviceIsConfigured;
-(void)setWinningScore:(NSNumber *)arg1 ;
-(void)setWinningDomPersonality:(DOMPersonality *)arg1 ;
-(void)setWinningIORegEntryID:(unsigned long long)arg1 ;
-(char)isHub;
-(char)isAttachedToHub;
-(char)isCompositeDevice;
-(void)handleIONotification:(unsigned)arg1 arg:(void*)arg2 ;
-(void)evaluateScore:(id)arg1 fromDomPersonality:(id)arg2 withIORegEntryID:(unsigned long long)arg3 ;
-(void)setIORegEntryID:(unsigned long long)arg1 ;
-(void)setIo_service:(unsigned)arg1 ;
-(unsigned long long)winningIORegEntryID;
-(unsigned)io_notification;
-(void)setIo_notification:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)properties;
-(void)setProperties:(NSDictionary *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned)io_service;
@end
