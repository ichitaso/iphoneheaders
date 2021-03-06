/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/MobileContainerManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection, NSString, NSUUID, NSURL, NSDictionary;

@interface MCMContainer : NSObject {

	NSXPCConnection* _xpcConnection;
	NSString* _identifier;
	NSUUID* _uuid;
	long long _containerClass;

}

@property (nonatomic,readonly) NSUUID * uuid; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSDictionary * info; 
@property (nonatomic,readonly) long long containerClass; 
@property (getter=isTemporary,nonatomic,readonly) BOOL temporary; 
+(id)containerWithIdentifier:(id)arg1 error:(id*)arg2 ;
+(id)containerWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 error:(id*)arg4 ;
+(id)temporaryContainerWithIdentifier:(id)arg1 existed:(BOOL*)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 uuid:(id)arg2 containerClass:(long long)arg3 error:(id*)arg4 ;
-(void)markDeleted;
-(BOOL)_setupXpcCnnection;
-(long long)_getContainerClass;
-(id)_getMetadataInfoFromServer;
-(void)_errorOccurred;
-(void)_invalidateObject;
-(BOOL)isTemporary;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)url;
-(NSString *)identifier;
-(NSDictionary *)info;
-(NSUUID *)uuid;
-(long long)containerClass;
-(id)initWithIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 existed:(BOOL*)arg3 temp:(BOOL)arg4 error:(id*)arg5 ;
-(void)destroyContainerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)infoValueForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)recreateDefaultStructureWithError:(id*)arg1 ;
-(BOOL)regenerateDirectoryUUIDWithError:(id*)arg1 ;
@end

