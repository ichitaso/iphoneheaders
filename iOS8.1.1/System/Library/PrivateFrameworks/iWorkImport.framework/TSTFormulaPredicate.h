/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@class NSString, NSDate;

@interface TSTFormulaPredicate : NSObject <NSCopying> {

	TSCEFormula* mFormula;
	int mPredicateType;
	int mQualifier1;
	int mQualifier2;
	int mArgIndex0;
	int mArgIndex1;
	int mArgIndex2;
	BOOL mParamsAreDone;
	int mNodeTag0;
	int mNodeTag1;
	int mNodeTag2;
	double mNumberParam1;
	double mNumberParam2;
	NSString* mStringParam1;
	NSDate* mDateTimeParam1;
	NSDate* mDateTimeParam2;
	TSCENumberValue* mDurationParam1;
	TSCENumberValue* mDurationParam2;
	SCD_Struct_TS545 mCrossTableRefParam0;
	SCD_Struct_TS545 mCrossTableRefParam1;
	SCD_Struct_TS545 mCrossTableRefParam2;
	SCD_Struct_TS546 mCrossTableRowRefParam0;
	SCD_Struct_TS546 mCrossTableRowRefParam1;
	SCD_Struct_TS546 mCrossTableRowRefParam2;
	SCD_Struct_TS547 mCrossTableColumnRefParam0;
	SCD_Struct_TS547 mCrossTableColumnRefParam1;
	SCD_Struct_TS547 mCrossTableColumnRefParam2;
	SCD_Struct_TS550* mPredicateArgs[2];

}
+(BOOL)isThresholdNeededForType:(int)arg1 ;
-(void)encodeToArchive:(FormulaPredicateArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FormulaPredicateArchive*)arg1 ;
-(id)copyByRemappingFormulaIDsWithMap:(CFDictionaryRef)arg1 calcEngine:(id)arg2 error:(BOOL*)arg3 ;
-(double)numberParam1;
-(int)predicateType;
-(int)qualifier1;
-(id)initWithLiteralTextType:(int)arg1 string:(id)arg2 argumentCellReference:(SCD_Struct_TS282*)arg3 hostCell:(SCD_Struct_TS272)arg4 ;
-(id)initWithLiteralDateType:(int)arg1 date1:(id)arg2 date2:(id)arg3 number1:(double)arg4 number2:(double)arg5 qualifier1:(int)arg6 qualifier2:(int)arg7 argumentCellReference:(SCD_Struct_TS282*)arg8 hostCell:(SCD_Struct_TS272)arg9 ;
-(id)initWithLiteralDurationType:(int)arg1 duration1:(TSTDurationWrapper)arg2 duration2:(TSTDurationWrapper)arg3 qualifier:(int)arg4 argumentCellReference:(SCD_Struct_TS282*)arg5 hostCell:(SCD_Struct_TS272)arg6 ;
-(id)initWithLiteralNumberType:(int)arg1 number1:(double)arg2 number2:(double)arg3 qualifier:(int)arg4 argumentCellReference:(SCD_Struct_TS282*)arg5 hostCell:(SCD_Struct_TS272)arg6 ;
-(BOOL)evaluateAtCellID:(SCD_Struct_TS272)arg1 inFormulaOwner:(CFUUIDRef)arg2 calculationEngine:(id)arg3 ;
-(id)stringParam1;
-(id)dateTimeParam1;
-(TSCENumberValue*)durationParam1;
-(double)numberParam2;
-(id)dateTimeParam2;
-(int)qualifier2;
-(TSCENumberValue*)durationParam2;
-(void)p_clearDerivedVariables;
-(BOOL)p_isEqualForNonFormulaItems:(id)arg1 ;
-(SCD_Struct_TS551*)predicateArg1atHostCoordinate:(SCD_Struct_TS272)arg1 ;
-(BOOL)p_predicateArg:(SCD_Struct_TS551*)arg1 isEqual:(SCD_Struct_TS551*)arg2 ;
-(SCD_Struct_TS551*)predicateArg2atHostCoordinate:(SCD_Struct_TS272)arg1 ;
-(void)p_appendASTForPeriodBoundary:(TSCEASTNodeArray*)arg1 scale:(int)arg2 direction:(int)arg3 offset:(SCD_Struct_TS551*)arg4 offsetParamIndex:(int*)arg5 numNodes:(int*)arg6 earlierBound:(BOOL)arg7 isCalPers:(BOOL)arg8 hostCell:(SCD_Struct_TS272)arg9 ;
-(id)initWithPredicateType:(int)arg1 arg1:(SCD_Struct_TS551*)arg2 arg2:(SCD_Struct_TS551*)arg3 qualifier1:(int)arg4 qualifier2:(int)arg5 argumentCellReference:(SCD_Struct_TS282*)arg6 hostCell:(SCD_Struct_TS272)arg7 ;
-(void)p_setPredicateType:(int)arg1 ;
-(void)p_setQualifier1:(int)arg1 ;
-(void)p_setQualifier2:(int)arg1 ;
-(void)p_setParamIndex0:(int)arg1 ;
-(void)p_setParamIndex1:(int)arg1 ;
-(void)p_setParamIndex2:(int)arg1 ;
-(const SCD_Struct_TS552*)crossTableRefParam0;
-(const SCD_Struct_TS552*)crossTableRefParam1;
-(const SCD_Struct_TS552*)crossTableRefParam2;
-(int)nodeTag0;
-(int)p_argTypeForNodeTag:(int)arg1 argNum:(unsigned long long)arg2 calculationEngine:(id)arg3 hostCell:(SCD_Struct_TS272)arg4 ;
-(int)nodeTag1;
-(int)nodeTag2;
-(BOOL)p_testDataTypesForArg0:(int)arg1 arg1:(int)arg2 arg2:(int)arg3 predShouldReturn:(BOOL*)arg4 ;
-(void)p_populateMembersFromFormula;
-(BOOL)isEqualForInspector:(id)arg1 atHostCoordinate:(SCD_Struct_TS272)arg2 ;
-(id)initWithLiteralCellType:(int)arg1 argumentCellReference:(SCD_Struct_TS282*)arg2 hostCell:(SCD_Struct_TS272)arg3 ;
-(const SCD_Struct_TS553*)crossTableColumnRefParam0;
-(const SCD_Struct_TS553*)crossTableColumnRefParam1;
-(const SCD_Struct_TS553*)crossTableColumnRefParam2;
-(const SCD_Struct_TS546*)crossTableRowRefParam0;
-(const SCD_Struct_TS546*)crossTableRowRefParam1;
-(const SCD_Struct_TS546*)crossTableRowRefParam2;
-(id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(SCD_Struct_TS272)arg3 ;
-(id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSCEFormula*)formula;
-(void)setFormula:(const TSCEFormula*)arg1 ;
@end

