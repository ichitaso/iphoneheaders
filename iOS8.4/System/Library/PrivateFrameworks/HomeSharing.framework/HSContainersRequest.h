/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@interface HSContainersRequest : HSRequest {

	BOOL _shouldParseResponse;

}

@property (assign,nonatomic) BOOL shouldParseResponse;              //@synthesize shouldParseResponse=_shouldParseResponse - In the implementation block
+(id)requestWithDatabaseID:(unsigned)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(id)canonicalResponseForResponse:(id)arg1 ;
-(id)initWithDatabaseID:(unsigned)arg1 ;
-(BOOL)shouldParseResponse;
-(void)setShouldParseResponse:(BOOL)arg1 ;
@end

