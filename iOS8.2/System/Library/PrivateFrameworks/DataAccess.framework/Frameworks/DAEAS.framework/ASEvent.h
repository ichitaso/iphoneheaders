/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASChangedCollectionLeaf.h>
#import <DAEAS/NSCoding.h>
#import <DAEAS/DADataElement.h>

@class ASTimeZone, NSNumber, NSString, NSArray, NSDate, ASEventUID, ASRecurrence, NSCalendarDate;

@interface ASEvent : ASChangedCollectionLeaf <NSCoding, DADataElement> {

	char _calculateNextStatusAsIfMeetingRequest;
	char _shouldUpdateStatus;
	char _cachedOrganizerIsSelf;
	char _haveCheckedOrganizerEmail;
	char _isAttendeeUpdateOnly;
	char _isDTStampUpdateOnly;
	void* _calEvent;
	ASTimeZone* _timeZone;
	NSNumber* _allDayEvent;
	NSString* _body;
	NSNumber* _bodyTruncated;
	NSNumber* _busyStatus;
	NSArray* _categories;
	NSDate* _dTStamp;
	NSDate* _endTime;
	NSString* _location;
	NSNumber* _meetingStatus;
	NSString* _organizerEmail;
	NSString* _organizerName;
	NSNumber* _reminderMinsBefore;
	NSNumber* _sensitivity;
	NSString* _subject;
	NSDate* _startTime;
	NSArray* _from;
	NSDate* _tombstoneEndTime;
	ASEventUID* _eventUID;
	NSArray* _attendees;
	NSArray* _attendeesPendingDeletion;
	ASRecurrence* _recurrence;
	NSArray* _exceptions;
	NSNumber* _responseRequested;
	NSNumber* _responseType;
	NSDate* _appointmentReplyTime;
	int _meetingResponseToEmailAbout;

}

