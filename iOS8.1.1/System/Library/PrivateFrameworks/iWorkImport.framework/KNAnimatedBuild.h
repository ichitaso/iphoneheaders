/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class KNBuildAttributes, NSDictionary;

@interface KNAnimatedBuild : NSObject {

	BOOL _automatic;
	BOOL _animateAtEndOfPreviousBuild;
	BOOL _isMovieStartBuild;
	BOOL _isVisibleAtBeginning;
	BOOL _isVisibleAtEnd;
	int _buildType;
	long long _eventIndex;
	long long _stageIndex;
	unsigned long long _direction;
	unsigned long long _deliveryOption;
	unsigned long long _deliveryStyle;
	Class _pluginClass;
	KNBuildAttributes* _attributes;
	double _startTime;
	double _eventStartTime;
	double _duration;
	double _endTime;
	double _eventEndTime;
	NSDictionary* _previousAttributes;
	NSDictionary* _finalAttributes;

}

@property (nonatomic,readonly) int buildType;                                  //@synthesize buildType=_buildType - In the implementation block
@property (assign,nonatomic) long long eventIndex;                             //@synthesize eventIndex=_eventIndex - In the implementation block
@property (nonatomic,readonly) long long stageIndex;                           //@synthesize stageIndex=_stageIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long direction;                   //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) unsigned long long deliveryOption;              //@synthesize deliveryOption=_deliveryOption - In the implementation block
@property (nonatomic,readonly) unsigned long long deliveryStyle;               //@synthesize deliveryStyle=_deliveryStyle - In the implementation block
@property (nonatomic,readonly) Class pluginClass;                              //@synthesize pluginClass=_pluginClass - In the implementation block
@property (nonatomic,readonly) KNBuildAttributes * attributes;                 //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double eventStartTime;                          //@synthesize eventStartTime=_eventStartTime - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double endTime;                                 //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) double eventEndTime;                            //@synthesize eventEndTime=_eventEndTime - In the implementation block
@property (nonatomic,readonly) BOOL automatic;                                 //@synthesize automatic=_automatic - In the implementation block
@property (assign,nonatomic) BOOL animateAtEndOfPreviousBuild;                 //@synthesize animateAtEndOfPreviousBuild=_animateAtEndOfPreviousBuild - In the implementation block
@property (nonatomic,readonly) BOOL isBuildIn; 
@property (nonatomic,readonly) BOOL isBuildOut; 
@property (nonatomic,readonly) BOOL isActionBuild; 
@property (nonatomic,readonly) BOOL isEmphasisBuild; 
@property (nonatomic,readonly) BOOL isDriftBuild; 
@property (assign,nonatomic) BOOL isMovieStartBuild;                           //@synthesize isMovieStartBuild=_isMovieStartBuild - In the implementation block
@property (nonatomic,readonly) BOOL isMagicChartBuild; 
@property (assign,nonatomic) BOOL isVisibleAtBeginning;                        //@synthesize isVisibleAtBeginning=_isVisibleAtBeginning - In the implementation block
@property (assign,nonatomic) BOOL isVisibleAtEnd;                              //@synthesize isVisibleAtEnd=_isVisibleAtEnd - In the implementation block
@property (nonatomic,copy) NSDictionary * previousAttributes;                  //@synthesize previousAttributes=_previousAttributes - In the implementation block
@property (nonatomic,copy) NSDictionary * finalAttributes;                     //@synthesize finalAttributes=_finalAttributes - In the implementation block
-(unsigned long long)deliveryStyle;
-(long long)stageIndex;
-(BOOL)isActionBuild;
-(BOOL)isBuildIn;
-(BOOL)isEmphasisBuild;
-(BOOL)isBuildOut;
-(BOOL)animateAtEndOfPreviousBuild;
-(BOOL)isVisibleAtEnd;
-(BOOL)isVisibleAtBeginning;
-(int)buildType;
-(double)eventStartTime;
-(double)eventEndTime;
-(NSDictionary *)previousAttributes;
-(NSDictionary *)finalAttributes;
-(BOOL)automatic;
-(void)setFinalAttributes:(NSDictionary *)arg1 ;
-(void)setPreviousAttributes:(NSDictionary *)arg1 ;
-(void)setIsVisibleAtEnd:(BOOL)arg1 ;
-(void)setIsVisibleAtBeginning:(BOOL)arg1 ;
-(BOOL)isDriftBuild;
-(BOOL)isMovieStartBuild;
-(BOOL)isMagicChartBuild;
-(id)initWithBuildType:(int)arg1 attributes:(id)arg2 pluginClass:(Class)arg3 deliveryStyle:(unsigned long long)arg4 eventIndex:(long long)arg5 stageIndex:(long long)arg6 startTime:(double)arg7 eventStartTime:(double)arg8 duration:(double)arg9 direction:(unsigned long long)arg10 automatic:(BOOL)arg11 animateAtEndOfPreviousBuild:(BOOL)arg12 ;
-(void)setIsMovieStartBuild:(BOOL)arg1 ;
-(void)setAnimateAtEndOfPreviousBuild:(BOOL)arg1 ;
-(void)setEventIndex:(long long)arg1 ;
-(unsigned long long)deliveryOption;
-(long long)eventIndex;
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)direction;
-(KNBuildAttributes *)attributes;
-(double)startTime;
-(Class)pluginClass;
-(double)endTime;
@end
