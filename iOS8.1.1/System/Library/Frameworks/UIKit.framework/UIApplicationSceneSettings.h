/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>

@protocol UIApplicationSceneSettings <NSObject>
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@required
-(BOOL)underLock;
-(int)statusBarStyleOverridesToSuppress;

@end


@class NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
-(BOOL)isUISubclass;
-(BOOL)underLock;
-(int)statusBarStyleOverridesToSuppress;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
@end

