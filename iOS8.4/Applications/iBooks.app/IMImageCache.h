/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iBooks/iBooks-Structs.h>
@class IMMemoryCache, NSString, NSObject;

@interface IMImageCache : NSObject {

	IMMemoryCache* _memoryCache;
	NSString* _persistentCachePath;
	NSObject*<OS_dispatch_queue> _downloadQueue;
	NSString* _defaultType;
	NSObject*<OS_dispatch_queue> _persistenceQueue;

}

@property (nonatomic,copy) NSString * defaultType;                                       //@synthesize defaultType=_defaultType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> persistenceQueue;              //@synthesize persistenceQueue=_persistenceQueue - In the implementation block
+(id)defaultCache;
-(id)initWithIdentifier:(id)arg1 memorySize:(int)arg2 ;
-(char)hasImageForKey:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 basePath:(id)arg2 memorySize:(int)arg3 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 type:(id)arg3 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 type:(id)arg3 persist:(char)arg4 ;
-(NSObject*<OS_dispatch_queue>)persistenceQueue;
-(void)setImage:(id)arg1 forKey:(id)arg2 type:(id)arg3 persist:(char)arg4 properties:(id)arg5 ;
-(void)flushPersistentCache;
-(void)removeImageForKey:(id)arg1 synchronous:(char)arg2 ;
-(id)_fetchImageForKey:(id)arg1 forceDecode:(char)arg2 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 forceDecode:(char)arg3 ;
-(id)keyForSize:(CGSize)arg1 withBaseKey:(id)arg2 ;
-(id)imageForKey:(id)arg1 forceDecode:(char)arg2 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 forceDecode:(char)arg4 ;
-(void)imageForKey:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 queue:(id)arg4 options:(int)arg5 ;
-(void)addImageFromURL:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)addImageFromURL:(id)arg1 key:(id)arg2 size:(CGSize)arg3 completionBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)_histogramForImage:(id)arg1 result:(unsigned*)arg2 size:(unsigned long)arg3 ;
-(char)hasImageInMemoryForKey:(id)arg1 ;
-(void)removeImageWithRootKey:(id)arg1 ;
-(id)firstImageForRootKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 ;
-(void)imageForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)imageForKey:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)addImageFromURL:(id)arg1 completionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(unsigned)imageDataSizeForKey:(id)arg1 ;
-(id)imageWithString:(id)arg1 size:(CGSize)arg2 save:(char)arg3 ;
-(float)compareImage:(id)arg1 withImage:(id)arg2 ;
-(char)hasImageInMemoryForKey:(id)arg1 withSize:(CGSize)arg2 ;
-(char)hasImageForKey:(id)arg1 withSize:(CGSize)arg2 ;
-(void)getImageMetadataForKey:(id)arg1 size:(CGSize*)arg2 scale:(float*)arg3 ;
-(id)keyForSize:(CGSize)arg1 withBaseKey:(id)arg2 suffix:(id)arg3 ;
-(NSString *)defaultType;
-(void)setDefaultType:(NSString *)arg1 ;
-(void)setPersistenceQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)flushAllCaches;
-(void)removeImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(void)flushMemoryCache;
@end
