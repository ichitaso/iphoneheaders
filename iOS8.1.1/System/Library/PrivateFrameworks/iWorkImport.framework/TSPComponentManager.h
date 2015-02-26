/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentDelegate.h>
#import <iWorkImport/TSPObjectModifyDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSMapTable, NSCache, TSPComponent, TSPObjectContext, NSString;

@interface TSPComponentManager : NSObject <TSPComponentDelegate, TSPObjectModifyDelegate> {

	int _ignoreCachedObjectEvictionCount;
	BOOL _isTornDown;
	NSObject*<OS_dispatch_queue> _componentQueue;
	NSHashTable* _components;
	NSMapTable* _componentDictionary;
	NSCache* _componentCache;
	TSPComponent* _viewStateComponent;
	NSObject*<OS_dispatch_queue> _readFlushedComponentQueue;
	TSPObjectContext* _context;
	TSPComponent* _packageMetadataComponent;

}

@property (nonatomic,__weak,readonly) TSPObjectContext * context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) TSPComponent * packageMetadataComponent;                      //@synthesize packageMetadataComponent=_packageMetadataComponent - In the implementation block
@property (nonatomic,readonly) TSPComponent * documentComponent; 
@property (nonatomic,readonly) TSPComponent * documentObjectContainerComponent; 
@property (nonatomic,readonly) BOOL isDocumentComponentTreeModified; 
@property (nonatomic,readonly) TSPComponent * supportComponent; 
@property (nonatomic,readonly) TSPComponent * supportObjectContainerComponent; 
@property (retain) TSPComponent * viewStateComponent; 
@property (nonatomic,readonly) BOOL isSupportComponentTreeModified; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2 ;
-(void)suspendLoadingModifiedFlushedComponentsAndWait;
-(void)resumeLoadingModifiedFlushedComponents;
-(void)discardOrphanedComponents;
-(void)enumerateComponents:(/*^block*/id)arg1 ;
-(id)objectForIdentifier:(long long)arg1 ;
-(void)beginIgnoringCachedObjectEviction;
-(void)endIgnoringCachedObjectEviction;
-(TSPComponent *)supportComponent;
-(BOOL)isDocumentComponentTreeModified;
-(BOOL)isSupportComponentTreeModified;
-(id)componentForRootObjectOfLazyReference:(id)arg1 ;
-(id)componentForRootObjectIdentifier:(long long)arg1 ;
-(TSPComponent *)documentComponent;
-(void)loadFromPackage:(id)arg1 metadata:(id)arg2 ;
-(TSPComponent *)packageMetadataComponent;
-(TSPComponent *)documentObjectContainerComponent;
-(TSPComponent *)supportObjectContainerComponent;
-(void)componentForRootObjectIdentifier:(long long)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)retrieveOrCreateComponentForRootObject:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)componentForRootObjectOfLazyReference:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dirtyAllComponentsForDocumentUpgradeInPackage:(unsigned char)arg1 ;
-(void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2 ;
-(BOOL)shouldKeepAllCachedObjectsInMemory;
-(void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2 ;
-(void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2 ;
-(id)rootComponentWithIdentifierImpl:(long long)arg1 locator:(id)arg2 packageIdentifier:(unsigned char)arg3 ;
-(id)documentComponentImpl;
-(id)supportComponentImpl;
-(id)componentForRootObjectOfLazyReferenceImpl:(id)arg1 ;
-(void)traverseComponentTreeFromRoot:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(TSPComponent *)viewStateComponent;
-(void)setViewStateComponent:(TSPComponent *)arg1 ;
-(id)rootComponentForPackageIdentifier:(unsigned char)arg1 ;
-(void)evictAllCachedObjects;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(TSPObjectContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)tearDown;
@end
