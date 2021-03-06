/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.vimeo.xpc/com.apple.vimeo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <com.apple.vimeo/com.apple.vimeo-Structs.h>
#import <VUSocialUpload/VURemoteSession.h>
#import <com.apple.vimeo/VimeoRemoteSessionProtocol.h>
#import <com.apple.vimeo/VimeoPostDelegate.h>

@class NSString;

@interface VimeoRemoteSession : VURemoteSession <VimeoRemoteSessionProtocol, VimeoPostDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertWithDictionary:(CFDictionaryRef)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)uploadPost:(id)arg1 withXPCTransferCompletion:(/*^block*/id)arg2 ;
-(id)account;
-(void)vimeoPost:(id)arg1 uploadProgressDidChange:(float)arg2 ;
-(void)vimeoPostUploadSucceeded:(id)arg1 ;
-(void)vimeoPost:(id)arg1 warningDuringUpload:(long long)arg2 ;
-(void)vimeoPost:(id)arg1 uploadFailedWithError:(id)arg2 ;
@end

