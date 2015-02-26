/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPReplaceAction.h>

@class TSWPChangeSession;

@interface TSWPTrackedDeletion : NSObject <TSWPReplaceAction> {

	NSRange _range;
	TSWPChangeSession* _changeSession;

}
-(NSRange)insertedRange;
-(void)performWithStorage:(id)arg1 delta:(int)arg2 undoTransaction:(TSWPStorageTransaction*)arg3 replaceBlock:(/*^block*/ id)arg4 ;
-(int)delta;
-(id)initWithRange:(NSRange)arg1 changeSession:(id)arg2 ;
-(unsigned)targetCharIndex;
-(void)dealloc;
-(id).cxx_construct;
@end
