/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:26 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBIconModelApplicationDataSource <NSObject>
@required
-(id)defaultIconState;
-(char)updateAppIconVisibilityOverridesShowing:(id*)arg1 hiding:(id*)arg2;
-(int)appVisibilityOverrideForBundleIdentifier:(id)arg1;
-(char)isNewsstandSupported;
-(char)isNewsstandEnabled;
-(id)firstPageLeafIdentifiers;
-(id)allApplications;

@end
