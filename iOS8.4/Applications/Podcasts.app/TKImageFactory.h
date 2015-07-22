/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class NSOperationQueue, NSCache, NSString;

@interface TKImageFactory : NSObject {

	NSOperationQueue* _loadingQueue;
	NSCache* _imageCache;
	id _delegate;
	NSString* _placeholderArtworkKey;

}

@property (retain) NSOperationQueue * loadingQueue;               //@synthesize loadingQueue=_loadingQueue - In the implementation block
@property (retain) NSCache * imageCache;                          //@synthesize imageCache=_imageCache - In the implementation block
@property (__weak) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * placeholderArtworkKey;              //@synthesize placeholderArtworkKey=_placeholderArtworkKey - In the implementation block
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 ;
-(void)setPlaceholderArtworkKey:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 basePath:(id)arg2 memorySize:(int)arg3 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 forceDecode:(char)arg3 ;
-(void)addImageFromURL:(id)arg1 size:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(char)hasImageForKey:(id)arg1 ;
-(void)addImageFromURL:(id)arg1 completionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(char)hasImageForKey:(id)arg1 withSize:(CGSize)arg2 ;
-(id)_keyForSize:(CGSize)arg1 withBaseKey:(id)arg2 ;
-(NSOperationQueue *)loadingQueue;
-(void)loadImage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)scaleImage:(id)arg1 toSize:(CGSize)arg2 withBorders:(char)arg3 ;
-(void)addImageFromURL:(id)arg1 size:(CGSize)arg2 drawBorders:(char)arg3 completionBlock:(/*^block*/id)arg4 withQueue:(id)arg5 ;
-(void)setLoadingQueue:(NSOperationQueue *)arg1 ;
-(NSString *)placeholderArtworkKey;
-(void)cancelAllLoads;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
@end
