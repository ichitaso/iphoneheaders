/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <coreauthd/LABackoffCounter.h>

@class NSDate, NSUserDefaults, NSError;

@interface BackoffCounter : NSObject <LABackoffCounter> {

	NSDate* _retryTime;
	unsigned _failures;
	NSUserDefaults* _defaults;

}

@property (readonly) NSError * errorAuthenticationFailedWithBackoff; 
+(id)sharedInstance;
-(NSError *)errorAuthenticationFailedWithBackoff;
-(id)actionFailure;
-(id)actionFailureWithBackoffResult;
-(void)_computeRetryTime;
-(void)_saveDefaults;
-(char)_validateBackoff;
-(void)_saveDefault:(id)arg1 forKey:(id)arg2 ;
-(void)actionFailureWithReply:(/*^block*/id)arg1 ;
-(void)actionBackoffWithReply:(/*^block*/id)arg1 ;
-(void)actionSuccess;
-(void)currentBackoffErrorWithReply:(/*^block*/id)arg1 ;
-(id)init;
-(void)_lockStateDidChange:(char)arg1 ;
@end

