/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:08:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/imavagent.app/imavagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVConferencePreviewClientDelegate
@optional
-(void)didReceiveErrorFromCamera:(unsigned)arg1 error:(id)arg2;
-(void)didReceiveFirstPreviewFrameFromCamera:(unsigned)arg1;
-(void)didChangeLocalVideoAttributes:(id)arg1;
-(void)didChangeLocalScreenAttributes:(id)arg1;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)didReceiveCommError;
@end

