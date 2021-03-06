/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/VCard.qldisplay/VCard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VCard/VCard-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UINavigationController, ABUnknownPersonViewController;

@interface QLVCardisplayBundle : QLDisplayBundle <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	UINavigationController* _navigationController;
	ABUnknownPersonViewController* _personViewController;

}
-(void)_loadVCard;
-(void)loadWithHints:(id)arg1 ;
-(BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(int)airPlayMode;
-(void)dealloc;
-(void)loadView;
@end

