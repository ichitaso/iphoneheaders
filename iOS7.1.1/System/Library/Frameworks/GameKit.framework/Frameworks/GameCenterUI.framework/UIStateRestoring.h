/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIStateRestoring <NSObject>
@property (nonatomic,readonly) <UIStateRestoring> * restorationParent; 
@property (nonatomic,readonly) Class objectRestorationClass; 
@optional
-(void)encodeRestorableStateWithCoder:(id)arg1;
-(void)decodeRestorableStateWithCoder:(id)arg1;
-(void)applicationFinishedRestoringState;
-(id)restorationParent;
-(Class)objectRestorationClass;
@end
