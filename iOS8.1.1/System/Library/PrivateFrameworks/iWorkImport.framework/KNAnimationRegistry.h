/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface KNAnimationRegistry : NSObject {

	NSDictionary* mClassesForTypeAndName;
	NSDictionary* mClassesForTypeAndCategory;
	NSDictionary* mClassesForTypeAndFilter;
	NSDictionary* mClassesForTypeAndObsoleteName;
	NSDictionary* mAlternateEffectIdentifiersForEffectIdentifierAndFilter;
	NSArray* mAnimationInfos;

}
+(BOOL)p_dumpRegistry;
+(id)localizedCategoryNameForCategory:(int)arg1 ;
+(id)animationsInBundle;
+(id)categoryNameForPluginClass:(Class)arg1 ;
+(id)localizedNameForUnsupportedAnimation:(id)arg1 ;
+(id)instance;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 includeObsoleteNames:(BOOL)arg3 drawable:(id)arg4 ;
-(id)p_buildAlternateFilterMap;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 includeObsoleteNames:(BOOL)arg3 ;
-(id)animationInfoForEffectIdentifier:(id)arg1 animationType:(int)arg2 ;
-(id)distinctCategoriesForType:(int)arg1 ;
-(id)animationInfosForAnimationType:(int)arg1 category:(id)arg2 ;
-(id)allAnimationInfos;
-(BOOL)canMapEffectIdentifier:(id)arg1 animationType:(int)arg2 toEffectIdentifier:(id)arg3 includeObsoleteNames:(BOOL)arg4 forDrawable:(id)arg5 ;
-(id)animationInfosForAnimationType:(int)arg1 filter:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
