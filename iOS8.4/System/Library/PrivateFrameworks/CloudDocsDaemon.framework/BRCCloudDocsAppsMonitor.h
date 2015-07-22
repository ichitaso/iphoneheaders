/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCAppListMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSMutableSet, NSObject, NSString;

@interface BRCCloudDocsAppsMonitor : NSObject <BRCAppListMonitorDelegate> {

	NSDictionary* _cloudDocsContainersByAppID;
	NSDictionary* _appIDsByContainerID;
	NSMutableSet* _observers;
	br_pacer_tRef _refetchPacer;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudDocsAppsMonitor;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_start;
-(void)addObserver:(id)arg1 ;
-(id)allApplicationIdentifiers;
-(void)forceRefetchAppList;
-(id)containerIDsForApplicationIdentifier:(id)arg1 ;
-(id)applicationIdentifiersForContainerID:(id)arg1 ;
-(void)_refetchApps;
-(BOOL)isApplicationInstalledForContainerID:(id)arg1 ;
@end
