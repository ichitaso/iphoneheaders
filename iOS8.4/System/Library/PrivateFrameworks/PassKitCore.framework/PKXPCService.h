/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSXPCInterface, PKWeakReference, NSLock, NSXPCConnection, PKXPCForwarder;

@interface PKXPCService : NSObject {

	NSString* _machServiceName;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCInterface* _exportedObjectInterface;
	PKWeakReference* _exportedObject;
	PKWeakReference* _delegate;
	NSString* _className;
	NSLock* _connectionLock;
	NSXPCConnection* _connection;
	PKXPCForwarder* _exportedProxy;
	BOOL _suspendCallbacks;

}

@property (assign,nonatomic) id<PKXPCServiceDelegate> delegate; 
+(void)setCallbacksSuspendedEvaluator:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKXPCServiceDelegate>)arg1 ;
-(id)init;
-(id<PKXPCServiceDelegate>)delegate;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)_connection;
-(id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 ;
-(id)remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithSemaphore:(id)arg1 ;
-(/*^block*/id)_errorHandlerWithSemaphore:(id)arg1 ;
-(void)_registerForApplicationLifeCycleNotifications;
-(void)_registerForServiceListenerResumedNotifications;
-(void)_establishServiceConnection;
-(void)_unregisterForServiceListenerResumedNotifications;
-(void)_unregisterForApplicationLifeCycleNotifications;
-(void)_invalidateConnectionIfPossible;
-(/*^block*/id)_wrappedErrorHandlerForHandler:(/*^block*/id)arg1 ;
-(id)existingRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_sendResumed;
-(void)_createConnectionIfPossible;
-(void)_sendSuspended;
-(id)existingRemoteObjectProxy;
@end

