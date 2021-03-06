/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SBCPlaybackPositionServiceProtocol <NSObject>
@required
-(oneway void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2;
-(oneway void)beginUsingPlaybackPositions;
-(oneway void)endUsingPlaybackPositions;
-(oneway void)synchronizeImmediately;
-(oneway void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1;
-(oneway void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1;
-(oneway void)noteChangedNowPlayingTrackPersistentID:(long long)arg1;
-(oneway void)synchronizeLocalChangesSoon;
-(oneway void)setClientConfiguration:(id)arg1;
@end

