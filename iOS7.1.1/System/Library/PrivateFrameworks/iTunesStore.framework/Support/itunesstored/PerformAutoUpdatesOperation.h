/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface PerformAutoUpdatesOperation : ISOperation {

	NSArray* _updates;

}
-(id)updates;
-(id)_newUpdateWithStoreItemData:(id)arg1 ;
-(id)_purchaseWithSoftwareUpdate:(id)arg1 ;
-(void)_scheduleCellularTransitionsAfterTime:(double)arg1 ;
-(id)_newBTAJobWithStartTime:(double)arg1 interval:(double)arg2 ;
-(id)initWithUpdates:(id)arg1 ;
-(void)dealloc;
-(void)run;
@end
