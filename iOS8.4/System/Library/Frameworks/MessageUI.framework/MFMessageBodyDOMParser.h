/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodyParser.h>

@class DOMDocument;

@interface MFMessageBodyDOMParser : MFMessageBodyParser {

	DOMDocument* _document;

}
+(BOOL)documentContainsAnyQuotation:(id)arg1 ;
-(id)initWithDOMDocument:(id)arg1 ;
-(id)rangeForElement:(id)arg1 ;
-(Class)messageBodyElementClass;
-(void)_consumeAccumulatedNodes:(id)arg1 ;
-(void)extendRange:(id)arg1 toElement:(id)arg2 ;
-(id)rangeFromElement:(id)arg1 toElement:(id)arg2 ;
-(void)dealloc;
-(BOOL)parse;
@end

