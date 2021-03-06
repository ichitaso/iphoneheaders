/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNChartFormulaWrapper : NSObject {

	TSCEFormula* mPtrToFormula;
	long long mCachedNumberOfValues;
	TSCEVector* mCachedOuputValueVector;

}

@property (readonly) TSCEFormula* formula; 
+(id)chartFormulaForRangeReference:(SCD_Struct_TS276*)arg1 ;
+(id)chartFormulaForCellRegion:(id)arg1 inTable:(id)arg2 ;
+(id)chartFormulaForString:(id)arg1 ;
+(id)chartFormulaWithCopyOfTSCEFormula:(const TSCEFormula*)arg1 ;
+(id)emptyChartFormula;
+(id)chartFormulaForCellReference:(SCD_Struct_TS282*)arg1 ;
-(id)argumentCollectionWithCalcEngine:(id)arg1 inTable:(CFUUIDRef)arg2 ;
-(BOOL)isAllStaticValuesWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(SCD_Struct_TS276*)rangeCircumscribingPrecedentsWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(id)initWithCopyOfTSCEFormula:(const TSCEFormula*)arg1 ;
-(id)stringValueForFormulaWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 ;
-(unsigned long long)numberOfValuesWithCalcEngine:(id)arg1 inTable:(CFUUIDRef)arg2 ;
-(TSCEValue)valueAtIndex:(unsigned long long)arg1 withCalcEngine:(id)arg2 inTable:(CFUUIDRef)arg3 ;
-(id)formulaByProcessingArgumentsWithCalcEngine:(id)arg1 inOwner:(CFUUIDRef)arg2 usingBlock:(/*^block*/id)arg3 ;
-(TSCEVector*)outputValueVectorWithCalcEngine:(id)arg1 inTable:(CFUUIDRef)arg2 ;
-(BOOL)formulaIsEqualTo:(id)arg1 ;
-(void)clearCacheForCalculationEngine:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TSCEFormula*)formula;
@end

