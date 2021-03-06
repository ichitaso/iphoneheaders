/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:57 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCObjectLight.h>

@class NSString;

@interface MCAction : MCObjectLight {

	unsigned long _flags;
	NSString* _targetObjectID;

}

@property (copy) NSString * targetObjectID;                    //@synthesize targetObjectID=_targetObjectID - In the implementation block
@property (assign,nonatomic) char tracksInParent; 
-(id)description;
-(id)snapshot;
-(id)imprint;
-(void)setTargetObjectID:(NSString *)arg1 ;
-(void)demolish;
-(NSString *)targetObjectID;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(char)isSnapshot;
-(id)initWithImprint:(id)arg1 ;
-(char)tracksInParent;
-(void)setTracksInParent:(char)arg1 ;
@end

