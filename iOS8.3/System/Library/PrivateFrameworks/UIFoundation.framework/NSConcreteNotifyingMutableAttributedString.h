/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:55:47 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSConcreteMutableAttributedString.h>

@interface NSConcreteNotifyingMutableAttributedString : NSConcreteMutableAttributedString {

	id _delegate;

}
+(Class)_mutableStringClass;
-(void)edited:(unsigned)arg1 range:(NSRange)arg2 changeInLength:(int)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)beginEditing;
-(void)endEditing;
@end

