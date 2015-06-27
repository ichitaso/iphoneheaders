/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:14:28 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/BulletinBoardPlugins/PhotoLibraryDataProvider.bundle/PhotoLibraryDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryDataProvider/PhotoLibraryDataProvider-Structs.h>
#import <PhotoLibraryDataProvider/BBDataProvider.h>

@protocol OS_dispatch_queue;
@class NSArray, NSMutableArray, NSObject, NSString;

@interface PLBulletinBoardDataProvider : NSObject <BBDataProvider> {

	NSArray* _bulletins;
	NSMutableArray* _bulletinThumbnailData;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _lastDisplayedRecordID;
	unsigned long _defaultSoundID;

}

@property (nonatomic,retain) NSArray * bulletins;                       //@synthesize bulletins=_bulletins - In the implementation block
@property (assign,nonatomic) unsigned long defaultSoundID;              //@synthesize defaultSoundID=_defaultSoundID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGImageRef)_newImageByScalingAndCroppingImage:(CGImageRef)arg1 withConstraints:(id)arg2 ;
-(unsigned long)_createSoundForPath:(id)arg1 ;
-(void)setBulletins:(NSArray *)arg1 ;
-(id)_bulletinFromDictionary:(id)arg1 isOriginal:(char*)arg2 ;
-(id)_discardedBulletinsFromCurrentBulletins:(id)arg1 ;
-(void)_updateLastDisplayedBulletinRecordID:(int)arg1 ;
-(void)_updateImageDataCache:(id)arg1 ;
-(NSArray *)bulletins;
-(id)_imageDataForRecordID:(int)arg1 ;
-(void)_bulletinsChanged;
-(void)_applicationBadgeCountChanged;
-(unsigned long)defaultSoundID;
-(void)setDefaultSoundID:(unsigned long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(void)dataProviderDidLoad;
-(id)universalSectionIdentifier;
-(char)syncsBulletinDismissal;
-(id)sectionParameters;
-(id)defaultSectionInfo;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 ;
-(float)attachmentAspectRatioForRecordID:(id)arg1 ;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
@end
