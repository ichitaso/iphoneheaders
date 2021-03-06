/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKPersistentCalendarItem.h>

@class EKObjectID, NSDate, NSTimeZone;

@interface EKPersistentReminder : EKPersistentCalendarItem {

	EKObjectID* _parentID;

}

@property (nonatomic,copy) NSDate * dueDate; 
@property (nonatomic,copy) NSTimeZone * dueDateTimeZone; 
@property (assign,nonatomic) BOOL dueDateAllDay; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (nonatomic,copy) NSDate * completionDate; 
@property (assign,nonatomic) unsigned long long displayOrder; 
@property (nonatomic,copy) EKObjectID * parentID;                            //@synthesize parentID=_parentID - In the implementation block
+(id)generateUniqueIDWithReminder:(id)arg1 calendar:(id)arg2 ;
-(void)setCompleted:(BOOL)arg1 ;
-(unsigned long long)displayOrder;
-(void)setDisplayOrder:(unsigned long long)arg1 ;
-(id)externalURI;
-(void)_sendModifiedNote;
-(NSDate *)dueDate;
-(NSTimeZone *)dueDateTimeZone;
-(BOOL)dueDateAllDay;
-(NSDate *)completionDate;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(void)setDueDate:(NSDate *)arg1 ;
-(void)setDueDateTimeZone:(NSTimeZone *)arg1 ;
-(void)setDueDateAllDay:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(int)entityType;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKObjectID *)parentID;
-(void)setParentID:(EKObjectID *)arg1 ;
-(BOOL)validate:(id*)arg1 ;
@end

