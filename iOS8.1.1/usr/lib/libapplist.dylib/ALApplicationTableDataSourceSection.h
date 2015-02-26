/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /usr/lib/libapplist.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ALApplicationTableDataSource, NSDictionary, NSArray, NSCondition, NSString;

@interface ALApplicationTableDataSourceSection : NSObject {

	ALApplicationTableDataSource* _dataSource;
	NSDictionary* _descriptor;
	NSArray* _displayNames;
	NSArray* _displayIdentifiers;
	double iconSize;
	BOOL isStaticSection;
	long long loadingState;
	double loadStartTime;
	NSCondition* loadCondition;

}

@property (nonatomic,readonly) NSDictionary * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * footerTitle; 
+(void)loadIconsFromBackground;
+(void)initialize;
-(void)loadContent;
-(void)completedLoading;
-(id)initWithDescriptor:(id)arg1 dataSource:(id)arg2 loadsAsynchronously:(BOOL)arg3 ;
-(BOOL)waitForContentUntilDate:(id)arg1 ;
-(id)displayIdentifierForRow:(long long)arg1 ;
-(id)cellDescriptorForRow:(long long)arg1 ;
-(id)tableView:(id)arg1 cellForRow:(long long)arg2 ;
-(void)updateCell:(id)arg1 forRow:(long long)arg2 withLoadedIconOfSize:(double)arg3 forDisplayIdentifier:(id)arg4 ;
-(void)dealloc;
-(NSString *)title;
-(void)detach;
-(NSString *)footerTitle;
-(NSDictionary *)descriptor;
-(long long)rowCount;
@end
