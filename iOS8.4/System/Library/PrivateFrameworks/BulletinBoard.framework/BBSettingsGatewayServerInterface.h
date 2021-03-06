/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBSettingsGatewayServerInterface <NSObject>
@required
-(void)getSectionOrderRuleWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForCategory:(long long)arg1 withHandler:(/*^block*/id)arg2;
-(void)getPrivilegedSenderTypesWithHandler:(/*^block*/id)arg1;
-(void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEnabledWithHandler:(/*^block*/id)arg1;
-(void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(/*^block*/id)arg1;
-(void)setSectionOrderRule:(long long)arg1;
-(void)setOrderedSectionIDs:(id)arg1 forCategory:(long long)arg2;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3;
-(void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
-(void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
-(void)setBehaviorOverridesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg1;
-(void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(BOOL)arg1;
-(void)setPrivilegedSenderTypesChangeUpdatesEnabled:(BOOL)arg1;
-(void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 source:(unsigned long long)arg2;
-(void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
-(void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2;

@end

