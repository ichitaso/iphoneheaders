/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShadow.h>

@interface TSDDropShadow : TSDShadow
+(id)instanceWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(ShadowArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const ShadowArchive*)arg1 unarchiver:(id)arg2 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)initWithAngle:(float)arg1 offset:(float)arg2 radius:(float)arg3 opacity:(float)arg4 color:(CGColorRef)arg5 enabled:(char)arg6 ;
-(id)newShadowClampedForSwatches;
-(CGRect)boundsInNaturalSpaceForRep:(id)arg1 ;
-(CGRect)boundsForRep:(id)arg1 ;
-(CGImageRef)newShadowImageForRep:(id)arg1 withSize:(CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(char)arg4 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)shadowType;
@end

