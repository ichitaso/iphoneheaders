/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/ML3TrackInsertionDataSource.h>

@class NSData, NSArray;

@interface HSDAAPML3TrackDataSource : NSObject <ML3TrackInsertionDataSource> {

	NSData* _itemsResponseData;
	NSArray* _rawItems;
	int _idx;

}
-(unsigned)itemCount;
-(void)dealloc;
-(void)invalidate;
-(id)initWithItemsResponseData:(id)arg1 ;
-(id)createImportItem;
-(id)importItemAtIndex:(unsigned)arg1 ;
@end

