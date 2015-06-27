/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:24:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Image.qldisplay/Image
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject, NSMutableSet;

@interface QLImageLoader : NSObject {

	NSCache* _images;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _cancelledTasks;
	int _currentLoadIndex;

}
+(id)sharedLoader;
-(int)loadImageAtURL:(id)arg1 imageHint:(id)arg2 dispatchQueue:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(void)_scheduleCacheCleaning;
-(char)_isLoadCancelled:(int)arg1 ;
-(void)cancelLoad:(int)arg1 ;
-(void)_cleanCache;
-(void)dealloc;
-(id)init;
-(void)clearCache;
@end
