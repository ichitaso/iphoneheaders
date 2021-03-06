/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class NSString, DeviceManager;

@interface ICDevice : NSObject {

	void* _deviceProperties;

}

@property (assign) id<ICDeviceDelegate> delegate; 
@property (copy) NSString * name; 
@property (copy) NSString * productKind; 
@property (readonly) CGImageRef icon; 
@property (copy) NSString * transportType; 
@property (copy) NSString * UUIDString; 
@property (assign) BOOL hasOpenSession; 
@property (assign) int usbLocationID; 
@property (assign) int usbProductID; 
@property (assign) int usbVendorID; 
@property (assign) DeviceManager * deviceManager; 
@property (assign) BOOL autoOpenSession; 
@property (assign) BOOL openSessionPending; 
@property (assign) BOOL closeSessionPending; 
-(BOOL)isCameraDevice;
-(CGImageRef)icon;
-(void)dealloc;
-(void)setDelegate:(id<ICDeviceDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<ICDeviceDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)UUIDString;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setTransportType:(NSString *)arg1 ;
-(void)setProductKind:(NSString *)arg1 ;
-(void)setUUIDString:(NSString *)arg1 ;
-(DeviceManager *)deviceManager;
-(void)setDeviceManager:(DeviceManager *)arg1 ;
-(int)usbLocationID;
-(void)setUsbLocationID:(int)arg1 ;
-(int)usbProductID;
-(void)setUsbProductID:(int)arg1 ;
-(void)setUsbVendorID:(int)arg1 ;
-(BOOL)hasOpenSession;
-(void)setHasOpenSession:(BOOL)arg1 ;
-(BOOL)autoOpenSession;
-(void)setAutoOpenSession:(BOOL)arg1 ;
-(BOOL)openSessionPending;
-(void)setOpenSessionPending:(BOOL)arg1 ;
-(BOOL)closeSessionPending;
-(void)setCloseSessionPending:(BOOL)arg1 ;
-(void)requestCloseSession;
-(void)handleCommandCompletionNotification:(id)arg1 ;
-(void)handleImageCaptureEventNotification:(id)arg1 ;
-(int)usbVendorID;
-(NSString *)productKind;
-(void)requestOpenSession;
-(NSString *)transportType;
-(void)finalize;
@end

