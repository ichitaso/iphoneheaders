/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSURLKeyValuePair : NSObject {

	id key;
	id value;
	unsigned hash;

}
+(id)pairWithKey:(id)arg1 value:(id)arg2 ;
+(id)pair;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)key;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setKey:(id)arg1 ;
@end
