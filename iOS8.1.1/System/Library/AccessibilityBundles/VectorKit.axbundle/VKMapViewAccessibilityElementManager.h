/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapViewAccessibilityElementDataSource.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, NSString;

@interface VKMapViewAccessibilityElementManager : NSObject <VKMapViewAccessibilityElementDataSource> {

	BOOL _updating;
	NSArray* _accessibilityElements;
	long long _orientation;
	double _yaw;
	NSObject*<OS_dispatch_queue> _properties_queue;
	NSObject*<OS_dispatch_queue> _updates_queue;
	CGPoint _center;
	SCD_Struct_VK0 _bounds;

}

@property (nonatomic,retain) NSArray * accessibilityElements;                            //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK0 bounds;                                      //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGPoint center;                                             //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) long long orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double yaw;                                                 //@synthesize yaw=_yaw - In the implementation block
@property (assign,getter=isUpdating,nonatomic) BOOL updating;                            //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> properties_queue;              //@synthesize properties_queue=_properties_queue - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> updates_queue;                 //@synthesize updates_queue=_updates_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_VK0)_boundsForMapView:(id)arg1 ;
-(void)setProperties_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CGPoint)centerForMapView:(id)arg1 ;
-(double)yawForMapView:(id)arg1 ;
-(long long)_orientationForMapView:(id)arg1 ;
-(CGPoint)_centerForMapView:(id)arg1 ;
-(void)_sortAccessibilityElements:(id)arg1 ;
-(float)_zoomForMapView:(id)arg1 ;
-(BOOL)_isValidYawForMapView:(id)arg1 yaw:(double)arg2 ;
-(SCD_Struct_VK0)boundsForMapView:(id)arg1 ;
-(double)_yawForMapView:(id)arg1 ;
-(long long)orientationForMapView:(id)arg1 ;
-(void)_processVisibleTile:(id)arg1 accessibilityElements:(id*)arg2 mapViewBounds:(SCD_Struct_VK0)arg3 mapView:(id)arg4 roadLabelMap:(id)arg5 ;
-(void)updateAccessibilityElementsForMapView:(id)arg1 isRetry:(BOOL)arg2 ;
-(id)_gatherVisibleLabelMarkersForMapView:(id)arg1 ;
-(id)_gatherVisibleTilesForMapView:(id)arg1 ;
-(id)accessibilityElementsForMapView:(id)arg1 ;
-(void)updateAccessibilityElementsForMapView:(id)arg1 ;
-(id)_accessibilityElementsForMapView:(id)arg1 mapViewBounds:(SCD_Struct_VK0)arg2 visibleLabels:(id)arg3 visibleTiles:(id)arg4 ;
-(void)_consolidateAccessibilityElements:(id)arg1 ;
-(void)_filterAccessibilityElements:(id)arg1 zoomLevel:(float)arg2 ;
-(BOOL)_isValidBoundsForMapView:(id)arg1 bounds:(SCD_Struct_VK0)arg2 ;
-(BOOL)_isValidOrientationForMapView:(id)arg1 orientation:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)updates_queue;
-(NSObject*<OS_dispatch_queue>)properties_queue;
-(void)setUpdates_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isUpdating;
-(void)setUpdating:(BOOL)arg1 ;
-(void)dealloc;
-(SCD_Struct_VK0)bounds;
-(id)init;
-(void)setBounds:(SCD_Struct_VK0)arg1 ;
-(long long)orientation;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(double)yaw;
-(void)setYaw:(double)arg1 ;
@end

