/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PDUbiquityManagerDelegate <NSObject>
@required
-(id)existingCardUniqueIDs;
-(id)existingCardWithUniqueID:(id)arg1;
-(void)ubiquitousCardDidChange:(id)arg1;
-(void)ubiquitousCardWithUniqueIDRemoved:(id)arg1;
-(id)existingCatalog;
-(void)ubiquitousCatalogDidChange:(id)arg1;
@end
