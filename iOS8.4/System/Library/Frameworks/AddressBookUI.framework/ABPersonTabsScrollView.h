/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView;


@protocol ABPersonTabsScrollView <NSObject>
@property (assign,nonatomic) double minimumBottomInset; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) id<ABPersonTabsLayoutManager> tabsLayoutManager; 
@required
-(double)minimumBottomInset;
-(void)setMinimumBottomInset:(double)arg1;
-(id<ABPersonTabsLayoutManager>)tabsLayoutManager;
-(void)setTabsLayoutManager:(id)arg1;
-(void)setBackgroundView:(id)arg1;
-(UIView *)backgroundView;

@end
