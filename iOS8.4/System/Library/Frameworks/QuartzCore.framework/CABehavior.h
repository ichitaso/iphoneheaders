/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCoding.h>
#import <QuartzCore/NSCopying.h>

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSCoding, NSCopying> {

	void* _attr;
	unsigned _refcount;
	unsigned _uid;
	void* _priv;

}

@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * name; 
@property (__weak) id delegate; 
@property (copy) NSDictionary * style; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(/*function pointer*/void*)CA_setterForProperty:(const CAPropertyInfo*)arg1 ;
+(/*function pointer*/void*)CA_getterForProperty:(const CAPropertyInfo*)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)behavior;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(BOOL)shouldArchiveValueForKey:(id)arg1 ;
-(void)_setCARenderBehavior:(Behavior*)arg1 ;
-(id)retain;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(unsigned long long)retainCount;
-(id)debugDescription;
-(id)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)style;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setStyle:(NSDictionary *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(oneway void)release;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

