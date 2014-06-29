/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSData, NSDate, NSDictionary, NSString;

@interface MBProperties : NSObject {

	NSMutableDictionary* _plist;
	bool _protect;
	bool _protected;

}

@property (nonatomic,readonly) id propertyList;                                   //@synthesize plist=_plist - In the implementation block
@property (assign,getter=isProtected,nonatomic) bool protected;                   //@synthesize protected=_protected - In the implementation block
@property (assign,nonatomic) double systemDomainsVersion; 
@property (nonatomic,retain) NSData * keybagData; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double version; 
@property (assign,getter=wasPasscodeSet,nonatomic) bool passcodeSet; 
@property (assign,getter=isEncrypted,nonatomic) bool encrypted; 
@property (nonatomic,readonly) NSDictionary * applications; 
@property (nonatomic,readonly) NSDictionary * appleIDs; 
@property (nonatomic,retain) NSDictionary * lockdownKeys; 
@property (nonatomic,readonly) NSString * deviceID; 
@property (nonatomic,readonly) NSString * serialNumber; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) NSString * productType; 
@property (nonatomic,readonly) NSString * buildVersion; 
@property (nonatomic,readonly) bool hasCorruptSQLiteDBs; 
+(id)properties;
+(id)propertiesWithFile:(id)arg1 error:(id*)arg2 ;
-(bool)writeToFile:(id)arg1 error:(id*)arg2 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(bool)_boolForKey:(id)arg1 ;
-(id)date;
-(void)setDate:(id)arg1 ;
-(id)buildVersion;
-(void)setVersion:(double)arg1 ;
-(double)version;
-(id)deviceID;
-(id)deviceName;
-(id)_dataForKey:(id)arg1 ;
-(id)_dictionaryForKey:(id)arg1 ;
-(void)_setBool:(bool)arg1 forKey:(id)arg2 ;
-(void)setEncrypted:(bool)arg1 ;
-(id)initWithFile:(id)arg1 error:(id*)arg2 ;
-(double)systemDomainsVersion;
-(void)setSystemDomainsVersion:(double)arg1 ;
-(void)_setData:(id)arg1 forKey:(id)arg2 ;
-(void)_setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)lockdownKeys;
-(id)_stringForLockdownKey:(id)arg1 ;
-(id)appleIDs;
-(void)addApp:(id)arg1 ;
-(bool)wasPasscodeSet;
-(id)keybagData;
-(void)setKeybagData:(id)arg1 ;
-(void)setPasscodeSet:(bool)arg1 ;
-(void)setLockdownKeys:(id)arg1 ;
-(bool)hasCorruptSQLiteDBs;
-(void)addAppleIDsFromSet:(id)arg1 ;
-(id)appWithBundleID:(id)arg1 ;
-(void)addAppsFromArray:(id)arg1 ;
-(void)setProtected:(bool)arg1 ;
-(bool)isEncrypted;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)productType;
-(bool)isProtected;
-(id)applications;
-(id)serialNumber;
@end
