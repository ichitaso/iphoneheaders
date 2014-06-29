/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/distnoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <distnoted/_NSDNXPCObject.h>

@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSString, NSMutableArray;

@interface _NSDNXPCServer : NSObject <_NSDNXPCObject> {

	NSObject<OS_xpc_object>* _conn;
	int _lock;
	NSObject<OS_dispatch_queue>* _dq;
	NSString* _serviceName;
	/*^block*/ id _makeNewClient;
	NSMutableArray* _clients;
	NSMutableArray* _invalidHandlers;
	int _started;
	int _invalid;
	BOOL _priv;

}

@property (@dynamic,copy) NSString * serviceName; 
@property (@dynamic,copy) id makeNewClient; 
-(void)__invalidate;
-(void)addInvalidationHandler:(/*^block*/ id)arg1 ;
-(/*^block*/ id)makeNewClient;
-(void)setMakeNewClient:(/*^block*/ id)arg1 ;
-(void)setPrivileged:(BOOL)arg1 ;
-(id)dispatchQueue;
-(id)serviceName;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)start;
-(id)allClients;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setServiceName:(id)arg1 ;
@end
