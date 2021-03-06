/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PDAnimationInfoData, PDMediaNode;

@interface PDAnimationInfo : NSObject {

	PDAnimationInfoData* mEntrance;
	PDAnimationInfoData* mExit;
	PDAnimationInfoData* mMedia;
	PDMediaNode* mediaNode;

}

@property (nonatomic,retain) PDAnimationInfoData * mediaData; 
@property (nonatomic,retain) PDMediaNode * mediaNode; 
-(void)dealloc;
-(PDMediaNode *)mediaNode;
-(id)entranceData;
-(id)exitData;
-(void)setEntranceData:(id)arg1 ;
-(void)setExitData:(id)arg1 ;
-(void)setMediaNode:(PDMediaNode *)arg1 ;
-(PDAnimationInfoData *)mediaData;
-(void)setMediaData:(PDAnimationInfoData *)arg1 ;
@end

