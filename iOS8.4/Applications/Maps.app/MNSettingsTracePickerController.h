/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Maps/MFMailComposeViewControllerDelegate.h>

@class NSArray, NSString;

@interface MNSettingsTracePickerController : AuxiliaryDebugViewController <UIActionSheetDelegate, MFMailComposeViewControllerDelegate> {

	NSArray* _myFiles;
	NSString* _selectedTracePath;
	NSString* _selectedTraceName;
	char _showingPlayButton;
	NSArray* _myFileSheetTrackPickerOptions;

}

@property (nonatomic,retain) NSArray * myFileSheetTracePickerOptions;              //@synthesize myFileSheetTrackPickerOptions=_myFileSheetTrackPickerOptions - In the implementation block
@property (nonatomic,retain) NSArray * myFiles;                                    //@synthesize myFiles=_myFiles - In the implementation block
@property (nonatomic,retain) NSString * selectedTracePath;                         //@synthesize selectedTracePath=_selectedTracePath - In the implementation block
@property (nonatomic,retain) NSString * selectedTraceName;                         //@synthesize selectedTraceName=_selectedTraceName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)navigationDestinationTitle;
+(Class)_mfMailComposeViewController;
-(void)_reloadTraces;
-(void)_updateTracePickerOptions;
-(void)setMyFiles:(NSArray *)arg1 ;
-(void)setMyFileSheetTracePickerOptions:(NSArray *)arg1 ;
-(void)setSelectedTraceName:(NSString *)arg1 ;
-(void)setSelectedTracePath:(NSString *)arg1 ;
-(NSArray *)myFileSheetTracePickerOptions;
-(void)_showDeleteFileSheetForTraceName:(id)arg1 ;
-(NSArray *)myFiles;
-(NSString *)selectedTracePath;
-(NSString *)selectedTraceName;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

