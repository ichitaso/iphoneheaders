/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImage;

@interface _MFActorSnapshotView : UIView {

	UIView* _kitSnapshotView;
	UIImage* _serializedSnapshotImage;
	UIEdgeInsets _snapshotInsets;

}

@property (nonatomic,retain) UIView * kitSnapshotView;                       //@synthesize kitSnapshotView=_kitSnapshotView - In the implementation block
@property (nonatomic,retain) UIImage * serializedSnapshotImage;              //@synthesize serializedSnapshotImage=_serializedSnapshotImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets snapshotInsets;                    //@synthesize snapshotInsets=_snapshotInsets - In the implementation block
-(void)setKitSnapshotView:(UIView *)arg1 ;
-(UIView *)kitSnapshotView;
-(UIImage *)serializedSnapshotImage;
-(void)setSerializedSnapshotImage:(UIImage *)arg1 ;
-(UIEdgeInsets)snapshotInsets;
-(void)setSnapshotInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

