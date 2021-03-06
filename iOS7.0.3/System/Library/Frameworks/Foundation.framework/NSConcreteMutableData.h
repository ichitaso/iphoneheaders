/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@interface NSConcreteMutableData : NSMutableData {

	unsigned _reserved : 1;
	unsigned _needToZero : 1;
	unsigned _hasVM : 1;
	unsigned _retainCount : 29;
	unsigned _length;
	unsigned _capacity;
	void* _bytes;

}
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)increaseLengthBy:(unsigned)arg1 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/ id)arg4 ;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(void)_freeBytes;
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(id)initWithCapacity:(unsigned)arg1 ;
-(const void*)bytes;
-(void)appendBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)setLength:(unsigned)arg1 ;
-(void)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(id)initWithLength:(unsigned)arg1 ;
-(void)finalize;
@end

