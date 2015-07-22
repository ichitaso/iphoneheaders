/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface BreadcrumbMessage : NSObject {

	unsigned long long _timeStamp;
	NSString* _name;
	unsigned long long _activityID;

}

@property (readonly) unsigned long long timeStamp;               //@synthesize timeStamp=_timeStamp - In the implementation block
@property (retain,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long activityID;              //@synthesize activityID=_activityID - In the implementation block
-(id)initWithTimeStamp:(unsigned long long)arg1 name:(const char*)arg2 activityID:(unsigned long long)arg3 ;
-(unsigned long long)activityID;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)timeStamp;
@end
