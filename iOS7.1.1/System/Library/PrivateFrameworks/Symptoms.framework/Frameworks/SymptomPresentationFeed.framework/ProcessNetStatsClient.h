/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SymptomPresentationFeed/SymptomPresentationFeed-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface ProcessNetStatsClient : NSObject {

	NSString* primaryKey;
	float pollingInterval;
	NStatManagerRef manager;
	NSMutableArray* entities;
	NSMutableDictionary* durableRollUp;
	long long wlanIdx;
	long long wwanIdx;
	id _delegate;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(void)_timeoutHandler;
-(void)_addEntryToRollUp:(id)arg1 ;
-(id)initWithPrimaryKey:(id)arg1 pollInterval:(float)arg2 ;
-(id)getRollUpWithBaseline:(id)arg1 ;
@end

