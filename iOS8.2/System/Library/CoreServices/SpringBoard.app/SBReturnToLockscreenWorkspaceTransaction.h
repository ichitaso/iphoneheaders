/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBActivateAppUnderLockScreenWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class SBApplication, SBUIAnimationController, NSString;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction <SBUIAnimationControllerObserver> {

	SBApplication* _fromApp;
	char _workspaceAlreadyResumed;
	char _animatedAppDeactivation;
	SBUIAnimationController* _animation;
	char _suspendWorkspace;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlertManager:(id)arg1 fromApplication:(id)arg2 toLockScreenController:(id)arg3 andApp:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(void)_alertDidActivate;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)_didComplete;
-(void)_begin;
@end
