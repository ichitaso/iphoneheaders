/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/iOS Diagnostics.app/iOS Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iOS Diagnostics/iOS Diagnostics-Structs.h>
@interface MBSReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityForLocalWiFi;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(void)dealloc;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(int)currentReachabilityStatus;
@end

