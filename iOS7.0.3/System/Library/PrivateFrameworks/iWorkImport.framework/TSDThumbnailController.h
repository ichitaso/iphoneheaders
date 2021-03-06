/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDThumbnailConsumer.h>

@protocol TSDThumbnailControllerDelegate, TSDThumbnailProducer, OS_dispatch_queue;
@class TSKDocumentRoot, TSDThumbnailGenerator, NSMutableSet, TSULRUCache, NSDate, NSObject, NSSet;

@interface TSDThumbnailController : NSObject <TSDThumbnailConsumer> {

	TSKDocumentRoot* _documentRoot;
	<TSDThumbnailControllerDelegate>* _delegate;
	<TSDThumbnailProducer>* _producer;
	TSDThumbnailGenerator* _generator;
	BOOL _thumbnailRequested;
	BOOL _thumbnailerEnabled;
	unsigned _thumbnailSuspendCount;
	NSMutableSet* _dirtySet;
	TSULRUCache* _thumbnailCache;
	double _delayBeforeRedraw;
	BOOL _tornDown;
	BOOL _callbackScheduled;
	int _delayHandlingStatus;
	NSDate* _drawingStartDate;
	NSObject<OS_dispatch_queue>* _thumbnailGenerationQueue;

}

@property (assign,nonatomic) <TSDThumbnailControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) <TSDThumbnailProducer> * producer;                        //@synthesize producer=_producer - In the implementation block
@property (assign,nonatomic) CGColorRef backgroundColor; 
@property (assign,nonatomic) double delayBeforeRedraw;                                 //@synthesize delayBeforeRedraw=_delayBeforeRedraw - In the implementation block
@property (nonatomic,readonly) NSSet * dirtySet;                                       //@synthesize dirtySet=_dirtySet - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                            //@synthesize thumbnailerEnabled=_thumbnailerEnabled - In the implementation block
-(void)suspendThumbnailing;
-(void)resumeThumbnailing;
-(void)p_thumbnailEvicted:(id)arg1 identifier:(id)arg2 ;
-(void)p_handleMemoryNotification:(id)arg1 ;
-(void)setProducer:(id)arg1 ;
-(BOOL)p_isThumbnailGenerationActive;
-(void)updateThumbnails;
-(BOOL)p_notGeneratingThumbnail;
-(void)thumbnailCountDidChange;
-(void)p_scheduleThumbnailGeneration;
-(void)p_scheduleThumbnailGenerationMainThreadEntry;
-(id)cachedThumbnail:(id)arg1 ;
-(void)updateThumbnail:(id)arg1 identifier:(id)arg2 continueThumbnailing:(BOOL)arg3 ;
-(BOOL)p_mustCacheThumbnailsForAllPrincipalThumbnailIdentifiers;
-(void)commitThumbnail:(id)arg1 identifier:(id)arg2 ;
-(BOOL)shouldCallCommit;
-(id)nextThumbnailIdentifier;
-(id)initWithDocumentRoot:(id)arg1 cacheSize:(unsigned)arg2 ;
-(void)invalidateAllThumbnailsAndOptionallyClearCache:(BOOL)arg1 ;
-(void)invalidateThumbnail:(id)arg1 ;
-(id)thumbnail:(id)arg1 waitIfNecessary:(BOOL)arg2 ;
-(void)waitForIdentifiersOfThumbnailsToHaveThumbnails:(id)arg1 ;
-(id)producer;
-(double)delayBeforeRedraw;
-(void)setDelayBeforeRedraw:(double)arg1 ;
-(id)dirtySet;
-(void)dealloc;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)teardown;
@end

