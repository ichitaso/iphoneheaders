/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDReference;

@interface EDPane : NSObject {

	double mXSplitPosition;
	double mYSplitPosition;
	EDReference* mTopLeftCell;
	int mActivePane;
	int mPaneState;

}
+(id)pane;
-(void)dealloc;
-(id)init;
-(int)activePane;
-(double)xSplitPosition;
-(double)ySplitPosition;
-(id)topLeftCell;
-(int)paneState;
-(void)setTopLeftCell:(id)arg1 ;
-(void)setXSplitPosition:(double)arg1 ;
-(void)setYSplitPosition:(double)arg1 ;
-(void)setActivePane:(int)arg1 ;
-(void)setPaneState:(int)arg1 ;
@end
