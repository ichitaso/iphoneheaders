/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:10:40 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/SLFacebookRequest.h>

@class ACAccount;

@interface SLFacebookLoginRequest : SLFacebookRequest {

	ACAccount* _account;

}
-(void)preflightRequest;
-(id)_tokenSecret;
-(id)initWithAccount:(id)arg1 ;
@end

