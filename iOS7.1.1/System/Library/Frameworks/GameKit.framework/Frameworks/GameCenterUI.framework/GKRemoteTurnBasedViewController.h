/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKRemoteViewController.h>
#import <GameCenterUI/GKTurnBasedServiceViewControllerDelegate.h>

@class GKTurnBasedMatchmakerViewController, GKGame;

@interface GKRemoteTurnBasedViewController : GKRemoteViewController <GKTurnBasedServiceViewControllerDelegate> {

	GKTurnBasedMatchmakerViewController* _delegateWeak;

}

@property (assign,nonatomic) GKTurnBasedMatchmakerViewController * delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKGame * game; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)finishWithError:(id)arg1 ;
-(void)setShowExistingMatches:(bool)arg1 ;
-(void)finishWithMatch:(id)arg1 ;
-(void)playerQuitMatch:(id)arg1 ;
-(void)setMatchRequestInternal:(id)arg1 ;
-(void)setupRemoteView;
-(void)remoteViewControllerIsCanceling;
-(bool)_dismissSelfAfterGettingShouldFinish;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end

