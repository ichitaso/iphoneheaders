/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapPageRenderer.h>

@class MNRoute, NSMutableArray, RouteStepCalloutCell, UIColor;

@interface MapRoutePageRenderer : MapPageRenderer {

	MNRoute* _route;
	NSMutableArray* _routeStepCells;
	NSMutableArray* _routeStepCalloutCells;
	SCD_Struct_Si13 topLeftCorner;
	SCD_Struct_Si13 mlMapPoint;
	SCD_Struct_Si13 mrMapPoint;
	RouteStepCalloutCell* _redPinCallout;
	RouteStepCalloutCell* _greenPinCallout;
	UIColor* _routeCenterPrintColor;
	NSMutableArray* _snapshotObjects;

}

@property (nonatomic,retain) MNRoute * route;              //@synthesize route=_route - In the implementation block
-(id)initWithRoute:(id)arg1 mapView:(id)arg2 ;
-(void)drawTopContentInRect:(CGRect)arg1 forPageAtIndex:(int)arg2 ;
-(CGRect)overviewRect;
-(void)_preparePageContent;
-(float)_zoomLevelForCoordinateRegion:(SCD_Struct_Se14)arg1 ;
-(int)routeStepsPerPage;
-(void)_drawAddressWithPin:(int)arg1 address:(id)arg2 inRect:(CGRect)arg3 ;
-(void)_layoutRouteStepCalloutAtIndex:(unsigned)arg1 depth:(int)arg2 ;
-(CGAffineTransform)_overviewAffineTransformForRect:(CGRect)arg1 zoomLevel:(float)arg2 ;
-(void)_drawRouteLineInRect:(CGRect)arg1 zoomLevel:(float)arg2 transform:(CGAffineTransform)arg3 ;
-(void)_drawBottomMarginContentInRect:(CGRect)arg1 ;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(int)numberOfPages;
-(void).cxx_destruct;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)drawContentForPageAtIndex:(int)arg1 inRect:(CGRect)arg2 ;
@end

