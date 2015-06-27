/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDThumbnailConsumer, TSDThumbnailProducer, TSDThumbnailIdentifier;
@class TSUImage;

@interface TSDTGContext : NSObject {

	id<TSDThumbnailConsumer> _consumer;
	id<TSDThumbnailProducer> _producer;
	id<TSDThumbnailIdentifier> _thumbnailId;
	TSUImage* _thumbnail;
	char _continueThumbnailing;

}

@property (nonatomic,readonly) id<TSDThumbnailConsumer> consumer;                 //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,readonly) id<TSDThumbnailProducer> producer;                 //@synthesize producer=_producer - In the implementation block
@property (assign,nonatomic) id<TSDThumbnailIdentifier> thumbnailId;              //@synthesize thumbnailId=_thumbnailId - In the implementation block
@property (assign,nonatomic) char continueThumbnailing;                           //@synthesize continueThumbnailing=_continueThumbnailing - In the implementation block
@property (nonatomic,retain) TSUImage * thumbnail;                                //@synthesize thumbnail=_thumbnail - In the implementation block
-(id<TSDThumbnailProducer>)producer;
-(id)initWithConsumer:(id)arg1 producer:(id)arg2 ;
-(id<TSDThumbnailIdentifier>)thumbnailId;
-(void)setThumbnailId:(id<TSDThumbnailIdentifier>)arg1 ;
-(char)continueThumbnailing;
-(void)setContinueThumbnailing:(char)arg1 ;
-(void)dealloc;
-(TSUImage *)thumbnail;
-(void)setThumbnail:(TSUImage *)arg1 ;
-(id<TSDThumbnailConsumer>)consumer;
@end
