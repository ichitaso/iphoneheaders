/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCharacterSet.h>

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {

	NSCharacterSet* _original;
	NSCharacterSet* _invertedSet;
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	}  _flags;

}
-(id)replacementObjectForCoder:(id)arg1 ;
-(char)longCharacterIsMember:(unsigned long)arg1 ;
-(char)hasMemberInPlane:(unsigned char)arg1 ;
-(CFCharacterSetRef)_expandedCFCharacterSet;
-(id)bitmapRepresentation;
-(char)isSupersetOfSet:(id)arg1 ;
-(id)initWithSet:(id)arg1 options:(unsigned)arg2 ;
-(void)_expandInverted;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(id)retain;
-(void)dealloc;
-(id)autorelease;
-(char)isEqual:(id)arg1 ;
-(unsigned)retainCount;
-(char)isEmpty;
-(char)_tryRetain;
-(char)_isDeallocating;
-(char)characterIsMember:(unsigned short)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)invertedSet;
@end
