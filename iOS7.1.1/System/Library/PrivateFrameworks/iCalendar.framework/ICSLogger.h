/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ICSLoggingDelegate;
@interface ICSLogger : NSObject {

	int _logCount;
	<ICSLoggingDelegate>* _loggingDelegate;

}
+(void)setDelegate:(id)arg1 ;
+(id)sharedInstance;
+(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 message:(id)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(void)logAtLevel:(long long)arg1 forTokenizer:(id)arg2 format:(id)arg3 args:(char*)arg4 ;
@end

