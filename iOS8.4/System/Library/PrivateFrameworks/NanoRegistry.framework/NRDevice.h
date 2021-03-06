/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoRegistry/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSPointerArray, NSMutableArray;

@interface NRDevice : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _nrQueue;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _observers;
	NSPointerArray* _promiscuousObservers;
	NSMutableDictionary* _changeBlocks;
	NSMutableArray* _promiscuousChangeBlocks;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nrQueue;                  //@synthesize nrQueue=_nrQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * properties;                      //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observers;                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSPointerArray * promiscuousObservers;                 //@synthesize promiscuousObservers=_promiscuousObservers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * changeBlocks;                    //@synthesize changeBlocks=_changeBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * promiscuousChangeBlocks;              //@synthesize promiscuousChangeBlocks=_promiscuousChangeBlocks - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForProperty:(id)arg1 ;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)properties;
-(void)setObservers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)observers;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)queueDescription;
-(void)queueAddPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)queueRemovePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(id)queueValueForProperty:(id)arg1 ;
-(BOOL)_queueSetValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_queueFirePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2 ;
-(NSMutableDictionary *)changeBlocks;
-(void)queueMergeWithDevice:(id)arg1 ;
-(void)queueRegisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)queueUnregisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)_firePropertyObserversForProperty:(id)arg1 fromValue:(id)arg2 ;
-(id)initWithDevice:(id)arg1 queue:(id)arg2 withSecureProperties:(BOOL)arg3 ;
-(void)mergeWithDevice:(id)arg1 ;
-(id)propertyNames;
-(void)registerForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unregisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)nrQueue;
-(void)setNrQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSPointerArray *)promiscuousObservers;
-(void)setPromiscuousObservers:(NSPointerArray *)arg1 ;
-(void)setChangeBlocks:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)promiscuousChangeBlocks;
-(void)setPromiscuousChangeBlocks:(NSMutableArray *)arg1 ;
@end

