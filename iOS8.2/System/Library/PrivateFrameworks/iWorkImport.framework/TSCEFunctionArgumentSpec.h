/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, TSCEFunctionSpec;

@interface TSCEFunctionArgumentSpec : NSObject {

	int mArgumentType;
	char mForceArrayMode;
	double mMinValue;
	double mMaxValue;
	char mDisallowDuration;
	char mDisallowCurrency;
	short mIndex;
	int mAccessorMode;
	int mArgumentContext;
	int mRangeContext;
	NSArray* mDisallowedTypes;
	vector<TSCEValue, std::__1::allocator<TSCEValue> >* mModeValues;
	short mDefaultModeIndex;
	TSCEFunctionSpec* mFunctionSpec;
	char mMinInclusive;
	char mMaxInclusive;
	char mIsInteger;
	char mReferenceForGeometryOnly;

}

@property (nonatomic,readonly) short defaultModeIndex; 
@property (assign,nonatomic) TSCEFunctionSpec * functionSpec; 
@property (nonatomic,readonly) vector<TSCEValue* modeValues; 
+(id)argumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(int)arg6 minValue:(double)arg7 minInclusive:(char)arg8 maxValue:(double)arg9 maxInclusive:(char)arg10 isInteger:(char)arg11 disallowDuration:(char)arg12 disallowCurrency:(char)arg13 modeValues:(vector<TSCEValue, std::__1::allocator<TSCEValue> >*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(char)arg16 forceArrayMode:(char)arg17 ;
-(int)accessorMode;
-(int)preferredType;
-(int)argumentContext;
-(char)disallowCurrency;
-(char)disallowDuration;
-(void)setFunctionSpec:(TSCEFunctionSpec *)arg1 ;
-(id)localizedFunctionName;
-(id)disallowedTypes;
-(int)rangeContext;
-(char)minInclusive;
-(char)maxInclusive;
-(vector<TSCEValue*)modeValues;
-(short)defaultModeIndex;
-(char)referenceForGeometryOnly;
-(char)forceArrayMode;
-(id)initArgumentSpecWithIndex:(short)arg1 type:(int)arg2 accessorMode:(int)arg3 disallowedTypes:(id)arg4 argumentContext:(int)arg5 rangeContext:(int)arg6 minValue:(double)arg7 minInclusive:(char)arg8 maxValue:(double)arg9 maxInclusive:(char)arg10 isInteger:(char)arg11 disallowDuration:(char)arg12 disallowCurrency:(char)arg13 modeValues:(vector<TSCEValue, std::__1::allocator<TSCEValue> >*)arg14 defaultModeIndex:(short)arg15 referenceForGeometryOnly:(char)arg16 forceArrayMode:(char)arg17 ;
-(id)nativeSyntaxString;
-(id)localizedToolTipString;
-(char)isMode;
-(short)numModes;
-(int)indexForModeValue:(TSCEValue*)arg1 ;
-(TSCEValue)valueForModeIndex:(short)arg1 ;
-(id)localizedArgumentName;
-(int)indexForModeString:(id)arg1 ;
-(int)indexForModeNumber:(double)arg1 ;
-(int)indexForModeBool:(char)arg1 ;
-(id)nativeSyntaxStringForModeIndex:(short)arg1 ;
-(id)localizedModeNameForModeIndex:(short)arg1 ;
-(id)localizedModeToolTipStringForModeIndex:(short)arg1 ;
-(id)localizedModeMenuItemStringForModeIndex:(short)arg1 ;
-(char)typeIsDisallowed:(int)arg1 value:(TSCEValue*)arg2 ;
-(TSCEFunctionSpec *)functionSpec;
-(char)isOptional;
-(double)maxValue;
-(void)dealloc;
-(double)minValue;
-(short)index;
-(char)isInteger;
@end

