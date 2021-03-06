/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryConcurrentOperation.h>

@class NSError, NSMutableArray, NSURLSession, ML3MusicLibrary, NSString, NSURL;

@interface CloudArtworkImportOperation : CloudLibraryConcurrentOperation {

	NSError* _operationError;
	NSMutableArray* _completionHandlers;
	unsigned _mediaType;
	NSURLSession* _URLSession;
	ML3MusicLibrary* _musicLibrary;
	unsigned long long _cloudID;
	NSString* _artworkToken;
	long long _artworkType;
	long long _sourceType;
	NSURL* _assetURL;

}

@property (nonatomic,readonly) NSURLSession * URLSession;                   //@synthesize URLSession=_URLSession - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * musicLibrary;              //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (nonatomic,readonly) unsigned long long cloudID;                  //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,readonly) NSString * artworkToken;                     //@synthesize artworkToken=_artworkToken - In the implementation block
@property (nonatomic,readonly) long long artworkType;                       //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) long long sourceType;                        //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                            //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                                //@synthesize assetURL=_assetURL - In the implementation block
-(id)initWithURLSession:(id)arg1 musicLibrary:(id)arg2 cloudID:(unsigned long long)arg3 artworkToken:(id)arg4 artworkType:(long long)arg5 sourceType:(long long)arg6 ;
-(unsigned long long)cloudID;
-(void)callCompletionHandlers;
-(NSURLSession *)URLSession;
-(id)description;
-(void)start;
-(long long)sourceType;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(ML3MusicLibrary *)musicLibrary;
-(NSString *)artworkToken;
-(long long)artworkType;
-(NSURL *)assetURL;
-(unsigned)mediaType;
-(void)setMediaType:(unsigned)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
@end

