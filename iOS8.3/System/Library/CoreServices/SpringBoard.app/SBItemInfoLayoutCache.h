/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:18 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBItemInfoLayoutCache : NSObject {

	float _cachedViewHeight;
	CGSize _referenceSize;
	int _layoutMode;

}
-(float)viewHeightWithReferenceSize:(CGSize)arg1 layoutMode:(int)arg2 generateBlock:(/*^block*/id)arg3 ;
-(char)_isLayoutValidWithReferenceSize:(CGSize)arg1 layoutMode:(int)arg2 ;
-(void)invalidateCache;
@end
