/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/MediaStreamPlugins/PhotoSharingPlugin.mediastream/PhotoSharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSASPlugin <NSObject>
@optional
+(void)didFindNewAlbum:(id)arg1;
+(void)didFindDeletedAlbumWithGUID:(id)arg1;
+(id)MSASPersonIDsForPollingTriggeredByPushNotification;

@required
+(id)delegatePluginForPersonID:(id)arg1;

@end

