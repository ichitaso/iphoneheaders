/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH2DChartLayout.h>

@class TSCH3DScene, TSCH3DChartSceneAreaLayoutItem;

@interface TSCH3DChartLayout : TSCH2DChartLayout

@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (nonatomic,readonly) const ChartProjectedBoundsSpaces* projectedBounds; 
@property (nonatomic,readonly) BOOL hasProjectedBounds; 
@property (nonatomic,readonly) TSCH3DChartSceneAreaLayoutItem * areaItem; 
+(id)propertiesThatInvalidateLayout;
+(id)p_propertiesThatResetSeriesStorage;
+(id)p_propertiesThatResetSceneProperties;
+(id)p_propertiesThatInvalidateShadows;
+(id)p_allScaleProperties;
+(void)upgradeSceneDepthSettingsForChartInfo:(id)arg1 hasConstantDepth:(BOOL)arg2 willModifyBlock:(/*^block*/ id)arg3 ;
+(BOOL)layoutFrameEnclosesInfoGeometry;
-(void)setLayoutSettings:(SCD_Struct_TS407)arg1 ;
-(const ChartProjectedBoundsSpaces*)projectedBounds;
-(id)containingViewportVector;
-(id)infoChartScale;
-(id)initWithChartInfo:(id)arg1 ;
-(BOOL)p_shouldClearSceneForLayoutSettings:(SCD_Struct_TS407)arg1 ;
-(id)areaItem;
-(void)p_ensureValidForCircumscribingSizeLayout;
-(void)processChanges:(id)arg1 ;
-(void)p_resetSeriesStorage;
-(void)p_resetSceneProperties;
-(void)setSeriesIndexedPieWedgeExplosions:(id)arg1 ;
-(BOOL)hasProjectedBounds;
-(void)modelInvalidated:(id)arg1 ;
-(id)mutationTuplesToApplyDuringResize;
-(id)scene;
-(void)dealloc;
@end

