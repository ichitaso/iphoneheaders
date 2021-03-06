/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewController.h>
#import <StoreKitUI/SKUINavigationDocumentDelegate.h>
#import <StoreKitUI/SKUIDocumentViewController.h>

@class UIViewController, SKUINavigationDocumentController, UISplitViewController, SKUISplitViewTemplateElement, NSString;

@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController> {

	UIViewController* _delayingPresentationViewController;
	SKUINavigationDocumentController* _leftNavigationDocumentController;
	SKUINavigationDocumentController* _rightNavigationDocumentController;
	UISplitViewController* _splitViewController;
	SKUISplitViewTemplateElement* _templateElement;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(void)loadView;
-(void)documentDidUpdate:(id)arg1 ;
-(id)leftBarButtonItemsForDocument:(id)arg1 ;
-(void)delayPresentationIfNeededForParentViewController:(id)arg1 ;
-(void)skui_viewWillAppear:(char)arg1 ;
-(id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2 ;
-(void)_reloadSplitViewControllers;
-(char)_isFullyPopulated;
-(void)_skui_endDelayingPresentation;
-(id)_defaultBackgroundColor;
-(void)navigationDocumentStackDidChange:(id)arg1 ;
@end

