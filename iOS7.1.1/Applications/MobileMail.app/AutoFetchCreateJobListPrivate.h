/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSMutableDictionary;

@interface AutoFetchCreateJobListPrivate : NSObject {

	NSMutableArray* _jobList;
	NSArray* _visibleUids;
	NSArray* _accounts;
	NSMutableDictionary* _accountResponsiveness;
	BOOL _isUserRequested;
	BOOL _isForegroundRequest;
	BOOL _shouldGrowFetchWindow;

}

@property (nonatomic,readonly) NSArray * jobList;              //@synthesize jobList=_jobList - In the implementation block
-(id)initForVisibleUids:(id)arg1 accounts:(id)arg2 accountResponsiveness:(id)arg3 fetchType:(int)arg4 ;
-(id)jobList;
-(void)dealloc;
-(void)run;
@end

