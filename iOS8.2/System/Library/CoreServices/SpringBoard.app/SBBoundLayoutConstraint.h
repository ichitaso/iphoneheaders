/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>

@class NSString;

@interface SBBoundLayoutConstraint : NSLayoutConstraint {

	id _object;
	NSString* _keyPath;

}

@property (assign,nonatomic) id object;                     //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constantObject:(id)arg7 keyPath:(id)arg8 ;
-(void)bindConstantToObject:(id)arg1 keyPath:(id)arg2 ;
-(void)_boundValueDidChange;
-(void)dealloc;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)unbind;
@end

