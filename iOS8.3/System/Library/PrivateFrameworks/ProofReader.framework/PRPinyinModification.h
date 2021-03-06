/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:19:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRModification.h>

@class NSString;

@interface PRPinyinModification : PRModification {

	NSRange _range;
	NSString* _replacementString;
	unsigned _modificationType;
	NSRange _syllableRange;
	NSRange _additionalSyllableRange;
	double _modificationScore;
	unsigned _syllableCountScore;
	unsigned char _letters[7];
	char _producesPartialSyllable;
	char _isTemporary;

}
+(id)modificationsForInputString:(id)arg1 ;
+(id)finalModificationsForInputString:(id)arg1 ;
-(char)isTemporary;
-(id)replacementString;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(char)arg9 ;
-(unsigned)syllableCountScore;
-(char)producesPartialSyllable;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(char)arg8 ;
-(NSRange)combinedSyllableRange;
-(char)_shouldAppendLetter:(unsigned char)arg1 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(char)arg9 isTemporary:(char)arg10 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(char)arg8 isTemporary:(char)arg9 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 isTemporary:(char)arg6 ;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 ;
-(unsigned)modificationType;
-(NSRange)syllableRange;
-(double)modificationScore;
-(NSRange)additionalSyllableRange;
@end

