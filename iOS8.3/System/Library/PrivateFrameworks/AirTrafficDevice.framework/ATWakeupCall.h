/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:36:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTrafficDevice/NSNetServiceBrowserDelegate.h>
#import <AirTrafficDevice/NSNetServiceDelegate.h>

@class NSMutableArray, NSNetServiceBrowser, NSThread, NSString;

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {

	NSMutableArray* _hostLibraryIdentifiers;
	NSMutableArray* _resolvingHosts;
	NSMutableArray* _resolvedLibraryIdentifiers;
	NSMutableArray* _resolvedLibraryServices;
	/*^block*/id _completion;
	NSNetServiceBrowser* _browser;
	NSThread* _wakeThread;
	char _searching;
	int _resolving;
	unsigned _hostsToResolve;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)sendWakeupCall:(id)arg1 ;
+(void)sendWakeupCallToAllSyncHosts;
+(id)wakeableHostsWithCompletion:(/*^block*/id)arg1 ;
-(void)netServiceDidResolveAddress:(id)arg1 ;
-(void)netService:(id)arg1 didNotResolve:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(char)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(char)arg3 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)wake;
@end
