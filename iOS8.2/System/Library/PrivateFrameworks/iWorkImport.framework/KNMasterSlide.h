/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAbstractSlide.h>
#import <iWorkImport/TSSThemeAsset.h>
#import <iWorkImport/TSKTransformableObject.h>

@class NSString, KNClassicStylesheetRecord, NSArray;

@interface KNMasterSlide : KNAbstractSlide <TSSThemeAsset, TSKTransformableObject> {

	NSString* mName;
	CGRect mObjectRect;
	KNClassicStylesheetRecord* mClassicStylesheetRecord;
	NSArray* mBodyParagraphStyles;
	NSArray* mBodyListStyles;
	NSString* mThumbnailTextForTitlePlaceholder;
	NSString* mThumbnailTextForBodyPlaceholder;
	char mSlideObjectsLayerWithMaster;
	char mHasBug16580905;
	char mCalculatedHasBug16580905;

}

@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) CGRect objectRect; 
@property (nonatomic,readonly) KNClassicStylesheetRecord * classicStylesheetRecord; 
@property (nonatomic,copy) NSArray * bodyParagraphStyles; 
@property (nonatomic,copy) NSArray * bodyListStyles; 
@property (nonatomic,retain) NSString * thumbnailTextForTitlePlaceholder; 
@property (nonatomic,retain) NSString * thumbnailTextForBodyPlaceholder; 
@property (assign,nonatomic) char slideObjectsLayerWithMaster; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)p_defaultMasterGuideColor;
+(id)masterGuideColor;
+(void)setMasterGuideColor:(id)arg1 ;
+(void)initialize;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isThemeEquivalent:(id)arg1 ;
-(SEL)mapThemeAssetSelector;
-(int)intValueForProperty:(int)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(char)isThemeContent;
-(char)containsProperty:(int)arg1 ;
-(char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(id)alignmentGuides;
-(id)alignmentGuidesForEditing;
-(char)isObjectVisible;
-(id)initWithSlideNode:(id)arg1 context:(id)arg2 ;
-(void)generateObjectPlaceholderIfNecessary;
-(CGRect)objectRect;
-(void)setObjectRect:(CGRect)arg1 ;
-(NSArray *)bodyListStyles;
-(NSArray *)bodyParagraphStyles;
-(void)setBodyListStyles:(NSArray *)arg1 ;
-(void)setBodyParagraphStyles:(NSArray *)arg1 ;
-(NSString *)thumbnailTextForTitlePlaceholder;
-(void)setThumbnailTextForTitlePlaceholder:(NSString *)arg1 ;
-(NSString *)thumbnailTextForBodyPlaceholder;
-(void)setThumbnailTextForBodyPlaceholder:(NSString *)arg1 ;
-(char)slideObjectsLayerWithMaster;
-(void)setSlideObjectsLayerWithMaster:(char)arg1 ;
-(id)tagsforNewPlaceholderInfos:(id)arg1 ;
-(id)p_defaultTagForDrawable:(id)arg1 ;
-(id)p_defaultThumbnailTextForPlaceholder:(id)arg1 ;
-(id)copyWithContext:(id)arg1 andSlideNode:(id)arg2 ;
-(id)tagforNewPlaceholderInfo:(id)arg1 ;
-(id)thumbnailTextForPlaceholder:(id)arg1 ;
-(id)imagePlaceholders;
-(id)nonPlaceholderObjects;
-(void)willBeAddedToTheme:(id)arg1 ;
-(void)wasAddedToTheme:(id)arg1 ;
-(void)updatePlaceholderText;
-(KNClassicStylesheetRecord *)classicStylesheetRecord;
-(char)hasBug16580905;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)childEnumerator;
@end

