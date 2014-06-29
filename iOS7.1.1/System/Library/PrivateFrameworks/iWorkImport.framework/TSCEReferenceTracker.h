/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@protocol TSCEReferenceTrackerDelegate;
@class TSCECalculationEngine, NSMutableArray;

@interface TSCEReferenceTracker : TSPObject <TSCEFormulaOwning> {

	CFUUIDRef mUUID;
	TSCECalculationEngine* mCalculationEngine;
	bool mIsRegisteredWithCalculationEngine;
	<TSCEReferenceTrackerDelegate>* mDelegate;
	NSMutableArray* mTrackedReferences;
	unsigned long long mNextEmptyTrackedReferencesIndex;
	NSMutableArray* mFormulaIDsToRewrite;
	unsigned long long mNumberOfTrackedReferences;

}
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS287)arg2 rewriteSpec:(id)arg3 ;
-(id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(id)objectToArchiveInDependencyTracker;
-(SCD_Struct_TS322)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS287)arg2 isInCycle:(bool)arg3 hasCalculatedPrecedents:(bool)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(CFUUIDRef)formulaOwnerID;
-(unsigned long long)numberOfTrackedReferences;
-(void)setCalculationEngine:(id)arg1 ;
-(id)calculationEngine;
-(id)initWithContext:(id)arg1 calculationEngine:(id)arg2 delegate:(id)arg3 ;
-(void)registerWithCalculationEngine:(bool)arg1 ;
-(id)beginTrackingReferenceWithCReference:(SCD_Struct_TS289*)arg1 ;
-(id)allTrackedReferences;
-(void)endTrackingReference:(id)arg1 ;
-(void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(CFUUIDRef)arg2 ;
-(bool)trackedReferencesExistForTable:(CFUUIDRef)arg1 ;
-(id)cellRangeWasInserted:(SCD_Struct_TS275*)arg1 ;
-(void)beginTrackingReference:(id)arg1 ;
-(void)unregisterFromCalculationEngine;
-(id)allTrackedReferencesIntersectingReference:(SCD_Struct_TS289*)arg1 ;
-(id)trackedReferenceAtID:(SCD_Struct_TS287)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
@end
