/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessExpress/DADisableableObject.h>
#import <DALDAP/DATask.h>

@protocol OS_ldap_connection;
@class DATaskManager, NSObject, NSDate, NSString;

@interface LDAPTask : DADisableableObject <DATask> {

	char _isFinished;
	DATaskManager* _taskManager;
	id _delegate;
	NSObject*<OS_ldap_connection> _ldConnection;
	NSDate* _dateConnectionWentOut;

}

@property (assign,nonatomic,__weak) DATaskManager * taskManager;                      //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_ldap_connection> ldConnection;              //@synthesize ldConnection=_ldConnection - In the implementation block
@property (nonatomic,retain) NSDate * dateConnectionWentOut;                          //@synthesize dateConnectionWentOut=_dateConnectionWentOut - In the implementation block
@property (assign,nonatomic) char isFinished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,readonly) int numDownloadedElements; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(char)isFinished;
-(void)finishWithError:(id)arg1 ;
-(void)setIsFinished:(char)arg1 ;
-(void)reportStatusWithError:(id)arg1 ;
-(int)numDownloadedElements;
-(DATaskManager *)taskManager;
-(int)taskStatusForError:(id)arg1 ;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2 ;
-(char)shouldHoldPowerAssertion;
-(void)setTaskManager:(DATaskManager *)arg1 ;
-(void)setDateConnectionWentOut:(NSDate *)arg1 ;
-(id)daLevelErrorForLDAPError:(int)arg1 ;
-(void)setLdConnection:(NSObject*<OS_ldap_connection>)arg1 ;
-(NSObject*<OS_ldap_connection>)ldConnection;
-(void)_performQuery;
-(void)initializeConnection;
-(NSDate *)dateConnectionWentOut;
-(void)disable;
@end

