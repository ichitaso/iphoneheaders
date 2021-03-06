/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, PLCloudSharedComment;

@interface PLPhotoCommentCell : UITableViewCell {

	UILabel* _commentContentLabel;
	UILabel* _commentBylineLabel;
	UIView* _styledSeparatorView;
	PLCloudSharedComment* _comment;

}

@property (nonatomic,copy) PLCloudSharedComment * comment;                        //@synthesize comment=_comment - In the implementation block
@property (nonatomic,retain,readonly) UILabel * commentContentLabel;              //@synthesize commentContentLabel=_commentContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UILabel * commentBylineLabel;               //@synthesize commentBylineLabel=_commentBylineLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;               //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(Class)layerClass;
+(float)heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3 ;
+(id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(char)arg2 ;
+(id)_commentStringForComment:(id)arg1 ;
+(id)_attributionStringForComment:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)delete:(id)arg1 ;
-(void)setComment:(PLCloudSharedComment *)arg1 ;
-(void)_updateContent;
-(UIView *)styledSeparatorView;
-(UILabel *)commentContentLabel;
-(UILabel *)commentBylineLabel;
-(PLCloudSharedComment *)comment;
@end

