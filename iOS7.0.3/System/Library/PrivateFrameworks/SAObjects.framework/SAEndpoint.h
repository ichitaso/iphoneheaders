/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * operations; 
@property (nonatomic,copy) NSString * providerId; 
@property (assign,nonatomic) BOOL supportsAuthentication; 
+(id)endpoint;
+(id)endpointWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setOperations:(id)arg1 ;
-(id)operations;
-(void)setSupportsAuthentication:(BOOL)arg1 ;
-(BOOL)supportsAuthentication;
-(void)setProviderId:(id)arg1 ;
-(id)providerId;
-(id)encodedClassName;
@end

