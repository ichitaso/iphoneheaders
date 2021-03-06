/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/NSSecureCoding.h>

@class NSString, NSNumber;

@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _password;
	NSNumber* _channel;

}

@property (copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (copy) NSString * password;               //@synthesize password=_password - In the implementation block
@property (retain) NSNumber * channel;              //@synthesize channel=_channel - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setChannel:(NSNumber *)arg1 ;
-(NSNumber *)channel;
-(id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3 ;
@end

