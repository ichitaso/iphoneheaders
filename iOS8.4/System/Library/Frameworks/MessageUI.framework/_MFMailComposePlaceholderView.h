/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIScrollView.h>

@class MFComposeHeaderView, MFComposeSubjectView;

@interface _MFMailComposePlaceholderView : UIScrollView {

	MFComposeHeaderView* _toField;
	MFComposeHeaderView* _multiView;
	MFComposeSubjectView* _subjectView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSubject:(id)arg1 ;
@end
