/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODIState, NSMutableDictionary;

@interface ODIHierarchy : NSObject {

	int mType;
	int mMaxMappableTreeDepth;
	ODIState* mState;
	NSMutableDictionary* mNodeInfoMap;

}
+(bool)mapIdentifier:(id)arg1 state:(id)arg2 ;
-(void)dealloc;
-(ODIHRangeVector*)mapRangesForNode:(id)arg1 ;
-(void)mapLogicalBoundsWithXRanges:(const ODIHRangeVector*)arg1 ;
-(id)infoForNode:(id)arg1 ;
-(void)map;
-(id)initWithType:(int)arg1 state:(id)arg2 ;
-(void)createInfoForNode:(id)arg1 depth:(int)arg2 ;
-(void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 ;
-(CGRect)boundsOfNode:(id)arg1 ;
-(void)mapNode:(id)arg1 ;
@end
