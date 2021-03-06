/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, CoreDAVResourceTypeItem, NSString, NSSet, NSDictionary, CoreDAVSupportedReportSetItem;

@interface CoreDAVContainer : NSObject {

	bool _isUnauthenticated;
	NSURL* _url;
	CoreDAVResourceTypeItem* _resourceType;
	NSString* _containerTitle;
	NSSet* _privileges;
	NSString* _pushKey;
	NSDictionary* _pushTransports;
	NSURL* _resourceID;
	CoreDAVSupportedReportSetItem* _supportedReportSetItem;
	NSString* _quotaAvailable;
	NSString* _quotaUsed;
	NSURL* _owner;
	NSURL* _addMemberURL;
	NSDictionary* _bulkRequests;
	NSString* _syncToken;

}

@property (retain) NSURL * url;                                                         //@synthesize url=_url - In the implementation block
@property (assign) bool isUnauthenticated;                                              //@synthesize isUnauthenticated=_isUnauthenticated - In the implementation block
@property (retain) CoreDAVResourceTypeItem * resourceType;                              //@synthesize resourceType=_resourceType - In the implementation block
@property (retain) NSString * containerTitle;                                           //@synthesize containerTitle=_containerTitle - In the implementation block
@property (retain) NSSet * privileges;                                                  //@synthesize privileges=_privileges - In the implementation block
@property (retain) NSString * pushKey;                                                  //@synthesize pushKey=_pushKey - In the implementation block
@property (retain) NSDictionary * pushTransports;                                       //@synthesize pushTransports=_pushTransports - In the implementation block
@property (retain) NSURL * resourceID;                                                  //@synthesize resourceID=_resourceID - In the implementation block
@property (retain) NSString * quotaAvailable;                                           //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
@property (retain) NSString * quotaUsed;                                                //@synthesize quotaUsed=_quotaUsed - In the implementation block
@property (readonly) NSSet * supportedReports; 
@property (retain) NSURL * owner;                                                       //@synthesize owner=_owner - In the implementation block
@property (retain) NSURL * addMemberURL;                                                //@synthesize addMemberURL=_addMemberURL - In the implementation block
@property (retain) NSDictionary * bulkRequests;                                         //@synthesize bulkRequests=_bulkRequests - In the implementation block
@property (retain) NSString * syncToken;                                                //@synthesize syncToken=_syncToken - In the implementation block
@property (readonly) NSSet * resourceTypeAsStringSet; 
@property (readonly) bool isPrincipal; 
@property (readonly) NSSet * privilegesAsStringSet; 
@property (readonly) bool hasReadPrivileges; 
@property (readonly) bool hasWriteContentPrivileges; 
@property (readonly) bool hasWritePropertiesPrivileges; 
@property (readonly) bool hasBindPrivileges; 
@property (readonly) NSSet * supportedReportsAsStringSet; 
@property (readonly) bool supportsPrincipalPropertySearchReport; 
@property (readonly) bool supportsSyncCollectionReport; 
@property (retain) CoreDAVSupportedReportSetItem * supportedReportSetItem;              //@synthesize supportedReportSetItem=_supportedReportSetItem - In the implementation block
+(id)copyPropertyMappingsForParser;
+(id)convertPushTransportsForNSServerNotificationCenter:(id)arg1 ;
-(id)bulkRequests;
-(void)setBulkRequests:(id)arg1 ;
-(id)pushKey;
-(void)setPushKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(id)initWithURL:(id)arg1 andProperties:(id)arg2 ;
-(void)applyParsedProperties:(id)arg1 ;
-(id)resourceType;
-(bool)isUnauthenticated;
-(id)containerTitle;
-(id)privilegesAsStringSet;
-(id)resourceID;
-(id)quotaAvailable;
-(id)quotaUsed;
-(id)supportedReportsAsStringSet;
-(id)pushTransports;
-(id)syncToken;
-(void)setResourceType:(id)arg1 ;
-(void)setIsUnauthenticated:(bool)arg1 ;
-(void)setContainerTitle:(id)arg1 ;
-(id)privileges;
-(void)setPrivileges:(id)arg1 ;
-(void)setResourceID:(id)arg1 ;
-(void)setQuotaAvailable:(id)arg1 ;
-(void)setQuotaUsed:(id)arg1 ;
-(void)setSupportedReportSetItem:(id)arg1 ;
-(void)setAddMemberURL:(id)arg1 ;
-(void)setPushTransports:(id)arg1 ;
-(void)setSyncToken:(id)arg1 ;
-(id)supportedReportSetItem;
-(id)supportedReports;
-(bool)_anyPrivilegesMatches:(/*^block*/ id)arg1 ;
-(id)resourceTypeAsStringSet;
-(bool)isPrincipal;
-(bool)hasReadPrivileges;
-(bool)hasWriteContentPrivileges;
-(bool)hasWritePropertiesPrivileges;
-(bool)hasBindPrivileges;
-(bool)supportsPrincipalPropertySearchReport;
-(bool)supportsSyncCollectionReport;
-(id)addMemberURL;
-(id)owner;
-(void)setOwner:(id)arg1 ;
@end

