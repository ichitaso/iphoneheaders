/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet, NSString, EKEventStore, NSNumber;

@interface EKOccurrenceCacheSearch : NSObject {

	NSSet* _calendars;
	NSString* _searchTerm;
	EKEventStore* _store;
	/*^block*/ id _callback;
	NSNumber* _replyID;
	bool _canceled;

}
+(id)searchWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(/*^block*/ id)arg4 ;
-(id)searchTerm;
-(id)initWithCalendars:(id)arg1 searchTerm:(id)arg2 store:(id)arg3 callback:(/*^block*/ id)arg4 ;
-(void)dealloc;
-(void)cancel;
-(void)run;
@end

