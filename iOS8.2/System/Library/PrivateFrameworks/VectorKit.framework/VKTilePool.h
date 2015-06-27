/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileKeyMap.h>

@class NSLock;

@interface VKTilePool : VKTileKeyMap {

	NSLock* _lock;

}
-(void)dealloc;
-(unsigned long)count;
-(id)init;
-(void)removeAllObjects;
-(void)removeObjectForKey:(const VKTileKey*)arg1 ;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(id)objectForKey:(const VKTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const VKTileKey*)arg2 ;
-(id)initWithMapType:(int)arg1 ;
@end
