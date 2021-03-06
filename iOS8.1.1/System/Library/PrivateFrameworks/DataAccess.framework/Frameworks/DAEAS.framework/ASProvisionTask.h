/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSDictionary, ASPolicy, NSString;

@interface ASProvisionTask : ASTask {

	int _type;
	NSDictionary* _deviceInfo;
	ASPolicy* _policy;
	NSString* _key;

}

@property (nonatomic,retain) NSDictionary * deviceInfo;              //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) ASPolicy * policy;                      //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
-(ASPolicy *)policy;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(void)setPolicy:(ASPolicy *)arg1 ;
-(id)initWithOriginalKeyForPolicyRequest:(id)arg1 ;
-(void)setDeviceInfo:(NSDictionary *)arg1 ;
-(id)initWithPolicyAcknowledgement:(id)arg1 withKey:(id)arg2 ;
-(id)initWithRemoteWipeAcknowledgement:(id)arg1 withKey:(id)arg2 ;
-(id)_initWithType:(int)arg1 policy:(id)arg2 key:(id)arg3 ;
-(id)_provisioningType;
-(id)_policyID;
-(BOOL)requiresEASVersionUpdate;
-(NSDictionary *)deviceInfo;
@end

