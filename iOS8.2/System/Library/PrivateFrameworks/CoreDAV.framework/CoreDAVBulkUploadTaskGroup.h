/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>

@class NSURL, NSString, NSMutableDictionary, NSDictionary;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {

	NSURL* _folderURL;
	NSString* _lastKnownCTag;
	char _validCTag;
	unsigned _multiPutBatchMaxNumResources;
	unsigned _multiPutBatchMaxSize;
	NSMutableDictionary* _remainingUUIDsToAddActions;
	NSMutableDictionary* _remainingHREFsToModDeleteActions;
	NSMutableDictionary* _uuidToHREF;
	NSMutableDictionary* _hrefToETag;
	NSMutableDictionary* _uuidToErrorItems;
	NSMutableDictionary* _hrefToErrorItems;
	NSMutableDictionary* _uuidToStatus;
	NSMutableDictionary* _hrefToStatus;

}

@property (assign,nonatomic) unsigned multiPutBatchMaxNumResources;              //@synthesize multiPutBatchMaxNumResources=_multiPutBatchMaxNumResources - In the implementation block
@property (assign,nonatomic) unsigned multiPutBatchMaxSize;                      //@synthesize multiPutBatchMaxSize=_multiPutBatchMaxSize - In the implementation block
@property (nonatomic,readonly) NSURL * folderURL;                                //@synthesize folderURL=_folderURL - In the implementation block
@property (nonatomic,readonly) char validCTag;                                   //@synthesize validCTag=_validCTag - In the implementation block
@property (nonatomic,retain) NSString * nextCTag;                                //@synthesize lastKnownCTag=_lastKnownCTag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToHREF;                        //@synthesize uuidToHREF=_uuidToHREF - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToETag;                        //@synthesize hrefToETag=_hrefToETag - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToStatus;                      //@synthesize uuidToStatus=_uuidToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToStatus;                      //@synthesize hrefToStatus=_hrefToStatus - In the implementation block
@property (nonatomic,readonly) NSDictionary * uuidToErrorItems;                  //@synthesize uuidToErrorItems=_uuidToErrorItems - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefToErrorItems;                  //@synthesize hrefToErrorItems=_hrefToErrorItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)_sendNextBatch;
-(NSString *)nextCTag;
-(void)setNextCTag:(NSString *)arg1 ;
-(void)syncAway;
-(NSURL *)folderURL;
-(Class)multiPutTaskClass;
-(NSDictionary *)uuidToHREF;
-(NSDictionary *)hrefToETag;
-(NSDictionary *)uuidToErrorItems;
-(NSDictionary *)hrefToErrorItems;
-(NSDictionary *)uuidToStatus;
-(NSDictionary *)hrefToStatus;
-(id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 ;
-(unsigned)multiPutBatchMaxNumResources;
-(void)setMultiPutBatchMaxNumResources:(unsigned)arg1 ;
-(unsigned)multiPutBatchMaxSize;
-(void)setMultiPutBatchMaxSize:(unsigned)arg1 ;
-(char)validCTag;
@end

