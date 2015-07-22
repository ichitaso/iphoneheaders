/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUReportingEvent.h>

@class SSVPlayActivityEvent, NSString;

@interface MPUReportingPlaybackSessionIDChangeEvent : NSObject <MPUReportingEvent> {

	SSVPlayActivityEvent* _playActivityEvent;
	NSString* _playbackSessionID;

}

@property (nonatomic,copy) SSVPlayActivityEvent * playActivityEvent;              //@synthesize playActivityEvent=_playActivityEvent - In the implementation block
@property (nonatomic,copy) NSString * playbackSessionID;                          //@synthesize playbackSessionID=_playbackSessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)playbackSessionID;
-(NSString *)description;
-(BOOL)isValidReportingEvent;
-(void)setPlayActivityEvent:(SSVPlayActivityEvent *)arg1 ;
-(void)setPlaybackSessionID:(NSString *)arg1 ;
-(unsigned long long)reportingEventType;
-(SSVPlayActivityEvent *)playActivityEvent;
@end
