/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _MKWiFiObserverDelegate;
#import <MapKit/MapKit-Structs.h>
@interface _MKWiFiObserver : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	char _wifiEnabled;
	id<_MKWiFiObserverDelegate> _delegate;

}

@property (getter=isWifiEnabled,nonatomic,readonly) char wifiEnabled;                  //@synthesize wifiEnabled=_wifiEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<_MKWiFiObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)isWifiEnabled;
-(void)_updateWiFiState:(char)arg1 ;
-(void)setDelegate:(id<_MKWiFiObserverDelegate>)arg1 ;
-(id)init;
-(id<_MKWiFiObserverDelegate>)delegate;
@end
