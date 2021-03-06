/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NetworkAttachment;

@interface LiveRoutePerf : NSManagedObject

@property (nonatomic,retain) NSNumber * bytesIn; 
@property (nonatomic,retain) NSNumber * bytesOut; 
@property (nonatomic,retain) NSNumber * connAttempts; 
@property (nonatomic,retain) NSNumber * connSuccesses; 
@property (nonatomic,retain) NSNumber * epochs; 
@property (nonatomic,retain) NSNumber * faultyStay; 
@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSNumber * lowqStay; 
@property (nonatomic,retain) NSNumber * overallStay; 
@property (nonatomic,retain) NSNumber * packetsIn; 
@property (nonatomic,retain) NSNumber * packetsOut; 
@property (nonatomic,retain) NSNumber * reTxBytes; 
@property (nonatomic,retain) NSNumber * rttAvg; 
@property (nonatomic,retain) NSNumber * rttMin; 
@property (nonatomic,retain) NSNumber * rttVar; 
@property (nonatomic,retain) NSNumber * rxDupeBytes; 
@property (nonatomic,retain) NSNumber * rxOOOBytes; 
@property (nonatomic,retain) NSNumber * overallStayM2; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSNumber * topDownloadRate; 
@property (nonatomic,retain) NetworkAttachment * hasNetworkAttachment; 
@end

