/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class ICCameraDevice, ICCameraFolder, NSString, NSDate, NSDictionary, NSMutableDictionary;

@interface ICCameraItem : NSObject {

	void* _itemProperties;

}

@property (readonly) ICCameraDevice * device; 
@property (readonly) ICCameraFolder * parentFolder; 
@property (readonly) NSString * name; 
@property (readonly) NSString * UTI; 
@property (getter=isLocked) bool locked; 
@property (readonly) NSDate * creationDate; 
@property (readonly) NSDate * modificationDate; 
@property (readonly) CGImageRef thumbnail; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSMutableDictionary * userData; 
@property (readonly) bool hasThumbnail; 
@property (readonly) bool hasMetadata; 
@property (readonly) NSString * fileSystemPath; 
-(bool)isCameraFile;
-(void)dealloc;
-(id)description;
-(bool)isLocked;
-(id)name;
-(void)setLocked:(bool)arg1 ;
-(bool)hasMetadata;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)userData;
-(id)UTI;
-(void)setUTI:(id)arg1 ;
-(id)device;
-(CGImageRef)thumbnail;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)appendToPath:(id)arg1 ;
-(id)fileSystemPath;
-(void)requestMetadata;
-(void)requestThumbnail;
-(id)parentFolder;
-(void)flushMetadataCache;
-(void)flushThumbnailCache;
-(void)setModificationDate:(id)arg1 ;
-(id)creationDate;
-(id)modificationDate;
-(id)metadata;
-(bool)hasThumbnail;
-(void)setCreationDate:(id)arg1 ;
-(void)finalize;
@end

