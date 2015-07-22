/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMapTable;

@interface UIWebGeolocationPolicyDecider : NSObject {

	NSMutableDictionary* _sites;
	NSMutableArray* _challenges;
	NSMapTable* _activeChallenges;

}
+(void)initialize;
+(id)sharedPolicyDecider;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(BOOL)arg2 ;
-(id)_siteFile;
-(void)clearCache;
-(BOOL)_isAuthorizationDate:(id)arg1 inclusivelyBetweenDate:(id)arg2 andDate:(id)arg3 ;
-(void)_save;
-(long long)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2 ;
-(void)_load;
-(void)_executeNextChallenge;
-(void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
-(void)clearAllCaches;
-(void)clearAuthorizationsAddedBetween:(id)arg1 and:(id)arg2 ;
-(void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4 ;
@end
