/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetReaderOutputInternal, NSString, AVWeakReference, NSDictionary;

@interface AVAssetReaderOutput : NSObject {

	AVAssetReaderOutputInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (assign,nonatomic) BOOL alwaysCopiesSampleData; 
@property (getter=_weakReferenceToAssetReader,nonatomic,readonly) AVWeakReference * weakReferenceToAssetReader; 
@property (assign,setter=_setExtractionID:,getter=_extractionID,nonatomic) int extractionID; 
@property (getter=_figAssetReaderExtractionOptions,nonatomic,readonly) NSDictionary * figAssetReaderExtractionOptions; 
@property (getter=_trimsSampleDurations,nonatomic,readonly) BOOL trimsSampleDurations; 
+(void)initialize;
-(id)_asset;
-(long long)_status;
-(id)_errorForOSStatus:(int)arg1 ;
-(void)_attachToWeakReferenceToAssetReader:(id)arg1 ;
-(BOOL)_prepareForReadingReturningError:(id*)arg1 ;
-(void)_cancelReading;
-(OpaqueFigAssetReaderRef)_figAssetReader;
-(BOOL)alwaysCopiesSampleData;
-(BOOL)supportsRandomAccess;
-(id)currentTimeRanges;
-(void)_setFigAssetReader:(OpaqueFigAssetReaderRef)arg1 ;
-(id)_weakReferenceToAssetReader;
-(BOOL)_trimsSampleDurations;
-(int)_extractionID;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(void)_markAsFinished;
-(void)markConfigurationAsFinal;
-(BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id*)arg1 ;
-(void)setAlwaysCopiesSampleData:(BOOL)arg1 ;
-(void)setSupportsRandomAccess:(BOOL)arg1 ;
-(void)_setExtractionID:(int)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1 ;
-(void)resetForReadingTimeRanges:(id)arg1 ;
-(void)_figAssetReaderDecodeError;
-(void)_figAssetReaderFailed;
-(BOOL)_isFinished;
-(void)dealloc;
-(id)init;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(NSString *)mediaType;
-(void)finalize;
@end

