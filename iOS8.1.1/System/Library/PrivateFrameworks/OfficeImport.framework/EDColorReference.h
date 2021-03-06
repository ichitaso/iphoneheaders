/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class EDResources;

@interface EDColorReference : NSObject <NSCopying> {

	EDResources* mResources;
	int mSystemColorID;
	unsigned long long mColorIndex;
	unsigned long long mThemeIndex;
	double mTint;

}
+(id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3 ;
+(id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2 ;
+(id)colorReferenceWithResources:(id)arg1 ;
+(id)colorReferenceWithColor:(id)arg1 resources:(id)arg2 ;
-(int)systemColorID;
-(unsigned long long)colorIndex;
-(unsigned long long)themeIndex;
-(double)tint;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(id)initWithResources:(id)arg1 ;
-(id)initWithColor:(id)arg1 resources:(id)arg2 ;
-(BOOL)isEqualToColorReference:(id)arg1 ;
@end

