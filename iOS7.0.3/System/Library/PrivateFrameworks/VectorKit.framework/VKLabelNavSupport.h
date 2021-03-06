/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKPolylineOverlayPainter, NSString, NSMutableSet, NSMutableArray, VKLabelNavRoadGraph, NSMutableDictionary;

@interface VKLabelNavSupport : NSObject {

	BOOL _needsLayout;
	BOOL _drawRoadSigns;
	VKPolylineOverlayPainter* _route;
	NSString* _currentLocationText;
	BOOL _isOnRoute;
	PolylineCoordinate _routeUserOffset;
	unsigned _stepIndex;
	BOOL _checkOnRouteLabelsAlignment;
	BOOL _disableTileParseForOneLayout;
	NSMutableSet* _tiles;
	NSMutableSet* _pendingTiles;
	NSMutableArray* _junctions;
	VKLabelNavRoadGraph* _roadGraph;
	vector<std::__1::shared_ptr<vk::NavLabel>, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > >* _activeSigns;
	NSMutableArray* _fadingLabels;
	NSMutableDictionary* _visibleLabelsByName;
	NSMutableArray* _visibleLabels;
	int _countVisibleRoadSigns;
	NSMutableSet* _roadNamesInGuidance;
	NSMutableArray* _guidanceStepInfos;
	NSMutableArray* _routeRoadInfos;
	NSString* _currentRoadName;
	int _currentRoadNameIndex;
	NSString* _currentShieldGroup;
	BOOL _checkIfRouteSubrangeChanged;
	BOOL _useRouteSubrange;
	PolylineCoordinate _routeSubrangeStart;
	PolylineCoordinate _routeSubrangeEnd;

}

@property (assign,nonatomic) BOOL drawRoadSigns;                                                          //@synthesize drawRoadSigns=_drawRoadSigns - In the implementation block
@property (nonatomic,retain) VKPolylineOverlayPainter * route;                                            //@synthesize route=_route - In the implementation block
@property (nonatomic,retain) NSString * currentLocationText;                                              //@synthesize currentLocationText=_currentLocationText - In the implementation block
@property (nonatomic,retain) NSString * currentRoadName;                                                  //@synthesize currentRoadName=_currentRoadName - In the implementation block
@property (nonatomic,retain) NSString * currentShieldGroup;                                               //@synthesize currentShieldGroup=_currentShieldGroup - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeUserOffset;                                          //@synthesize routeUserOffset=_routeUserOffset - In the implementation block
@property (nonatomic,readonly) const vector<std::__1::shared_ptr<vk::NavLabel>* activeSigns;              //@synthesize activeSigns=_activeSigns - In the implementation block
@property (nonatomic,readonly) BOOL needsLayout;                                                          //@synthesize needsLayout=_needsLayout - In the implementation block
-(void)dealloc;
-(id)init;
-(BOOL)needsLayout;
-(id).cxx_construct;
-(void)setRouteUserOffset:(PolylineCoordinate)arg1 ;
-(void)setCurrentLocationText:(id)arg1 ;
-(void)setRoute:(id)arg1 ;
-(id)route;
-(void)clearSceneIsMemoryWarning:(BOOL)arg1 ;
-(void)grabTilesFromScene:(id)arg1 ;
-(void)layoutWithNavContext:(NavContext*)arg1 ;
-(const vector<std::__1::shared_ptr<vk::NavLabel>, vk_allocator<std::__1::shared_ptr<vk::NavLabel> > >*)activeSigns;
-(unsigned char)computeRoutePositionMaskForPOIAtPixel:(const Vec2Imp<float>*)arg1 currentPositionMask:(unsigned char)arg2 context:(NavContext*)arg3 ;
-(void)_refreshGuidanceRoadNames;
-(void)_updateRoadsInGuidance;
-(void)_updateCurrentRoadInfo;
-(void)setCurrentRoadName:(id)arg1 ;
-(void)setCurrentShieldGroup:(id)arg1 ;
-(void)_tryAddLabel:(id)arg1 navContext:(NavContext*)arg2 labelCollisionEnabled:(BOOL)arg3 ;
-(BOOL)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3 ;
-(BOOL)_updateActiveRouteRange;
-(void)_reloadRouteJunctions;
-(BOOL)_addJunctionsForTile:(id)arg1 ;
-(void)_addLabelsAtJunctions:(id)arg1 withContext:(NavContext*)arg2 maxVisibleLabels:(unsigned)arg3 ;
-(void)_addLabelsForJunctions:(id)arg1 withContext:(NavContext*)arg2 maxVisibleLabels:(unsigned)arg3 useAllJunctions:(BOOL)arg4 placeShieldsFrontToBack:(BOOL)arg5 ;
-(void)_tryAddRoadSignForJunction:(id)arg1 navContext:(NavContext*)arg2 labelCollisionEnabled:(BOOL)arg3 ;
-(void)_tryAddRoadSignForRoad:(id)arg1 isShield:(BOOL)arg2 navContext:(NavContext*)arg3 labelCollisionEnabled:(BOOL)arg4 ;
-(void)_updateRoadStarts;
-(void)_updatePreferredLabelPlacements;
-(void)_initalizeCurrentRoadInfo;
-(void)_updateUniqueOffRouteRoads;
-(id)currentRoadName;
-(BOOL)_findRouteOverlappingJunctionFrom:(int)arg1 routeJunctions:(vector<RouteJunctionInfo, vk_allocator<RouteJunctionInfo> >*)arg2 lookBackward:(BOOL)arg3 firstOverlap:(int*)arg4 secondOverlap:(int*)arg5 ;
-(BOOL)isNavMode;
-(BOOL)drawRoadSigns;
-(void)setDrawRoadSigns:(BOOL)arg1 ;
-(PolylineCoordinate)routeUserOffset;
-(id)currentLocationText;
-(id)currentShieldGroup;
-(void).cxx_destruct;
@end

