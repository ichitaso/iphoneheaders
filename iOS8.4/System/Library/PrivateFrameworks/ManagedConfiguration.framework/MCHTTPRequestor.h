/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/NSURLConnectionDataDelegate.h>

@class NSURLConnection, NSMutableData, NSString, NSArray;

@interface MCHTTPRequestor : NSObject <NSURLConnectionDataDelegate> {

	BOOL _didFailDueToMissingCredentials;
	BOOL _shouldUseResponseBodyAsLoginPrompt;
	NSURLConnection* _connection;
	NSMutableData* _responseData;
	NSString* _username;
	NSString* _password;
	NSArray* _anchorCertificates;
	/*^block*/id _completionBlock;
	id _selfReference;

}

@property (nonatomic,retain) NSURLConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                         //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy) NSString * username;                                    //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                                    //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSArray * anchorCertificates;                         //@synthesize anchorCertificates=_anchorCertificates - In the implementation block
@property (nonatomic,copy) id completionBlock;                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id selfReference;                                     //@synthesize selfReference=_selfReference - In the implementation block
@property (assign,nonatomic) BOOL didFailDueToMissingCredentials;                  //@synthesize didFailDueToMissingCredentials=_didFailDueToMissingCredentials - In the implementation block
@property (assign,nonatomic) BOOL shouldUseResponseBodyAsLoginPrompt;              //@synthesize shouldUseResponseBodyAsLoginPrompt=_shouldUseResponseBodyAsLoginPrompt - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(void)setAnchorCertificates:(NSArray *)arg1 ;
-(void)setSelfReference:(id)arg1 ;
-(void)setDidFailDueToMissingCredentials:(BOOL)arg1 ;
-(void)setShouldUseResponseBodyAsLoginPrompt:(BOOL)arg1 ;
-(NSArray *)anchorCertificates;
-(BOOL)didFailDueToMissingCredentials;
-(BOOL)shouldUseResponseBodyAsLoginPrompt;
-(void)didFinishWithError:(id)arg1 ;
-(void)startWithRequest:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)selfReference;
-(NSString *)username;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
@end

