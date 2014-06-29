/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UIKeyboardCandidateViewInline.h>

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {

	CGRect _collapsedRect;
	CGSize presentationSize;

}

@property (assign) CGSize presentationSize; 
+(double)defaultExtendedControlHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)candidatesDidChange;
-(id)activeCandidateList;
-(void)setCandidateViewExtended:(bool)arg1 ;
-(unsigned long long)_numberOfColumns:(bool)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(CGSize)presentationSize;
@end
