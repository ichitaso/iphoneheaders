/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _UIBarAppearanceStorage : NSObject {

	NSMutableDictionary* backgroundImages;

}
+(int)typicalBarPosition;
-(void)dealloc;
-(id)backgroundImageForBarPosition:(int)arg1 barMetrics:(int)arg2 ;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(int)arg2 barMetrics:(int)arg3 ;
-(char)hasAnyCustomBackgroundImage;
@end

