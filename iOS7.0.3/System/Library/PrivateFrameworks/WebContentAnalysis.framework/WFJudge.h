/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class WFLSMMap;

@interface WFJudge : NSObject {

	WFLSMMap* map;

}
+(id)defaultLSMMapPath;
+(id)defaultJudge;
-(id)initWithMap:(id)arg1 ;
-(id)_pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id*)arg3 pageTitle:(id*)arg4 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id*)arg4 pageTitle:(id*)arg5 ;
@end

