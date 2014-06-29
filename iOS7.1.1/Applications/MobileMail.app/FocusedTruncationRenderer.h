/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIFoundation/NSLayoutManagerDelegate.h>

@class NSTextStorage, NSLayoutManager, NSTextContainer, NSAttributedString;

@interface FocusedTruncationRenderer : NSObject <NSLayoutManagerDelegate> {

	NSTextStorage* _textStorage;
	NSLayoutManager* _layoutManager;
	NSTextContainer* _textContainer;
	NSRange _focusRange;
	NSRange _truncationRange;
	bool _forceTailTruncationRange;

}

@property (nonatomic,copy) NSAttributedString * contents; 
@property (assign,nonatomic) NSRange focusRange;                       //@synthesize focusRange=_focusRange - In the implementation block
-(void)setFocusRange:(NSRange)arg1 ;
-(NSRange)focusRange;
-(void)drawInRect:(CGRect)arg1 ;
-(id)contents;
-(void)setContents:(id)arg1 ;
-(unsigned)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const int*)arg3 characterIndexes:(const unsigned*)arg4 font:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(void).cxx_destruct;
@end
