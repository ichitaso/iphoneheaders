/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuSheet.h>

@protocol SCATElement;
@class AXTimer;

@interface SCATModernMenuScrollSheet : SCATModernMenuSheet {

	AXTimer* _elementRefreshTimer;
	<SCATElement>* _scrollableElement;

}

@property (nonatomic,retain) <SCATElement> * scrollableElement;              //@synthesize scrollableElement=_scrollableElement - In the implementation block
@property (nonatomic,retain) AXTimer * elementRefreshTimer;                  //@synthesize elementRefreshTimer=_elementRefreshTimer - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(int)preferredTipObject;
-(id)scrollableElement;
-(id)initWithMenu:(id)arg1 scrollableElement:(id)arg2 ;
-(void)setScrollableElement:(id)arg1 ;
-(void)setElementRefreshTimer:(id)arg1 ;
-(id)elementRefreshTimer;
-(void)dealloc;
@end

