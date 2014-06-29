/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <BackBoardServices/BKSXPCCoding.h>

@class NSDate;

@interface BKSWorkspaceActivationToken : NSObject <NSCopying, BKSXPCCoding> {

	NSDate* _timestamp;

}

@property (nonatomic,retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)timestamp;
-(void)setTimestamp:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)shortDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
@end
