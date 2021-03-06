/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpeakThis/SpeakThis-Structs.h>
@class AXUIElement;

@interface AXSpeakingRange : NSObject {

	AXUIElement* _element;
	NSRange _range;

}

@property (nonatomic,retain) AXUIElement * element;              //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) NSRange range;                      //@synthesize range=_range - In the implementation block
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)setElement:(AXUIElement *)arg1 ;
-(AXUIElement *)element;
@end

