/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MKMapView, MapsUserTrackingButton, Maps3DButton, UIButton;

@interface MapsChromeCommonControls : NSObject {

	MKMapView* _mapView;
	MapsUserTrackingButton* _trackingButton;
	MapsUserTrackingButton* _whiteTrackingButton;
	Maps3DButton* _maps3DButton;
	Maps3DButton* _whiteMaps3DButton;
	UIButton* _searchListViewControl;
	UIButton* _directionsListViewControl;
	UIButton* _settingsControl;
	UIButton* _audioControl;
	UIButton* _shareControl;

}

@property (readonly) MapsUserTrackingButton * trackingButton; 
@property (readonly) MapsUserTrackingButton * invertedTrackingButton; 
@property (readonly) Maps3DButton * maps3DButton; 
@property (readonly) Maps3DButton * invertedMaps3DButton; 
@property (readonly) UIButton * searchListViewControl; 
@property (readonly) UIButton * directionsListViewControl; 
@property (readonly) UIButton * settingsControl; 
@property (readonly) UIButton * audioControl; 
@property (readonly) UIButton * shareControl; 
-(id)directionsListViewControl;
-(id)newThreeDButton;
-(id)trackingButton;
-(id)invertedTrackingButton;
-(id)maps3DButton;
-(id)invertedMaps3DButton;
-(id)searchListViewControl;
-(id)settingsControl;
-(id)shareControl;
-(id)initWithChromeViews:(id)arg1 ;
-(id)audioControl;
-(void).cxx_destruct;
@end

