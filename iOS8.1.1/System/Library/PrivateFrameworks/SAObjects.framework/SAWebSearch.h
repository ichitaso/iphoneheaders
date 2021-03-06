/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAWebSearch : SADomainCommand

@property (nonatomic,copy) NSString * provider; 
@property (nonatomic,copy) NSString * query; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

