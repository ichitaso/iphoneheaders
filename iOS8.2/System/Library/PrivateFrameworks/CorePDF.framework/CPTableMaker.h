/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPZone, CPTable;

@interface CPTableMaker : NSObject {

	CPZone* tableZone;
	CPTable* table;
	unsigned cellIndex;
	CGPoint* rowYIntervals;
	CGPoint* columnXIntervals;

}
+(void)makeTablesInPage:(id)arg1 ;
+(void)makeTablesInZone:(id)arg1 ;
+(char)isTable:(id)arg1 ;
+(void)makeTableFrom:(id)arg1 ;
-(void)dealloc;
-(id)newBackgroundGraphicArrayFromRectangularZone:(id)arg1 ;
-(id)newTableCellFromZone:(id)arg1 ;
-(void)determineRowsAndColumns:(char)arg1 ;
-(id)initWithZone:(id)arg1 ;
-(void)makeTable;
@end

