/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.lakitu/NSURLSessionDelegate.h>

@class NSString, NSURLRequest;

@interface LakituRequest : NSObject <NSURLSessionDelegate> {

	NSString* _urlString;
	NSString* _dsid;
	NSString* _authToken;
	NSString* dsid;
	NSString* authToken;

}

@property (readonly) NSURLRequest * urlRequest; 
@property (nonatomic,retain) NSString * dsid; 
@property (nonatomic,retain) NSString * authToken; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
+(id)protocolVersion;
-(id)defaultSessionConfig;
-(id)urlString;
-(id)urlCredential;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)dsid;
-(NSString *)authToken;
-(void)setDsid:(NSString *)arg1 ;
-(id)initWithURLString:(id)arg1 ;
-(NSURLRequest *)urlRequest;
-(id)bodyDictionary;
@end

