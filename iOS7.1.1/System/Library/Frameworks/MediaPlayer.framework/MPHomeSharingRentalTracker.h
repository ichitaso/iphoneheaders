/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject {

	NSObject<OS_dispatch_queue>* _rentalTrackerQueue;
	NSMutableDictionary* _rentals;

}
+(id)sharedInstance;
-(void)removeAllRentalsForDatabaseID:(id)arg1 ;
-(void)_saveRentals;
-(void)removeRentalWithItemID:(unsigned long long)arg1 ;
-(void)addRentalWithItemID:(unsigned long long)arg1 databaseID:(id)arg2 ;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
@end

