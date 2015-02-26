/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFSQLiteConnection.h>

@class NSString;

@interface MFProtectedSQLiteConnection : MFSQLiteConnection {

	NSString* _protectedName;
	long long _vfsOnce;
	NSString* _vfsName;
	BOOL _attached;

}

@property (nonatomic,readonly) BOOL isProtectedDatabaseAttached;              //@synthesize attached=_attached - In the implementation block
-(void)dealloc;
-(void)close;
-(int)attachProtectedDatabase;
-(BOOL)isProtectedDatabaseAttached;
-(id)initWithPath:(id)arg1 databaseName:(id)arg2 protectedName:(id)arg3 ;
-(int)detachProtectedDatabase;
-(const char*)_vfsModuleName;
@end
