/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, PLMomentAnalyzerWorkThread, PLXPCTransaction, NSMutableOrderedSet, NSMutableSet, NSDateFormatter, PLPhotoLibrary, NSDictionary, CLLocation, GEOPlace, NSString, NSOrderedSet, NSDate;

@interface PLMomentAnalyzer : NSObject {

	NSObject<OS_dispatch_queue>* _workQueue;
	PLMomentAnalyzerWorkThread* _geoWorkThread;
	unsigned long long _mode;
	double _analysisStartTime;
	bool _delayedSavePending;
	unsigned long long _objectUpdatesSinceSave;
	PLXPCTransaction* _keepAliveTransaction;
	NSMutableOrderedSet* _pendingGEORequests;
	NSMutableSet* _activeGEORequests;
	NSMutableSet* _processingMomentUuids;
	NSMutableSet* _megaMomentListIdsToProcess;
	NSMutableSet* _yearMomentListIdsToProcess;
	NSDateFormatter* _shortDateFormatter;
	NSDateFormatter* _dayOfTheWeekDateFormatter;
	PLPhotoLibrary* _photoLibrary;
	bool _analyzingAllMoments;
	bool _skippedMomentsDuringAnalysis;
	bool _passSuccess;
	void* _addressBook;
	unsigned long long _errorState;
	int _errorBackoffLevel;
	int _triesAtCurrentBackoffLevel;
	bool _networkObservingReachability;
	bool _needToUpdateInvalidMomentsWhenPossible;
	NSDictionary* _homeAddressDictionary;
	CLLocation* _homeLocation;
	GEOPlace* _homePlace;
	NSString* _languageAndLocale;
	NSString* _lastGeoProviderId;
	NSOrderedSet* _defaultDominantGeoOrderingForMoment;
	NSOrderedSet* _defaultSecondaryLocationGeoOrderingForMoment;
	NSOrderedSet* _defaultDominantGeoOrderingForMegaMoment;
	NSOrderedSet* _defaultSecondaryLocationGeoOrderingForMegaMoment;
	NSOrderedSet* _defaultSecondaryGeoOrderingForYear;
	double _lastNetworkForcedAbortTime;
	double _timeToWaitBeforeNextRequest;
	double _lastRevGeoRequestTime;
	NSDate* _lastGeoVersionFileFetchDate;
	unsigned long long _lastGeoVersionFileVersion;
	NSDictionary* _serverVersionInfo;
	double _lastServerVersionInfoFetchAttemptTime;
	unsigned long long _currentRevGeoServerVersionNum;
	bool _pendingServerVersionInfoFetch;
	bool _addCountyIfNeeded;
	bool _noResultErrorIsSuccess;
	double _revGeoServerVersionInfoFetchNewVersionInterval;
	NSString* _revGeoServerVersionInfoURL;
	NSString* _currentProviderId;
	bool _momentAnalysisPaused;

}

