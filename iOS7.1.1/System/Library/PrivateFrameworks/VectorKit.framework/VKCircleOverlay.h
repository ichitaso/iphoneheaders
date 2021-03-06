/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlay.h>

@class GEOMapRegion;

@interface VKCircleOverlay : NSObject <VKOverlay> {

	CGPoint _coordinate;
	GEOMapRegion* _boundingMapRegion;
	double _radius;

}

@property (nonatomic,readonly) CGPoint coordinate;                            //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;              //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
@property (nonatomic,readonly) double radius;                                 //@synthesize radius=_radius - In the implementation block
+(id)circleWithCenterCoordinate:(CGPoint)arg1 radius:(double)arg2 ;
-(void)dealloc;
-(id).cxx_construct;
-(double)radius;
-(CGPoint)coordinate;
-(id)_initWithCenterCoordinate:(CGPoint)arg1 radius:(double)arg2 ;
-(id)boundingMapRegion;
@end

