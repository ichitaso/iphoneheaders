/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_ta/TextInput_ta-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_ta : TIKeyboardInputManagerZephyr {

	void* _internalToExternalTransliterator;
	void* _externalToInternalTransliterator;
	bool _isQWERTYLayout;

}
-(void)dealloc;
-(void)configureTransliterators;
-(void)closeTransliterators;
-(void)initTransliteratorsWithID:(id)arg1 ;
-(bool)doesComposeText;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(bool)dictionaryUsesExternalEncoding;
-(id)nonstopPunctuationCharacters;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned long long*)arg4 fromVariantKey:(bool)arg5 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
@end