@property (nonatomic,readonly) PLPhotoLibrary * _photoLibrary; 
@property (nonatomic,readonly) void* _addressBook; 
@property (nonatomic,readonly) CLLocation * _homeLocation; 
+(bool)hasCompletedMomentsAndMomentListAnalysisInLibrary:(id)arg1 ;
+(id)sharedInstance;
-(void)pauseMomentAnalysis;
-(void)resumeMomentAnalysis;
-(void)dealloc;
-(id)init;
-(id)_photoLibrary;
-(void)updateInfoForAllMoments;
-(void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
-(void)_updateDateFormattersForLocale:(id)arg1 ;
-(void)_finalizeInitOnWorkQueue;
-(void)_fetchServerVersionInfo;
-(id)_metadataPath;
-(id)_locationFromDictionary:(id)arg1 ;
-(void)_saveGlobalMetadata;
-(bool)_updateHomeAddressIfNeeded;
-(bool)_updateLanguageIfNeeded;
-(void)_countryCodeChanged:(id)arg1 ;
-(void)_updateRevGeoServerFetchInfoConfig;
-(void)_updateInformationForGeoProviderIfNeeded;
-(void)_updateCurrentProviderId;
-(void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned long long)arg1 ;
-(bool)_loadServerVersionInfo;
-(void)_checkForNewServerVersionInfoIfNeeded;
-(void)_processNextTransaction;
-(void)_runBlockOnWorkQueue:(/*^block*/ id)arg1 ;
-(id)_serverVersionInfoFilePath;
-(void)_updateLocalServerVersionInfo:(id)arg1 ;
-(id)_currentProviderId;
-(void)_updateErrorStateWithSuccess:(bool)arg1 errorType:(unsigned long long)arg2 ;
-(void)_startObservingReachabilityChanges;
-(unsigned long long)_errorTypeForError:(id)arg1 ;
-(id)_dictionaryFromLocation:(id)arg1 ;
-(id)_currentHomeAddressDictionary;
-(void)_updateHomeLocation;
-(void)_updateCurrentProviderIdWithCountryCode:(id)arg1 ;
-(void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void*)_addressBook;
-(id)_addressDictionaryForABRecord:(void*)arg1 identifier:(int)arg2 ;
-(void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(bool)arg1 ;
-(void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(/*^block*/ id)arg2 ;
-(void)_setErrorState:(unsigned long long)arg1 ;
-(void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(bool)arg2 ;
-(bool)_isNetworkReachable;
-(void)_resetErrorState;
-(bool)_startingToProcessMomentWithUuid:(id)arg1 ;
-(void)_addRevGeoPlacesFromAssets:(id)arg1 toPlacesArray:(id)arg2 ;
-(void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(bool)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6 ;
-(bool)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3 ;
-(void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(bool)arg3 ;
-(void)_saveDataIfReachedObjectChangeThreshold;
-(void)_finishedGEORequestInfo:(id)arg1 withSuccess:(bool)arg2 errorType:(unsigned long long)arg3 ;
-(void)_removeKeepAlive;
-(void)_saveNow;
-(void)_runOnWorkQueueAferSeconds:(double)arg1 block:(/*^block*/ id)arg2 ;
-(void)_updateKeepAlive;
-(void)_stopObservingReachabilityChanges;
-(void)_saveDataIfNeededAfterTimeDiff:(double)arg1 ;
-(void)_processPendingGEORequests;
-(void)_processMegaMomentLists;
-(void)_processYearMomentLists;
-(void)_analysisComplete;
-(void)_processNextAnalysisTransaction;
-(void)_waitForReachability;
-(void)_processGEORequestWithRequestInfo:(id)arg1 ;
-(unsigned long long)_processMegaMomentList:(id)arg1 ;
-(id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(bool)arg4 includeHome:(bool)arg5 homeAtEnd:(bool)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned long long*)arg9 outUsedHome:(bool*)arg10 ;
-(unsigned long long)_processYearMomentList:(id)arg1 ;
-(void)_setLocationDataValidForMomentId:(id)arg1 ;
-(id)_geoLocationForCoordinate:(CGSize)arg1 date:(id)arg2 ;
-(void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(bool)arg2 ;
-(void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned long long)arg8 usedHome:(bool)arg9 ;
-(unsigned long long)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 ;
-(id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned long long)arg2 totalPlaceCount:(unsigned long long)arg3 includeAllPlaces:(bool)arg4 includeHome:(bool)arg5 homeAtEnd:(bool)arg6 atLastLevel:(bool)arg7 outOtherNonDominantPlaces:(id)arg8 ;
-(id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(bool)arg2 ;
-(id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(bool)arg3 outAddedHome:(bool*)arg4 ;
-(id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned long long)arg2 homePlace:(id)arg3 ;
-(id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned long long)arg2 ;
-(bool)_canProcessMoments;
-(id)_homeLocation;
-(bool)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2 ;
-(bool)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3 ;
-(bool)_shouldProcessMoments:(id)arg1 ;
-(bool)updateInfoForMoments:(id)arg1 invalidOnly:(bool)arg2 ;
-(bool)updateInfoForMegaMomentLists:(id)arg1 ;
-(bool)updateInfoForYearMomentLists:(id)arg1 ;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(void)_setMomentAnalysisPaused:(bool)arg1 ;
-(void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(bool)arg2 invalidOnly:(bool)arg3 ;
-(void)_addressBookChanged;
-(id)_compactPlaceDescriptionForPlaceResult:(id)arg1 ;
-(unsigned long long)_indexForGeoOrder:(unsigned long long)arg1 inPrioritySet:(id)arg2 ;
-(unsigned long long)_significantPlaceCountInMap:(id)arg1 ;
-(id)_simpleNamesForNameInfoArray:(id)arg1 ;
-(void)updateInfoForInvalidMomentsIfNeeded;
-(bool)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(bool)arg2 ;
-(bool)updateInfoForMomentListWithMomentListId:(id)arg1 ;
@end

