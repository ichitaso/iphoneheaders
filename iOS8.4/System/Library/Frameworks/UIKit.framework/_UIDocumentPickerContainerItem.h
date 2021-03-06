/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIDocumentPickerDirectoryObserverItem.h>

@class _UIDocumentPickerContainerModel, _UIDocumentPickerURLContainerModel, NSMapTable, NSString, NSURL, NSDate;

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {

	_UIDocumentPickerContainerModel* _weak_parentModel;
	_UIDocumentPickerURLContainerModel* _model;
	_UIDocumentPickerURLContainerModel* _weak_model;
	long long _modelDisplayCount;
	id _observer;
	id _resourceIdentifier;
	BOOL _pickable;
	id _item;
	long long _type;
	NSMapTable* _thumbnailsBySize;
	NSString* _pickabilityReason;

}

@property (nonatomic,retain) id item;                                                           //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) long long type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,retain,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) NSString * subtitle2; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (assign,nonatomic) BOOL pickable;                                                     //@synthesize pickable=_pickable - In the implementation block
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,retain,readonly) _UIDocumentPickerContainerModel * model; 
@property (nonatomic,retain) NSMapTable * thumbnailsBySize;                                     //@synthesize thumbnailsBySize=_thumbnailsBySize - In the implementation block
@property (assign,nonatomic,__weak) _UIDocumentPickerContainerModel * parentModel; 
@property (nonatomic,copy) NSString * pickabilityReason;                                        //@synthesize pickabilityReason=_pickabilityReason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_lruThumbnailArray;
+(void)markThumbnailAsRecentlyUsed:(id)arg1 ;
+(void)clearLRUThumbnailCache;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)item;
-(NSURL *)url;
-(long long)type;
-(NSString *)title;
-(id)initWithItem:(id)arg1 ;
-(id)modificationDate;
-(void)setPickable:(BOOL)arg1 ;
-(void)_valuesChanged;
-(void)setParentModel:(_UIDocumentPickerContainerModel *)arg1 ;
-(void)setPickabilityReason:(NSString *)arg1 ;
-(BOOL)pickable;
-(void)setItem:(id)arg1 ;
-(id)_defaultThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(_UIDocumentPickerContainerModel *)parentModel;
-(id)_createThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_blockingThumbnailWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)_resourceIdentifier;
-(id)tags;
-(id)_blipWithTags:(id)arg1 height:(double)arg2 scale:(double)arg3 ;
-(NSDate *)sortDate;
-(void)_ensureModelPresent;
-(void)_modelChanged;
-(id)thumbnailWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSString *)subtitle;
-(NSString *)subtitle2;
-(_UIDocumentPickerContainerModel *)model;
-(id)tagBlipsWithHeight:(double)arg1 scale:(double)arg2 ;
-(id)sortTag;
-(void)incrementModelDisplayCount;
-(void)decrementModelDisplayCount;
-(id)_formattedSubtitleForNumberOfItems:(unsigned long long)arg1 ;
-(NSMapTable *)thumbnailsBySize;
-(void)setThumbnailsBySize:(NSMapTable *)arg1 ;
-(NSString *)pickabilityReason;
@end

