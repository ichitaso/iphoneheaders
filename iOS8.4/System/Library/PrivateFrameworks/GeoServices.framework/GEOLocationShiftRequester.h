/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOLocationShiftRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;
	NSMapTable* _providers;

}
+(id)sharedRequester;
-(void)dealloc;
-(id)init;
-(void)registerProvider:(Class)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 finished:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(Class)classForProviderID:(short)arg1 ;
@end
