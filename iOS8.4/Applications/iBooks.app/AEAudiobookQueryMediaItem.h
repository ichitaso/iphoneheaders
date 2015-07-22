/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMMediaItem.h>

@class NSDictionary, NSArray, MPMediaQuery, NSString;

@interface AEAudiobookQueryMediaItem : NSObject <IMMediaItem> {

	MPMediaQuery* _mediaQuery;
	double _totalDuration;
	NSArray* _audiobookChapterSegments;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (nonatomic,readonly) NSArray * chapters; 
@property (nonatomic,readonly) NSArray * timeChapters; 
@property (nonatomic,readonly) NSArray * metadataChapters; 
-(NSArray *)timeChapters;
-(unsigned long long)drmGroupID;
-(void)setupChapters;
-(NSArray *)metadataChapters;
-(double)bookmarkTime;
-(char)hasBeenPlayed;
-(double)availableDuration;
-(id)nowPlayingInfo;
-(id)representativeItem;
-(void)setCurrentTime:(double)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setBookmarkTime:(double)arg1 ;
-(id)initWithMediaQuery:(id)arg1 ;
-(NSArray *)chapters;
-(id)artwork;
-(id)author;
-(id)assetURL;
-(void)playbackFinished:(id)arg1 ;
-(id)mediaItems;
-(double)currentTime;
@end
