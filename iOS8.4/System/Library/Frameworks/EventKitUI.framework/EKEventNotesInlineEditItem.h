/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>
#import <UIKit/UITextViewDelegate.h>
#import <EventKitUI/EKCalendarItemInlineEditItem.h>

@class CalendarNotesCell, NSString;

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate, EKCalendarItemInlineEditItem> {

	CalendarNotesCell* _cell;
	NSString* _lastTextChange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)isInline;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(void)reset;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)isSaveable;
@end

