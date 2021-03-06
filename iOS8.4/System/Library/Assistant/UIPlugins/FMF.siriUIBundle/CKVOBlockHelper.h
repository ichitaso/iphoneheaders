/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKVOBlockHelper : NSObject {

	NSMutableDictionary* blocksForIdentifier;
	id observedObject;

}

@property (nonatomic,readonly) NSMutableDictionary * blocksForIdentifier; 
@property (nonatomic,__weak,readonly) id observedObject; 
+(id)helperForObject:(id)arg1 create:(BOOL)arg2 ;
-(id)keypathForKey:(id)arg1 ;
-(id)keyForKeyPath:(id)arg1 identifier:(id)arg2 ;
-(NSMutableDictionary *)blocksForIdentifier;
-(id)canonicalKeyForKey:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithObject:(id)arg1 ;
-(id)observedObject;
@end

