/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicAlbumsDetailViewController.h>
#import <MusicUI/MPTransportControlsTarget.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class MPUCoverZoomViewController, UIPinchGestureRecognizer, UIView, MPTransportControls, NSString;

@interface MPHCZAlbumTableViewController : MusicAlbumsDetailViewController <MPTransportControlsTarget, UIGestureRecognizerDelegate> {

	MPUCoverZoomViewController* _coverZoomViewController;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIView* _tapView;
	MPTransportControls* _transportControlsView;

}

@property (assign,nonatomic,__weak) MPUCoverZoomViewController * coverZoomViewController;              //@synthesize coverZoomViewController=_coverZoomViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_supportsSearch;
+(Class)_albumsDetailTableHeaderViewClass;
-(id)initWithEntity:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(char)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)_tapAction:(id)arg1 ;
-(void)_pinchAction:(id)arg1 ;
-(id)_createTableView;
-(id)_createTableViewBackgroundView;
-(MPUCoverZoomViewController *)coverZoomViewController;
-(void)setCoverZoomViewController:(MPUCoverZoomViewController *)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
@end
