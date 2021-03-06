/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUUserActivityContext.h>

@class NSMutableArray, NSArray;

@interface MPUMutableUserActivityContext : MPUUserActivityContext {

	NSMutableArray* _containerItems;

}

@property (nonatomic,copy) NSArray * containerItems; 
@property (assign,nonatomic) long long originatorType; 
@property (assign,nonatomic) long long originatorVersion; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOriginatorType:(long long)arg1 ;
-(void)setOriginatorVersion:(long long)arg1 ;
-(NSArray *)containerItems;
-(void)setContainerItems:(NSArray *)arg1 ;
-(void)addContainerItem:(id)arg1 ;
-(void)insertContainerItem:(id)arg1 afterContainerItem:(id)arg2 ;
-(void)removeContainerItem:(id)arg1 ;
@end

