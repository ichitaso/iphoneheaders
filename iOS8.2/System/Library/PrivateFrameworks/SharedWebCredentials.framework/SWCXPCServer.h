/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SWCXPCServer <NSObject>
@required
-(void)checkService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4;
-(void)getInfoForService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4;
-(void)removeService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4;
-(void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 mask:(unsigned)arg4 flags:(unsigned)arg5 reply:(/*^block*/id)arg6;
-(void)addAllAppsWithReply:(/*^block*/id)arg1;
-(void)logControl:(id)arg1 reply:(/*^block*/id)arg2;
-(void)show:(id)arg1 reply:(/*^block*/id)arg2;

@end
