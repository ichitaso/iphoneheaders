/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkSuggestionSource.h>

@class EKEventStore;

@interface StarkEvents : StarkSuggestionSource {

	EKEventStore* _eventStore;
	unsigned _entityType;

}
-(void)requestForLocation:(id)arg1 timePeriod:(id)arg2 suggestionHandler:(/*^block*/ id)arg3 finishedHandler:(/*^block*/ id)arg4 ;
-(id)initWithEntityType:(unsigned)arg1 eventStore:(id)arg2 ;
-(void)_handleEvent:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_handleReminder:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)_clLocationForEKStructuredLocation:(id)arg1 ;
-(id)_addressDictionaryForLocationString:(id)arg1 ;
-(void)_handleSortedCalendarItems:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_fetchCalendarEventsWithPredicate:(id)arg1 timePeriod:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)_fetchReminderEventsWithPredicate:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_requestCalendarEventsMatchTimePeriod:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_requestReminderEventsMatchTimePeriod:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_handleEventMapItem:(id)arg1 location:(id)arg2 suggestionType:(int)arg3 eventTitle:(id)arg4 eventURL:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 dispatchGroup:(id)arg8 handler:(/*^block*/ id)arg9 ;
-(void)_requestEventsMatchingTimePeriod:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void).cxx_destruct;
@end

