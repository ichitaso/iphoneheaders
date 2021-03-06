/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SSLookupRequest, NSString, NSURL;

@interface MKAppLaunchController : NSObject {

	SSLookupRequest* _request;
	NSString* _webURLString;
	NSURL* webURL;

}

@property (nonatomic,retain) SSLookupRequest * storeRequest;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURL * webURL; 
+(void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2 ;
+(id)sharedController;
-(void)setWebURL:(id)arg1 ;
-(void)setStoreRequest:(id)arg1 ;
-(id)storeRequest;
-(id)webURL;
-(void)lookUpAppStoreURLForBundle:(id)arg1 ;
-(void)dealloc;
@end

