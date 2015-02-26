/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@interface KNMacUILayout : NSObject <NSCopying, NSMutableCopying> {

	BOOL mShowingSidebar;
	BOOL mShowingNavigatorViewInSidebar;
	BOOL mShowingPresenterNotes;
	BOOL mShowingLightTable;
	BOOL mShowingInspectorPane;
	BOOL mShowingMasterSlides;
	long long mInspectorPaneViewMode;

}

@property (getter=isShowingSidebar,nonatomic,readonly) BOOL showingSidebar; 
@property (nonatomic,readonly) long long sidebarViewMode; 
@property (getter=isShowingLightTable,nonatomic,readonly) BOOL showingLightTable; 
@property (getter=isShowingPresenterNotes,nonatomic,readonly) BOOL showingPresenterNotes; 
@property (getter=isShowingInspectorPane,nonatomic,readonly) BOOL showingInspectorPane; 
@property (nonatomic,readonly) long long inspectorPaneViewMode; 
@property (getter=isShowingMasterSlides,nonatomic,readonly) BOOL showingMasterSlides; 
@property (getter=p_isShowingNavigatorViewInSidebar,nonatomic,readonly) BOOL p_showingNavigatorViewInSidebar; 
+(id)uiLayoutFromArchive:(const DesktopUILayoutArchive*)arg1 unarchiver:(id)arg2 context:(id)arg3 ;
-(void)saveToArchive:(DesktopUILayoutArchive*)arg1 archiver:(id)arg2 ;
-(id)archivedUILayoutInContext:(id)arg1 ;
-(BOOL)isShowingSidebar;
-(long long)sidebarViewMode;
-(BOOL)isShowingPresenterNotes;
-(BOOL)isShowingLightTable;
-(BOOL)isShowingInspectorPane;
-(long long)inspectorPaneViewMode;
-(BOOL)p_isShowingNavigatorViewInSidebar;
-(BOOL)isShowingMasterSlides;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
