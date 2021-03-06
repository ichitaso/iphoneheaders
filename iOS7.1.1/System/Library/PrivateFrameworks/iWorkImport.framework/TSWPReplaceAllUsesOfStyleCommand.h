/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommand.h>

@class TSWPStorage, TSSStyle;

@interface TSWPReplaceAllUsesOfStyleCommand : TSKCommand {

	TSWPStorage* _storage;
	TSWPStorageTransaction* _undoRedoTransaction;
	TSSStyle* _currentStyle;
	TSSStyle* _newStyle;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ReplaceAllUsesOfStyleCommandArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ReplaceAllUsesOfStyleCommandArchive*)arg1 unarchiver:(id)arg2 ;
-(void)p_invalidateRange:(NSRange)arg1 ;
-(TSWPStorageTransaction*)undoRedoTransaction;
-(void)p_invalidateSelection:(id)arg1 ;
-(id)initWithStorage:(id)arg1 currentStyle:(id)arg2 newStyle:(id)arg3 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(void)undoRedo;
-(bool)process;
-(id)actionString;
@end