@property (nonatomic,readonly) int calAttendeeStatus; 
@property (nonatomic,readonly) int calAttendeePendingStatus; 
@property (nonatomic,readonly) int CalCalendarItemStatus; 
@property (nonatomic,readonly) NSCalendarDate * startDateForCalFramework; 
@property (nonatomic,readonly) NSCalendarDate * endDateForCalFramework; 
@property (nonatomic,readonly) NSString * uidForCalFramework; 
@property (nonatomic,retain) NSDate * exceptionDate; 
@property (nonatomic,readonly) char hasOccurrenceInTheFuture; 
@property (nonatomic,readonly) char isTombstoneEndTimeInFuture; 
@property (assign,nonatomic) int meetingResponseForEmail; 
@property (assign,nonatomic) void* calEvent;                                           //@synthesize calEvent=_calEvent - In the implementation block
@property (nonatomic,retain) ASTimeZone * timeZone;                                    //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) NSNumber * allDayEvent;                                   //@synthesize allDayEvent=_allDayEvent - In the implementation block
@property (nonatomic,retain) NSString * body;                                          //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSNumber * bodyTruncated;                                 //@synthesize bodyTruncated=_bodyTruncated - In the implementation block
@property (nonatomic,retain) NSNumber * busyStatus;                                    //@synthesize busyStatus=_busyStatus - In the implementation block
@property (nonatomic,retain) NSArray * categories;                                     //@synthesize categories=_categories - In the implementation block
@property (nonatomic,retain) NSDate * dTStamp;                                         //@synthesize dTStamp=_dTStamp - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSString * location;                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSNumber * meetingStatus;                                 //@synthesize meetingStatus=_meetingStatus - In the implementation block
@property (nonatomic,retain) NSString * organizerEmail;                                //@synthesize organizerEmail=_organizerEmail - In the implementation block
@property (nonatomic,retain) NSString * organizerName;                                 //@synthesize organizerName=_organizerName - In the implementation block
@property (nonatomic,retain) NSNumber * reminderMinsBefore;                            //@synthesize reminderMinsBefore=_reminderMinsBefore - In the implementation block
@property (nonatomic,retain) NSNumber * sensitivity;                                   //@synthesize sensitivity=_sensitivity - In the implementation block
@property (nonatomic,retain) NSString * subject;                                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSArray * from;                                           //@synthesize from=_from - In the implementation block
@property (nonatomic,retain) NSDate * tombstoneEndTime;                                //@synthesize tombstoneEndTime=_tombstoneEndTime - In the implementation block
@property (nonatomic,retain) ASEventUID * eventUID;                                    //@synthesize eventUID=_eventUID - In the implementation block
@property (nonatomic,retain) NSArray * attendees;                                      //@synthesize attendees=_attendees - In the implementation block
@property (nonatomic,retain) NSArray * attendeesPendingDeletion;                       //@synthesize attendeesPendingDeletion=_attendeesPendingDeletion - In the implementation block
@property (nonatomic,retain) ASRecurrence * recurrence;                                //@synthesize recurrence=_recurrence - In the implementation block
@property (nonatomic,retain) NSArray * exceptions;                                     //@synthesize exceptions=_exceptions - In the implementation block
@property (nonatomic,retain) NSNumber * responseRequested;                             //@synthesize responseRequested=_responseRequested - In the implementation block
@property (nonatomic,retain) NSNumber * responseType;                                  //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,retain) NSDate * appointmentReplyTime;                            //@synthesize appointmentReplyTime=_appointmentReplyTime - In the implementation block
@property (assign,nonatomic) int meetingResponseToEmailAbout;                          //@synthesize meetingResponseToEmailAbout=_meetingResponseToEmailAbout - In the implementation block
@property (assign,nonatomic) char calculateNextStatusAsIfMeetingRequest;               //@synthesize calculateNextStatusAsIfMeetingRequest=_calculateNextStatusAsIfMeetingRequest - In the implementation block
@property (assign,nonatomic) char shouldUpdateStatus;                                  //@synthesize shouldUpdateStatus=_shouldUpdateStatus - In the implementation block
@property (assign,nonatomic) char cachedOrganizerIsSelf;                               //@synthesize cachedOrganizerIsSelf=_cachedOrganizerIsSelf - In the implementation block
@property (assign,nonatomic) char haveCheckedOrganizerEmail;                           //@synthesize haveCheckedOrganizerEmail=_haveCheckedOrganizerEmail - In the implementation block
@property (assign,nonatomic) char isAttendeeUpdateOnly;                                //@synthesize isAttendeeUpdateOnly=_isAttendeeUpdateOnly - In the implementation block
@property (assign,nonatomic) char isDTStampUpdateOnly;                                 //@synthesize isDTStampUpdateOnly=_isDTStampUpdateOnly - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
+(void)setSystemTimeZoneNameForUnitTests:(id)arg1 ;
+(id)eventWithCalEvent:(void*)arg1 serverID:(id)arg2 account:(id)arg3 ;
+(void)_setFakeDTStampDateForUnitTests:(id)arg1 ;
-(NSArray *)attendees;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setTimeZone:(ASTimeZone *)arg1 ;
-(NSString *)body;
-(NSString *)location;
-(NSArray *)categories;
-(ASTimeZone *)timeZone;
-(void)setSubject:(NSString *)arg1 ;
-(NSDate *)startTime;
-(NSString *)subject;
-(void)setBody:(NSString *)arg1 ;
-(NSArray *)from;
-(void)setFrom:(NSArray *)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(ASEventUID *)eventUID;
-(void)setEventUID:(ASEventUID *)arg1 ;
-(NSString *)uidForCalFramework;
-(NSDate *)exceptionDate;
-(void)setExceptionDate:(NSDate *)arg1 ;
-(void)setSensitivity:(NSNumber *)arg1 ;
-(void)setRecurrence:(ASRecurrence *)arg1 ;
-(ASRecurrence *)recurrence;
-(NSNumber *)sensitivity;
-(void)postProcessApplicationData;
-(void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(char)saveToCalendarWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 account:(id)arg5 ;
-(char)loadCalRecordForAccount:(id)arg1 ;
-(char)saveServerIDToCalendar;
-(char)deleteFromCalendar;
-(char)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 account:(id)arg5 ;
-(void)setLocalItem:(void*)arg1 ;
-(char)loadLocalItemWithAccount:(id)arg1 ;
-(char)saveServerIDToExistingItem;
-(char)deleteFromContainer:(void*)arg1 ;
-(int)dataclass;
-(void)loadClientIDs;
-(NSNumber *)bodyTruncated;
-(void)setBodyTruncated:(NSNumber *)arg1 ;
-(NSNumber *)allDayEvent;
-(id)_transformedStartDateForCalFramework:(id)arg1 ;
-(char)cachedOrganizerIsSelfWithAccount:(id)arg1 ;
-(void)setAllDayEvent:(NSNumber *)arg1 ;
-(id)uidGeneratedIfNecessaryWithLocalEvent:(void*)arg1 ;
-(void)setReminderMinsBefore:(NSNumber *)arg1 ;
-(void)setOrganizerName:(NSString *)arg1 ;
-(void)setOrganizerEmail:(NSString *)arg1 ;
-(id)_transformedStartDateForActiveSync:(id)arg1 isFloating:(char)arg2 ;
-(id)_transformedEndDateForActiveSync:(id)arg1 isFloating:(char)arg2 ;
-(void)setAttendeesPendingDeletion:(NSArray *)arg1 ;
-(void)setExceptions:(NSArray *)arg1 ;
-(void)setBusyStatus:(NSNumber *)arg1 ;
-(void)setDTStamp:(NSDate *)arg1 ;
-(void)setMeetingStatus:(NSNumber *)arg1 ;
-(void)setResponseRequested:(NSNumber *)arg1 ;
-(void)_determineSelfnessWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(void)_loadAttributesFromCalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(void)setCalEvent:(void*)arg1 ;
-(id)initWithCalEvent:(void*)arg1 serverID:(id)arg2 account:(id)arg3 ;
-(void*)calEvent;
-(int)_nextEventStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3 ;
-(int)_nextAttendeeStatusWithOldStatus:(int)arg1 meetingClassType:(int)arg2 account:(id)arg3 ;
-(int)_meetingResponseShouldFilterForEmail:(char)arg1 ;
-(int)calAttendeeStatus;
-(NSDate *)dTStamp;
-(char)_bailIfNotNewestDataForAccount:(id)arg1 ;
-(NSCalendarDate *)endDateForCalFramework;
-(id)timeZoneForCalFramework;
-(NSNumber *)reminderMinsBefore;
-(NSString *)organizerName;
-(NSString *)organizerEmail;
-(NSCalendarDate *)startDateForCalFramework;
-(id)timeZoneNameForCalFramework;
-(char)shouldUseInMemoryAttendeesForAccount:(id)arg1 numExistingAttendees:(unsigned)arg2 ;
-(int)_nextEventStatusWithOldStatus:(int)arg1 account:(id)arg2 ;
-(void*)copySelfAttendeeGeneratedIfNecessaryWithLocalEvent:(void*)arg1 forAccount:(id)arg2 ;
-(int)_nextAttendeeStatusWithOldStatus:(int)arg1 account:(id)arg2 ;
-(NSDate *)appointmentReplyTime;
-(void)_sanitizeLocalExceptionsForAccount:(id)arg1 ;
-(void)setCalculateNextStatusAsIfMeetingRequest:(char)arg1 ;
-(void)setShouldUpdateStatus:(char)arg1 ;
-(void)setResponseType:(NSNumber *)arg1 ;
-(void)setAppointmentReplyTime:(NSDate *)arg1 ;
-(void)informExceptionsThatParentIsReadyForAccount:(id)arg1 ;
-(NSNumber *)busyStatus;
-(int)CalCalendarItemStatus;
-(NSNumber *)meetingStatus;
-(char)verifyExternalIds;
-(id)_transformedEndDateForCalFramework:(id)arg1 startDate:(id)arg2 ;
-(char)hasOccurrenceInTheFuture;
-(NSArray *)attendeesPendingDeletion;
-(NSArray *)exceptions;
-(char)_selfIsMoreCorrectThanOtherEvent:(id)arg1 account:(id)arg2 ;
-(id)eventByMergingInLosingEvent:(id)arg1 account:(id)arg2 ;
-(int)calAttendeePendingStatus;
-(int)meetingResponseForAccount:(id)arg1 ;
-(int)selfAttendeeMeetingResponse;
-(int)meetingResponseForEmail;
-(void)setMeetingResponseForEmail:(int)arg1 ;
-(char)saveDetachedEventsWithExistingRecord:(void*)arg1 intoCalendar:(void*)arg2 shouldMergeProperties:(char)arg3 outMergeDidChooseLocalProperties:(char*)arg4 account:(id)arg5 ;
-(char)fillOutMissingExternalIds;
-(id)fullOrganizerString;
-(char)purgeAttendeesPendingDeletion;
-(char)isTombstoneEndTimeInFuture;
-(char)isEqualToEvent:(id)arg1 ;
-(id)eventByMergingInEvent:(id)arg1 account:(id)arg2 ;
-(NSDate *)tombstoneEndTime;
-(void)setTombstoneEndTime:(NSDate *)arg1 ;
-(NSNumber *)responseRequested;
-(int)meetingResponseToEmailAbout;
-(void)setMeetingResponseToEmailAbout:(int)arg1 ;
-(char)calculateNextStatusAsIfMeetingRequest;
-(char)shouldUpdateStatus;
-(char)cachedOrganizerIsSelf;
-(void)setCachedOrganizerIsSelf:(char)arg1 ;
-(char)haveCheckedOrganizerEmail;
-(void)setHaveCheckedOrganizerEmail:(char)arg1 ;
-(char)isAttendeeUpdateOnly;
-(void)setIsAttendeeUpdateOnly:(char)arg1 ;
-(char)isDTStampUpdateOnly;
-(void)setIsDTStampUpdateOnly:(char)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(NSNumber *)responseType;
-(NSDate *)endTime;
@end

