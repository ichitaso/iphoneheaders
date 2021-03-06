/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFBufferedQueue.h>

@class MFLibraryIMAPStore, MFIMAPConnection, NSString, NSMutableArray, NSArray;

@interface MFBaseSyncResponseQueue : MFBufferedQueue {

	MFLibraryIMAPStore* _store;
	MFIMAPConnection* _connection;
	NSString* _url;
	unsigned long long _currentUID;
	NSMutableArray* _missingUIDs;
	NSArray* _libraryDetails;
	bool _shouldCompact;
	bool _shouldFetch;
	bool _isSearching;

}
-(void)dealloc;
-(id)init;
-(unsigned long long)uidForItem:(id)arg1 ;
-(bool)shouldSyncFlags;
-(unsigned long long)flagsForItem:(id)arg1 ;
-(id)sequenceIdentifierForItem:(id)arg1 ;
-(bool)handleItems:(id)arg1 ;
@end

