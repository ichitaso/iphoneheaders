/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface SBFakeDuet : NSObject {

	NSArray* _triggers;
	NSArray* _appsToLaunch;
	/*^block*/ id _recommendationHandler;

}

@property (nonatomic,retain) NSArray * triggers;                  //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) NSArray * appsToLaunch;              //@synthesize appsToLaunch=_appsToLaunch - In the implementation block
@property (nonatomic,copy) id recommendationHandler;              //@synthesize recommendationHandler=_recommendationHandler - In the implementation block
+(id)sharedInstance;
-(void)_refreshAppsToLaunch;
-(void)_refreshTriggers;
-(void)_wake:(id)arg1 ;
-(void)_switcherRevealed:(id)arg1 ;
-(void)_frontDisplayChanged:(id)arg1 ;
-(void)setRecommendationHandler:(/*^block*/ id)arg1 ;
-(void)setTriggers:(id)arg1 ;
-(void)setAppsToLaunch:(id)arg1 ;
-(id)appsToLaunch;
-(/*^block*/ id)recommendationHandler;
-(void)_handleTrigger:(id)arg1 ;
-(void)okToLaunch:(id)arg1 forReasons:(id)arg2 withHandler:(/*^block*/ id)arg3 ;
-(id)triggers;
-(void)dealloc;
-(id)init;
-(void)setAppLaunchRecommendationHandler:(/*^block*/ id)arg1 ;
@end

