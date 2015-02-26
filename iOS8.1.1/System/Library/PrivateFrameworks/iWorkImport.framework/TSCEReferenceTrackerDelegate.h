/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSCEReferenceTrackerDelegate
@optional
-(void)updateTrackedHeaders:(CFUUIDRef)arg1;

@required
-(void)trackedReferenceWasDeleted:(id)arg1 fromOwnerID:(CFUUIDRef)arg2;
-(void)referencedCellWasModified:(id)arg1;
-(BOOL)shouldRewriteOnSort;
-(BOOL)shouldRewriteOnRangeMove;
-(BOOL)shouldRewriteOnTectonicShift;
-(BOOL)shouldRewriteOnCellMerge;
-(BOOL)shouldRewriteOnTranspose;
-(id)cellRangeWasInserted:(SCD_Struct_TS276*)arg1;
-(id)commandForUpdatingWithSpec:(id)arg1 formulas:(id)arg2;

@end
