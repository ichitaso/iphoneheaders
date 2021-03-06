/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicMediaQueryDataSource.h>

@class NSArray;

@interface MusicProfileAlbumsDataSource : MusicMediaQueryDataSource {

	NSArray* _sectionEntities;
	vector<_NSRange, std::__1::allocator<_NSRange> >* _sectionRanges;

}
-(unsigned long long)numberOfSections;
-(BOOL)showsIndexBar;
-(BOOL)usesSections;
-(id)sectionEntities;
-(void)_invalidateCalculatedEntities;
-(id)localizedSectionTitleAtIndex:(unsigned long long)arg1 ;
-(NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1 ;
-(id)entities;
@end

