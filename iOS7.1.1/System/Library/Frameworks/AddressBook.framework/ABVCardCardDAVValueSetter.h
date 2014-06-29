/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {

	bool _recordIsGroup;
	bool _importingToExistingGroup;

}

@property (assign) bool recordIsGroup;              //@synthesize recordIsGroup=_recordIsGroup - In the implementation block
+(CFDictionaryRef)_personToGroupPropertyMap;
+(int)groupPropertyForPersonProperty:(int)arg1 ;
-(bool)propertyIsValidForPerson:(unsigned)arg1 ;
-(bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5 ;
-(void)setRecordIsGroup:(bool)arg1 ;
-(id)initWithPerson:(void*)arg1 removeExistingProperties:(bool)arg2 ;
-(id)initWithGroup:(void*)arg1 removeExistingProperties:(bool)arg2 ;
-(void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(unsigned*)arg2 ;
-(void)_drainExistingProperties;
-(bool)recordIsGroup;
-(void*)valueForProperty:(unsigned)arg1 ;
-(bool)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
@end
