/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class BKSProcessAssertion, NSString;

@interface SBBackgroundFetchTask : NSObject {

	BOOL _finished;
	int _sequenceNumber;
	BKSProcessAssertion* _assertion;
	/*^block*/id _completionHandler;
	NSString* _bundleID;
	unsigned long long _trigger;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long trigger;                           //@synthesize trigger=_trigger - In the implementation block
@property (readonly) int sequenceNumber;                                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (readonly) BOOL finished;                                        //@synthesize finished=_finished - In the implementation block
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(void)_fireCompletionHandlerWithResult:(unsigned long long)arg1 ;
-(id)initForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)finishWithResult:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(BKSProcessAssertion *)assertion;
-(NSString *)bundleID;
-(BOOL)finished;
-(int)sequenceNumber;
-(unsigned long long)trigger;
@end

