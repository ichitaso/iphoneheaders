/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <iBooks/AEPopoverAnnotationEditor.h>

@protocol AEAnnotation, AEAnnotationEditorDelegate;
@class AETouchOutsideViewGestureRecognizer, AEAnnotationTheme, UIView, NSString, IMTheme;

@interface AEAnnotationPopoverViewController : UIViewController <UIGestureRecognizerDelegate, AEPopoverAnnotationEditor> {

	AETouchOutsideViewGestureRecognizer* mHideOnTouchGestureRecognizer;
	id<AEAnnotation> mAnnotation;
	AEAnnotationTheme* mAnnotationTheme;
	int mPosition;
	id mObserver;
	char _editsOnLaunch;
	UIView* _presentationView;
	id<AEAnnotationEditorDelegate> _delegate;
	CGRect _presentationRect;

}

@property (nonatomic,retain) UIView * presentationView;                                   //@synthesize presentationView=_presentationView - In the implementation block
@property (assign,nonatomic) CGRect presentationRect;                                     //@synthesize presentationRect=_presentationRect - In the implementation block
@property (assign,nonatomic,__weak) id<AEAnnotationEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int position; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<AEAnnotation> annotation; 
@property (nonatomic,retain) AEAnnotationTheme * annotationTheme; 
@property (assign,nonatomic) char editsOnLaunch;                                          //@synthesize editsOnLaunch=_editsOnLaunch - In the implementation block
@property (nonatomic,retain) IMTheme * theme; 
-(char)editsOnLaunch;
-(AEAnnotationTheme *)annotationTheme;
-(void)setAnnotationTheme:(AEAnnotationTheme *)arg1 ;
-(void)setEditsOnLaunch:(char)arg1 ;
-(void)releaseOutlets;
-(void)willShow;
-(void)presentFromRect:(CGRect)arg1 view:(id)arg2 ;
-(char)canPresentInPosition:(int)arg1 ;
-(CGRect)p_containerFrameForView:(id)arg1 ;
-(void)setPresentationView:(UIView *)arg1 ;
-(void)setPresentationRect:(CGRect)arg1 ;
-(void)popInAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)hideAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(int)willPresentInPosition:(CGRect)arg1 view:(id)arg2 ;
-(CGRect)presentationRect;
-(UIView *)presentationView;
-(void)hide;
-(void)dealloc;
-(void)setDelegate:(id<AEAnnotationEditorDelegate>)arg1 ;
-(id)init;
-(id<AEAnnotationEditorDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(id<AEAnnotation>)annotation;
-(void)setAnnotation:(id<AEAnnotation>)arg1 ;
-(void)didShow;
-(void)willHide;
-(void)didHide;
@end

