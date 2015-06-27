/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATModernMenuItemDelegate.h>

@class NSArray, SCATStaticElementProvider, UIViewController, UICollectionViewLayout, SCATMenu, UICollectionView, SCATModernMenuViewController, SCATModernMenuSheetCollectionViewController, NSString;

@interface SCATModernMenuSheet : NSObject <SCATModernMenuItemDelegate> {

	NSArray* _menuItems;
	char _collectionBased;
	char _shouldIncludeBackItem;
	SCATStaticElementProvider* _elementProvider;
	UIViewController* _viewController;
	UICollectionViewLayout* _collectionViewLayout;
	SCATMenu* _menu;
	UICollectionView* _collectionView;

}

@property (assign,getter=isCollectionBased,nonatomic) char collectionBased;                                             //@synthesize collectionBased=_collectionBased - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                                                         //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) SCATMenu * menu;                                                                           //@synthesize menu=_menu - In the implementation block
@property (nonatomic,readonly) SCATModernMenuViewController * menuViewController; 
@property (nonatomic,retain,readonly) SCATStaticElementProvider * elementProvider;                                      //@synthesize elementProvider=_elementProvider - In the implementation block
@property (assign,nonatomic) char shouldIncludeBackItem;                                                                //@synthesize shouldIncludeBackItem=_shouldIncludeBackItem - In the implementation block
@property (nonatomic,retain) UICollectionViewLayout * collectionViewLayout;                                             //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSArray * menuItems; 
@property (nonatomic,readonly) SCATModernMenuSheetCollectionViewController * scatCollectionViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isValidForElement:(id)arg1 ;
-(char)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)menuItemStruts;
-(char)allowsBackAction;
-(char)allowsExitAction;
-(char)shouldKeepScannerAwake;
-(SCATStaticElementProvider *)elementProvider;
-(id)initWithMenu:(id)arg1 ;
-(void)_setupForCollectionBasedSheet;
-(void)didPressScreenChangingButton;
-(id)backTitle;
-(char)shouldUseBackItemAsDoneItem;
-(void)didChangeOrientation;
-(void)updateForNewMenuElement;
-(void)setShouldIncludeBackItem:(char)arg1 ;
-(char)isCollectionBased;
-(unsigned)presentationMode;
-(unsigned)numberOfPagesRequired;
-(CGRect)rectToClear;
-(int)preferredTipObject;
-(id)alternateTipElement;
-(char)delegatesScannerControl;
-(void)willFocusOnContext:(id)arg1 ;
-(void)didFocusOnContext:(id)arg1 ;
-(void)willUnfocusFromContext:(id)arg1 ;
-(unsigned)numberOfItemsInFirstPage;
-(void)invalidateMenuItems;
-(void)viewControllerViewWillDisappear:(char)arg1 ;
-(char)shouldIncludeTextLabels;
-(void)viewControllerViewWillAppear:(char)arg1 ;
-(char)isBackItemIdentifier:(id)arg1 ;
-(Class)_menuItemClass;
-(void)setCollectionBased:(char)arg1 ;
-(char)shouldIncludeBackItem;
-(id)_filteredMenuItemsForGuidedAccessIfNeeded:(id)arg1 ;
-(id)_scannerGroupsForMenuItems:(id)arg1 ;
-(SCATModernMenuSheetCollectionViewController *)scatCollectionViewController;
-(void)_setupForCustomSheet:(id)arg1 ;
-(id)itemWithIdentifier:(id)arg1 ;
-(SCATModernMenuViewController *)menuViewController;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(UICollectionView *)collectionView;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(UICollectionViewLayout *)collectionViewLayout;
-(unsigned)currentPage;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
-(SCATMenu *)menu;
-(void)setMenu:(SCATMenu *)arg1 ;
-(void)setCollectionViewLayout:(UICollectionViewLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end
