/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKBookCoverSourceInternal.h>

@protocol OS_dispatch_queue, IMImagePrefetch;
@class BKImageCache, NSObject, NSMutableArray, NSString, UIImage;

@interface BKBookCoverSource : NSObject <BKBookCoverSourceInternal> {

	CGSize _size;
	int _options;
	BKImageCache* _cache;
	int _stateSpinlock;
	NSObject*<OS_dispatch_queue> _sync;
	int _currentState;
	NSMutableArray* _observers;
	NSString* _assetURL;
	char _isDownloading;
	char _isDownloaded;
	char _hasAssetURL;
	char _isUbiquitousAsset;
	char _cancelled;
	char _forceBlankCover;
	char _timerExpired;
	BKBookCoverGenericParams _genericParams;
	unsigned _generationId;
	unsigned _timeoutId;
	unsigned _usageCount;
	int _usageCountSpinlock;
	NSString* _bookId;
	id<IMImagePrefetch> _currentImagePrefetch;
	UIImage* _currentImage;
	NSString* _temporaryItemIdentifier;

}

@property (nonatomic,retain) id<IMImagePrefetch> currentImagePrefetch;              //@synthesize currentImagePrefetch=_currentImagePrefetch - In the implementation block
@property (nonatomic,retain) UIImage * currentImage;                                //@synthesize currentImage=_currentImage - In the implementation block
@property (nonatomic,retain) NSString * temporaryItemIdentifier;                    //@synthesize temporaryItemIdentifier=_temporaryItemIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * bookId;                                   //@synthesize bookId=_bookId - In the implementation block
-(NSString *)temporaryItemIdentifier;
-(id)coverImageState:(int*)arg1 extended:(SCD_Struct_BK7*)arg2 flags:(int)arg3 ;
-(void)removeCoverImageObserver:(id)arg1 ;
-(id)addCoverImageObserverWithHandler:(/*^block*/id)arg1 queue:(id)arg2 notifyImmediately:(char)arg3 ;
-(id)coverImageState:(int*)arg1 flags:(int)arg2 ;
-(void)setTemporaryItemIdentifier:(NSString *)arg1 ;
-(void)_copyBookProperties:(id)arg1 ;
-(void)_resolveStart;
-(id)_coverImageState:(int*)arg1 extended:(SCD_Struct_BK7*)arg2 condition:(/*^block*/id)arg3 ;
-(void)_waitForCondition:(/*^block*/id)arg1 ;
-(void)_resolvedWithUIImage:(id)arg1 state:(int)arg2 ;
-(void)_notifyObserversAsyncWithOldState:(int)arg1 ;
-(void)_resolveUsingGeneric;
-(void)_resolveUsingExistingArt;
-(void)_resolveByPluginRenderingUsingTempArt:(char)arg1 hasFallback:(char)arg2 useAssetURL:(char)arg3 ;
-(void)setCurrentImagePrefetch:(id<IMImagePrefetch>)arg1 ;
-(void)_resolvedWithCGImage:(CGImageRef)arg1 state:(int)arg2 ;
-(void)_resolveUsingLargestExistingArt;
-(void)_resolveUsingTemporaryArt;
-(void)_resolvePrefetch:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_emptyFetch;
-(void)_resolveByGenericRendering;
-(NSString *)bookId;
-(char)isBlankOrEmptyWithTimedOut:(out char*)arg1 ;
-(id)initWithCache:(id)arg1 book:(id)arg2 size:(CGSize)arg3 options:(int)arg4 ;
-(void)refreshPropertiesFromBook:(id)arg1 ;
-(id)_fetchGenericCover;
-(void)decrementUsageCount;
-(id<IMImagePrefetch>)currentImagePrefetch;
-(void)setCurrentImage:(UIImage *)arg1 ;
-(void)refresh;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(id)identifier;
-(void)prepareForReuse;
-(UIImage *)currentImage;
-(id)coverImage;
-(void)incrementUsageCount;
-(unsigned)usageCount;
@end
