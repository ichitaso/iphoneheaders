/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADProperties.h>
#import <CoreFoundation/NSCopying.h>

@class OADColor, OADFill, OADDash, OADLineJoin, OADLineEnd;

@interface OADStroke : OADProperties <NSCopying> {

	OADColor* mColor;
	OADFill* mFill;
	OADDash* mDash;
	OADLineJoin* mJoin;
	OADLineEnd* mHead;
	OADLineEnd* mTail;
	float mWidth;
	unsigned char mCap;
	unsigned char mCompoundType;
	unsigned char mPenAlignment;
	unsigned mIsColorOverridden : 1;
	unsigned mIsCompoundTypeOverridden : 1;
	unsigned mIsCapOverridden : 1;
	unsigned mIsWidthOverridden : 1;
	unsigned mIsJoinOverridden : 1;
	unsigned mIsDashOverridden : 1;
	unsigned mIsFillOverridden : 1;
	unsigned mIsPenAlignmentOverridden : 1;

}

@property (nonatomic,retain) OADLineEnd * head; 
@property (nonatomic,retain) OADLineEnd * tail; 
+(id)nullStroke;
+(id)blackStroke;
+(id)defaultProperties;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)fill;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(BOOL)isWidthOverridden;
-(BOOL)isColorOverridden;
-(BOOL)isFillOverridden;
-(BOOL)isDashOverridden;
-(id)dash;
-(BOOL)isCompoundTypeOverridden;
-(int)compoundType;
-(void)setFill:(id)arg1 ;
-(id)tail;
-(void)setDash:(id)arg1 ;
-(int)cap;
-(void)setCap:(int)arg1 ;
-(void)setJoin:(id)arg1 ;
-(void)setCompoundType:(int)arg1 ;
-(id)join;
-(id)initWithDefaults;
-(void)setStyleColor:(id)arg1 ;
-(void)setPenAlignment:(int)arg1 ;
-(void)setHead:(id)arg1 ;
-(void)setTail:(id)arg1 ;
-(BOOL)isJoinOverridden;
-(BOOL)isCapOverridden;
-(BOOL)isPenAlignmentOverridden;
-(int)penAlignment;
-(id)head;
-(void)setParent:(id)arg1 ;
@end

