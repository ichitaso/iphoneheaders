/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:22:51 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/Support/softwareupdated
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface MSUUpdateBrainLocator : NSObject {

	NSDictionary* _updateAssetAttributes;

}

@property (nonatomic,retain) NSDictionary * updateAssetAttributes;              //@synthesize updateAssetAttributes=_updateAssetAttributes - In the implementation block
@property (nonatomic,readonly) NSString * deviceType; 
+(id)locatorsDictionaryQueue;
+(id)locatorsDictionary;
+(id)brainLocatorWithUpdateAttributes:(id)arg1 ;
-(id)initWithUpdateAssetAttributes:(id)arg1 ;
-(bool)purgeInstalledUpdateBrains:(id*)arg1 ;
-(bool)cancelAllDownloadsExcept:(id)arg1 error:(id*)arg2 ;
-(void)queryForUpdateBrainAssetLocally:(BOOL)arg1 handler:(/*^block*/ id)arg2 ;
-(id)localUpdateBrainAsset:(id*)arg1 ;
-(id)updateBrainQuery;
-(id)bestUpdateAssetFromResults:(id)arg1 error:(id*)arg2 ;
-(id)updateBrainLocalQuery;
-(void)installUpdateBrain:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)adjustDownloadOptions:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(bool)cancelInstall:(id*)arg1 ;
-(char*)copyUpdateBrainPath:(id*)arg1 ;
-(id)updateAssetAttributes;
-(void)setUpdateAssetAttributes:(id)arg1 ;
-(void)dealloc;
-(void)requiredDiskSpace:(/*^block*/ id)arg1 ;
-(id)deviceType;
@end
