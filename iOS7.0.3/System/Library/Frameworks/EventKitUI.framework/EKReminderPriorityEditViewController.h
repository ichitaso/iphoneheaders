/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView;

@interface EKReminderPriorityEditViewController : EKEditItemViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	unsigned _priority;

}

@property (assign,nonatomic) unsigned priority;              //@synthesize priority=_priority - In the implementation block
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(void).cxx_destruct;
@end
