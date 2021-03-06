/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartRep, TSCH3DChartAnimation, TSCH3DScene;

@interface TSCH3DChartAnimationEngine : NSObject <TSCHUnretainedParent> {

	TSCH3DChartRep* mRep;
	int mStage;
	TSCH3DChartAnimation* mAnimation;

}

@property (nonatomic,readonly) TSCH3DScene * scene; 
@property (nonatomic,readonly) TSCH3DScene * layoutScene; 
@property (nonatomic,retain) Class animationClass; 
@property (nonatomic,readonly) TSCH3DChartAnimation * animation; 
@property (assign,nonatomic) int stage; 
+(id)animationEngineWithRep:(id)arg1 ;
-(void)clearParent;
-(id)initWithRep:(id)arg1 ;
-(TSCH3DScene *)layoutScene;
-(void)updateTimings;
-(Class)animationClass;
-(void)setAnimationClass:(Class)arg1 ;
-(TSCH3DScene *)scene;
-(void)dealloc;
-(TSCH3DChartAnimation *)animation;
-(void)update:(float)arg1 ;
-(int)stage;
-(void)setStage:(int)arg1 ;
@end

