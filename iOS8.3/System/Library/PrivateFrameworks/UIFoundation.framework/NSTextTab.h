/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:55:47 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSCopying.h>
#import <UIFoundation/NSCoding.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding> {

	struct {
		unsigned alignment : 4;
		unsigned refCount : 24;
		unsigned unused : 4;
	}  _flags;
	float _location;
	id _reserved;

}

@property (readonly) int alignment; 
@property (readonly) float location; 
@property (readonly) NSDictionary * options; 
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)columnTerminatorsForLocale:(id)arg1 ;
-(id)retain;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(int)alignment;
-(float)location;
-(NSDictionary *)options;
-(oneway void)release;
-(unsigned)tabStopType;
-(id)initWithType:(unsigned)arg1 location:(float)arg2 ;
-(id)initWithTextAlignment:(int)arg1 location:(float)arg2 options:(id)arg3 ;
@end
