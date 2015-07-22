/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector {

	OpaqueFigFormatReaderRef _formatReader;
	BOOL didCheckForSaveRestriction;
	BOOL hasSaveRestriction;

}

@property (setter=_setFormatReader:,getter=_formatReader,nonatomic,retain) OpaqueFigFormatReaderRef formatReader; 
-(float)preferredRate;
-(float)preferredVolume;
-(float)preferredSoundCheckVolumeNormalization;
-(int)naturalTimeScale;
-(BOOL)providesPreciseDurationAndTiming;
-(id)alternateTrackGroups;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(BOOL)isExportable;
-(BOOL)isComposable;
-(BOOL)canContainMovieFragments;
-(BOOL)containsMovieFragments;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(void)_setFormatReader:(OpaqueFigFormatReaderRef)arg1 ;
-(BOOL)_hasQTSaveRestriction;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(id)trackReferences;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_CM4)duration;
-(CGSize)naturalSize;
-(id)lyrics;
-(long long)trackCount;
-(BOOL)isReadable;
-(CGAffineTransform)preferredTransform;
-(id)commonMetadata;
-(void)finalize;
@end
