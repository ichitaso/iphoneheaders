/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDDataEntity.h>

@interface HDSampleEntity : HDDataEntity
+(id)anySampleOfType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(id)_databaseTable;
+(id)_columnsSQL;
+(Class)_associatedDataObjectClass;
+(id)_propertySettersForDataObject;
+(id)_tableValuesFromDataObject:(id)arg1 ;
+(id)columnNameForSortIdentifier:(id)arg1 ;
+(void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 orderBy:(id)arg6 directions:(id)arg7 limit:(unsigned long long)arg8 handler:(/*^block*/id)arg9 ;
+(BOOL)deleteSamplesWithPredicate:(id)arg1 limit:(unsigned long long)arg2 deletedSampleCount:(unsigned long long*)arg3 deletedSampleTypes:(id)arg4 healthDaemon:(id)arg5 error:(id*)arg6 ;
+(void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 limit:(unsigned long long)arg6 anchor:(id*)arg7 withHandler:(/*^block*/id)arg8 ;
+(id)_predicateWithSampleType:(id)arg1 predicate:(id)arg2 ;
+(long long)preferredEntityType;
+(void)_columnNamesAndSortOrderingsForDataType:(id)arg1 sortDescriptors:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(long long)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 withError:(id*)arg4 ;
+(id)_predicateWithSampleType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3 ;
+(void)enumerateDatesOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 limit:(unsigned long long)arg4 withHandler:(/*^block*/id)arg5 ;
+(id)mostRecentSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(BOOL)deleteSamplesWithTypes:(id)arg1 sourceIdentifier:(id)arg2 deletedSampleTypes:(id)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(id)samplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 limit:(unsigned long long)arg4 anchor:(id*)arg5 error:(id*)arg6 ;
+(void)enumerateUUIDsOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 limit:(unsigned long long)arg4 withHandler:(/*^block*/id)arg5 ;
+(void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 filter:(id)arg3 sourceIdentifier:(id)arg4 authorizationFilter:(/*^block*/id)arg5 sortDescriptors:(id)arg6 limit:(unsigned long long)arg7 handler:(/*^block*/id)arg8 ;
+(id)sourceIDsForSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id*)arg4 ;
+(long long)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 withError:(id*)arg4 ;
+(id)sampleCountAndDatesOfType:(id)arg1 healthDaemon:(id)arg2 matchingPredicate:(id)arg3 cancellationBlock:(/*^block*/id)arg4 ;
+(id)samplesTypesForSamplesMatchingPredicate:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
-(id)_sampleTypeInDatabase:(id)arg1 ;
@end

