/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableDataSource.h>

@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource {

	NSArray* _concerns;
	long long _selectedConcernIndex;
	SUTextViewCell* _textViewCell;

}

@property (nonatomic,retain) NSArray * concerns;                           //@synthesize concerns=_concerns - In the implementation block
@property (assign,nonatomic) long long selectedConcernIndex;               //@synthesize selectedConcernIndex=_selectedConcernIndex - In the implementation block
@property (nonatomic,readonly) SUTextViewCell * textViewCell;              //@synthesize textViewCell=_textViewCell - In the implementation block
-(void)dealloc;
-(id)init;
-(long long)numberOfRowsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(long long)tableViewStyle;
-(id)cellForIndexPath:(id)arg1 ;
-(double)cellHeightForIndexPath:(id)arg1 ;
-(long long)selectedConcernIndex;
-(void)setSelectedConcernIndex:(long long)arg1 ;
-(id)textViewCell;
-(void)setConcerns:(id)arg1 ;
-(id)concerns;
-(id)_titleCellForIndexPath:(id)arg1 ;
@end

