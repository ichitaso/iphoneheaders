/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/PopoverSizingTableViewController.h>

@protocol FolderPickerViewControllerDelegate;
@class WebBookmarkCollection, NSSet, WebBookmark, NSArray;

@interface FolderPickerViewController : PopoverSizingTableViewController {

	<FolderPickerViewControllerDelegate>* _delegate;
	WebBookmarkCollection* _collection;
	NSSet* _hiddenFolderIdentifiers;
	WebBookmark* _parentBookmark;
	NSArray* _bookmarkFolders;
	int _selectedFolderIndex;

}
-(id)initWithDelegate:(id)arg1 bookmarkCollection:(id)arg2 ;
-(void)willShowForParentBookmark:(id)arg1 hiddenFolderIdentifiers:(id)arg2 ;
-(id)_bookmarkFolders;
-(id)_tintedFavoritesFolderIcon;
-(id)_tintedFolderIcon;
-(void)_bookmarksChanged;
-(float)minimumHeightInPopoverView;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)_cancel;
-(void)_bookmarksDidReload;
@end
