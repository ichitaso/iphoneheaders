/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/History.h>
#import <MobileSafari/WKHistoryDelegatePrivate.h>

@class _WKVisitedLinkProvider, NSString;

@interface HistoryWK2 : History <WKHistoryDelegatePrivate> {

	_WKVisitedLinkProvider* _visitedLinkProvider;

}

@property (nonatomic,readonly) _WKVisitedLinkProvider * visitedLinkProvider; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHistory;
-(void)_updateForWKWebView:(id)arg1 updates:(/*^block*/id)arg2 ;
-(_WKVisitedLinkProvider *)visitedLinkProvider;
-(void)_webView:(id)arg1 didNavigateWithNavigationData:(id)arg2 ;
-(void)_webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3 ;
-(void)_webView:(id)arg1 didPerformServerRedirectFromURL:(id)arg2 toURL:(id)arg3 ;
-(void)_webView:(id)arg1 didUpdateHistoryTitle:(id)arg2 forURL:(id)arg3 ;
-(void)_removeAllVisitedLinks;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg1 ;
@end

