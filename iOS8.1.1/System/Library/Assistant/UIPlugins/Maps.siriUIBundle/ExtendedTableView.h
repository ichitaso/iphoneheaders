/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@interface ExtendedTableView : UITableView {

	long long _countOfActiveUpdateBlocks;

}
-(void)_noteDataSourceChangedIfPossible;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(void)beginUpdates;
-(void)endUpdates;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
@end
