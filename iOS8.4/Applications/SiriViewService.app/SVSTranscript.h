/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <SiriViewService/AFUIQueueDelegate.h>
#import <SiriViewService/SVSTranscriptItemGroupDelegate.h>
#import <SiriViewService/NSFastEnumeration.h>

@protocol SVSTranscriptDataSource, SVSTranscriptDelegate;
@class NSMutableArray, AFUIQueue, NSString;

@interface SVSTranscript : NSObject <AFUIQueueDelegate, SVSTranscriptItemGroupDelegate, NSFastEnumeration> {

	id<SVSTranscriptDataSource> _dataSource;
	id<SVSTranscriptDelegate> _delegate;
	NSMutableArray* _allTranscriptItems;
	NSMutableArray* _exposedTranscriptItems;
	AFUIQueue* _loadingTranscriptItemGroupQueue;
	int _discardedItemCount;

}

@property (nonatomic,readonly) int transcriptItemCount; 
@property (assign,nonatomic,__weak) id<SVSTranscriptDataSource> dataSource;                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SVSTranscriptDelegate> delegate;                                                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=_allTranscriptItems,nonatomic,readonly) NSMutableArray * allTranscriptItems;                                   //@synthesize allTranscriptItems=_allTranscriptItems - In the implementation block
@property (getter=_exposedTranscriptItems,nonatomic,readonly) NSMutableArray * exposedTranscriptItems;                           //@synthesize exposedTranscriptItems=_exposedTranscriptItems - In the implementation block
@property (getter=_loadingTranscriptItemGroupQueue,nonatomic,readonly) AFUIQueue * loadingTranscriptItemGroupQueue;              //@synthesize loadingTranscriptItemGroupQueue=_loadingTranscriptItemGroupQueue - In the implementation block
@property (nonatomic,readonly) int discardedItemCount;                                                                           //@synthesize discardedItemCount=_discardedItemCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearTranscriptItemViewControllerDelegates;
-(int)transcriptItemCount;
-(id)transcriptItemAtIndex:(int)arg1 ;
-(void)enumerateTranscriptItemsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)insertItemsAtIndexes:(id)arg1 ;
-(void)reloadItemsAtIndexes:(id)arg1 ;
-(void)removeItemsWithIdentifiers:(id)arg1 atIndexes:(id)arg2 ;
-(void)presentationStateDidChangeForItemsAtIndexes:(id)arg1 ;
-(id)transcriptItemForConversationItemWithIdentifier:(id)arg1 ;
-(id)conversationItemIdentifierForViewController:(id)arg1 ;
-(id)transcriptItemForViewController:(id)arg1 ;
-(int)indexOfTranscriptItem:(id)arg1 ;
-(int)conversationIndexForTranscriptLevelModelItemAtIndex:(int)arg1 ;
-(void)transcriptItemDidBecomeReadyToAppear:(id)arg1 ;
-(void)enumerateTranscriptItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)conversationIndexesForTranscriptLevelModelItemsAtIndexes:(id)arg1 ;
-(void)setErrorViewControllerForTranscriptItem:(id)arg1 ;
-(id)_exposedTranscriptItems;
-(void)_processLoadingTranscriptItemGroupQueue;
-(id)_allTranscriptItems;
-(id)_loadingTranscriptItemGroupQueue;
-(id)_aceObjectForItemAtIndex:(int)arg1 ;
-(id)_createTranscriptItemForAceObject:(id)arg1 itemIndex:(int)arg2 ;
-(char)_transcriptHasProvisionalItems;
-(id)_transcriptItemForDataSourceItemAtIndex:(int)arg1 ;
-(void)_clearViewControllerDelegateForTranscriptItem:(id)arg1 ;
-(id)_transcriptItemsForDataSourceItemsAtIndexes:(id)arg1 ;
-(int)_conversationIndexForTranscriptItem:(id)arg1 ;
-(void)_notifyThatViewControllerWillBeRemoved:(id)arg1 ;
-(id)_createErrorSnippetViewControllerWithAceObject:(id)arg1 itemIndex:(int)arg2 ;
-(void)_configureViewController:(id)arg1 withAceObject:(id)arg2 itemIndex:(int)arg3 ;
-(void)transcriptItemGroupPresentationEligibilityDidChange:(id)arg1 ;
-(id)transcriptItemsAtIndexes:(id)arg1 ;
-(int)discardedItemCount;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SV0*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)setDataSource:(id<SVSTranscriptDataSource>)arg1 ;
-(void)setDelegate:(id<SVSTranscriptDelegate>)arg1 ;
-(void)reloadData;
-(id)init;
-(id<SVSTranscriptDataSource>)dataSource;
-(id<SVSTranscriptDelegate>)delegate;
-(void)queue:(id)arg1 didEnqueueObjects:(id)arg2 ;
-(id)lastItem;
@end

