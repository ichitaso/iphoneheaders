/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAAlarmSearch : SADomainCommand

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(void)_ad_getAlarmRequestRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_ad_alarmResponseForResponse:(id)arg1 ;
-(id)groupIdentifier;
-(NSURL *)identifier;
-(void)setEnabled:(NSNumber *)arg1 ;
-(void)setIdentifier:(NSURL *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSArray *)frequency;
-(void)setFrequency:(NSArray *)arg1 ;
-(void)setHour:(NSNumber *)arg1 ;
-(NSNumber *)hour;
-(NSNumber *)enabled;
-(NSNumber *)minute;
-(void)setMinute:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
@end
