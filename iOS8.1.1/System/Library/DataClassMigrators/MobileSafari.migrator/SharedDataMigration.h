/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MobileSafari.migrator/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SharedDataMigration : NSObject
+(BOOL)migrateThumbnails;
+(BOOL)migrateRecentSearches;
+(id)_userCachesDirectoryPath;
+(void)migratePersistentStorageDefaults;
+(BOOL)_migrateCacheFileFromSubpath:(id)arg1 toSubpath:(id)arg2 ensureIsDirectory:(BOOL)arg3 ;
@end
