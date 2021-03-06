/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDPrototypeChange.h>

@class TSSMutablePropertySet, TSSPropertyMap, TSDPropertySourceForModifyPrototypeChange;

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange> {

	id mPrototype;
	TSSMutablePropertySet* mChangedPropertySet;
	TSSPropertyMap* mChangedPropertyMapBeforeChange;
	TSSPropertyMap* mChangedPropertyMapAfterChange;
	TSDPropertySourceForModifyPrototypeChange* mPropertySourceBeforeChange;
	TSDPropertySourceForModifyPrototypeChange* mPropertySourceAfterChange;
	TSSMutablePropertySet* mPropertiesWithOldValuesRecordedButNotNewValues;

}

@property (readonly) TSSMutablePropertySet * changedPropertySet; 
@property (readonly) TSSPropertyMap * changedPropertyMapBeforeChange; 
@property (readonly) TSSPropertyMap * changedPropertyMapAfterChange; 
@property (readonly) TSSMutablePropertySet * i_propertiesWithOldValuesRecordedButNotNewValues; 
@property (readonly) bool prototypeIsBeingReplaced; 
@property (readonly) bool prototypeIsBeingModified; 
@property (readonly) bool prototypeIsBeingDeleted; 
@property (readonly) id prototype; 
@property (readonly) id replacement; 
@property (readonly) <TSSPropertySource> * propertiesBeforeChange; 
@property (readonly) <TSSPropertySource> * propertiesAfterChange; 
-(bool)prototypeIsBeingReplaced;
-(bool)prototypeIsBeingModified;
-(id)changedPropertyMapBeforeChange;
-(id)propertiesBeforeChange;
-(id)propertiesAfterChange;
-(bool)prototypeIsBeingDeleted;
-(id)initModifyPrototypeChangeForPrototype:(id)arg1 ;
-(id)changedPropertySet;
-(id)i_propertiesWithOldValuesRecordedButNotNewValues;
-(id)changedPropertyMapAfterChange;
-(id)prototype;
-(bool)propertyIsChanging:(int)arg1 ;
-(bool)propertiesAreChanging:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)replacement;
@end

