/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:15:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/ImageCapture-Structs.h>
#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface MSCameraFile : ICCameraFile {

	void* _msCameraFileProperties;

}

@property (readonly) unsigned long long fsSN; 
@property (readonly) timespec fsCreationTime; 
@property (readonly) timespec fsModificationTime; 
@property (readonly) long long fsSize; 
@property (assign) unsigned type; 
@property (copy) NSString * exifCreationDateTime; 
@property (copy) NSString * exifModificationDateTime; 
@property (assign) int thmSize; 
@property (assign) int thmOffset; 
@property (assign) int thmWidth; 
@property (assign) int thmHeight; 
@property (assign) int imgWidth; 
@property (assign) int imgHeight; 
@property (assign) int bitsPerPixel; 
@property (assign) char updatedBasicMetadata; 
-(void)dealloc;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)thumbData;
-(id)metadataDict;
-(long)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long*)arg3 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 fsSN:(unsigned long long)arg4 fsCreationTime:(timespec)arg5 fsModificationTime:(timespec)arg6 fsSize:(long long)arg7 fsFlags:(unsigned)arg8 ;
-(NSString *)exifCreationDateTime;
-(NSString *)exifModificationDateTime;
-(char)updateBasicMetadataIfNotRAW;
-(unsigned long long)fsSN;
-(timespec)fsCreationTime;
-(long long)fsSize;
-(timespec)fsModificationTime;
-(int)thmSize;
-(int)thmOffset;
-(char)updatedBasicMetadata;
-(void)setExifCreationDateTime:(NSString *)arg1 ;
-(void)setExifModificationDateTime:(NSString *)arg1 ;
-(void)setImgWidth:(int)arg1 ;
-(void)setImgHeight:(int)arg1 ;
-(void)setThmSize:(int)arg1 ;
-(void)setThmOffset:(int)arg1 ;
-(void)setThmWidth:(int)arg1 ;
-(void)setThmHeight:(int)arg1 ;
-(void)setUpdatedBasicMetadata:(char)arg1 ;
-(int)thmWidth;
-(int)thmHeight;
-(int)imgWidth;
-(int)imgHeight;
-(int)bitsPerPixel;
-(void)setBitsPerPixel:(int)arg1 ;
-(void)updateBasicMetadata;
-(void)finalize;
@end

