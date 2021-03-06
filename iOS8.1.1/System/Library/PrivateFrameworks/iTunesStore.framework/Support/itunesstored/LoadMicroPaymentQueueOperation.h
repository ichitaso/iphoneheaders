/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSDate, NSString, MicroPaymentQueueRequest, MicroPaymentQueueResponse;

@interface LoadMicroPaymentQueueOperation : ISOperation {

	long long _expectedCount;
	NSDate* _lastQueueCheckDate;
	NSString* _queueCountURLBagKey;
	NSString* _queuePaymentsURLBagKey;
	MicroPaymentQueueRequest* _request;
	MicroPaymentQueueResponse* _response;

}

@property (assign) long long expectedCount;                           //@synthesize expectedCount=_expectedCount - In the implementation block
@property (retain) NSDate * lastQueueCheckDate;                       //@synthesize lastQueueCheckDate=_lastQueueCheckDate - In the implementation block
@property (retain) NSString * queueCountURLBagKey;                    //@synthesize queueCountURLBagKey=_queueCountURLBagKey - In the implementation block
@property (retain) NSString * queuePaymentsURLBagKey;                 //@synthesize queuePaymentsURLBagKey=_queuePaymentsURLBagKey - In the implementation block
@property (copy) MicroPaymentQueueRequest * request;                  //@synthesize request=_request - In the implementation block
@property (retain) MicroPaymentQueueResponse * response;              //@synthesize response=_response - In the implementation block
-(NSString *)queueCountURLBagKey;
-(NSDate *)lastQueueCheckDate;
-(void)setLastQueueCheckDate:(NSDate *)arg1 ;
-(void)setQueueCountURLBagKey:(NSString *)arg1 ;
-(void)setQueuePaymentsURLBagKey:(NSString *)arg1 ;
-(long long)expectedCount;
-(void)setExpectedCount:(long long)arg1 ;
-(NSString *)queuePaymentsURLBagKey;
-(BOOL)_getQueueCount:(long long*)arg1 error:(id*)arg2 ;
-(BOOL)_loadPaymentsWithExpectedCount:(long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)run;
-(MicroPaymentQueueResponse *)response;
-(MicroPaymentQueueRequest *)request;
-(void)setResponse:(MicroPaymentQueueResponse *)arg1 ;
-(void)setRequest:(MicroPaymentQueueRequest *)arg1 ;
@end

