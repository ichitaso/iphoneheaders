/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@class UIAlertView, NSString;

@interface APAlert : NSObject <UIModalViewDelegate> {

	id _delegate;
	UIAlertView* _sheet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss;
-(void)showAlertForNetwork:(id)arg1 error:(int)arg2 ;
@end

