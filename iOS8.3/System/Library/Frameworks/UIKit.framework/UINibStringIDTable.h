/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UINibStringIDTable : NSObject {

	UIStringIDTableBucket* table;
	UIStringIDTableBucket* buckets;
	unsigned hashMask;
	unsigned count;

}
-(void)dealloc;
-(int)count;
-(char)lookupKey:(id)arg1 identifier:(int*)arg2 ;
-(id)initWithKeysTransferingOwnership:(id*)arg1 count:(unsigned)arg2 ;
@end

