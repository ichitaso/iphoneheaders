/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class TKVibrationPickerViewController, UIBarButtonItem;

@interface ABVibrationPickerViewController : ABPickerViewController {

	TKVibrationPickerViewController* _vibrationPickerViewController;
	BOOL _canEnterEditingMode;
	UIBarButtonItem* _saveButton;

}

@property (nonatomic,retain,readonly) TKVibrationPickerViewController * vibrationPickerViewController; 
@property (setter=_setSaveButton:,nonatomic,retain) UIBarButtonItem * _saveButton;                                  //@synthesize saveButton=_saveButton - In the implementation block
-(double)ab_heightToFitForViewInPopoverView;
-(id)initWithAlertType:(int)arg1 ;
-(TKVibrationPickerViewController *)vibrationPickerViewController;
-(void)_vibrationSaveButtonClicked:(id)arg1 ;
-(void)_setSaveButton:(id)arg1 ;
-(UIBarButtonItem *)_saveButton;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
@end
