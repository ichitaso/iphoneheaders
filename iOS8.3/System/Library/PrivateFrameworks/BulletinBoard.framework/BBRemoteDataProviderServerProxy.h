/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:49:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BBRemoteDataProviderServerProxy <NSObject>
@required
-(void)invalidateBulletins;
-(void)addBulletin:(id)arg1 forDestinations:(unsigned)arg2;
-(void)modifyBulletin:(id)arg1;
-(void)withdrawBulletinsWithRecordID:(id)arg1;
-(void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
-(void)reloadSectionParameters:(id)arg1;
-(void)reloadDefaultSectionInfo:(id)arg1;
-(void)getClearedInfoWithCompletion:(/*^block*/id)arg1;
-(void)setClearedInfo:(id)arg1;
-(void)setSectionInfo:(id)arg1 inCategory:(int)arg2;
-(void)setSectionInfo:(id)arg1;
-(void)getSectionInfoWithCompletion:(/*^block*/id)arg1;

@end

