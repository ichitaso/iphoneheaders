/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:09:36 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/XPCServices/IMDMessageServicesAgent.xpc/IMDMessageServicesAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <IMDMessageServicesAgent/IMDMessageServicesAgent-Structs.h>
@class NSString, NSDate, NSArray, NSDictionary;

@interface IMDMSAMessage : NSObject {

	long long _rowID;
	NSString* _GUID;
	NSString* _subject;
	NSString* _service;
	NSString* _senderLogin;
	NSDate* _date;
	NSDate* _dateDelivered;
	unsigned long long _flags;
	unsigned _error;
	NSString* _chatGUID;
	NSArray* _participants;
	NSDictionary* _chatProperties;
	NSDictionary* _attachments;

}

@property (nonatomic,readonly) long long rowID;                            //@synthesize rowID=_rowID - In the implementation block
@property (getter=UID,nonatomic,readonly) NSString * GUID;                 //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * senderLogin;                     //@synthesize senderLogin=_senderLogin - In the implementation block
@property (nonatomic,readonly) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSDate * dateDelivered;                     //@synthesize dateDelivered=_dateDelivered - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned error;                             //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * chatGUID;                        //@synthesize chatGUID=_chatGUID - In the implementation block
@property (nonatomic,readonly) NSArray * participants;                     //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) NSDictionary * chatProperties;              //@synthesize chatProperties=_chatProperties - In the implementation block
@property (nonatomic,readonly) NSDictionary * attachments;                 //@synthesize attachments=_attachments - In the implementation block
-(id)initWithMessage:(IMDMessageRecordStructRef)arg1 inChat:(IMDChatRecordStructRef)arg2 ;
-(double)timeSinceSent;
-(id)dateDelivered;
-(id)senderLogin;
-(id)service;
-(long long)rowID;
-(id)participants;
-(void)dealloc;
-(id)date;
-(id)subject;
-(id)chatGUID;
-(unsigned long long)flags;
-(id)chatProperties;
-(id)attachments;
-(id)GUID;
-(unsigned)error;
@end
