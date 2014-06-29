/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityListController.h>

@class PSSpecifier;

@interface ZoomController : AccessibilityListController {

	PSSpecifier* _zoomOnSpecifier;

}
+(void)setZoomEnabled:(bool)arg1 ;
-(id)zoomTouchEnabled:(id)arg1 ;
-(void)setZoomTouchEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)_zoomTouchEnabledChange;
-(void)setAllowsTouchToSpeak:(id)arg1 specifier:(id)arg2 ;
-(id)allowsTouchToSpeak:(id)arg1 ;
-(id)_zoomTouchEnabledSpecifier;
-(void)_manageSubPreferencesWithEnabled;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)specifiers;
@end
