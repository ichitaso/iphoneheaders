/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/WirelessDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PBCodable;

@interface AWDMetricContainer : NSObject {

	PBCodable* _metric;
	unsigned _metricId;

}

@property (nonatomic,retain) PBCodable * metric;               //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) unsigned metricId;              //@synthesize metricId=_metricId - In the implementation block
-(void)dealloc;
-(void)setMetric:(id)arg1 ;
-(id)initWithMetricId:(unsigned)arg1 ;
-(id)metric;
-(unsigned)metricId;
@end
