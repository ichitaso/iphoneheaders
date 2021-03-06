/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class HDSQLiteDatabase;

@interface HDDatabaseMigrator : NSObject {

	HDSQLiteDatabase* _database;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;              //@synthesize database=_database - In the implementation block
-(id)initWithDatabase:(id)arg1 ;
-(id)init;
-(HDSQLiteDatabase *)database;
-(char)executeSQL:(id)arg1 error:(id*)arg2 ;
-(char)executeSQL:(id)arg1 argument:(id)arg2 error:(id*)arg3 ;
-(char)executeSQLStatements:(id)arg1 error:(id*)arg2 ;
-(int)migrateUnprotectedDatabaseFromVersion:(int)arg1 toVersion:(int)arg2 error:(id*)arg3 ;
-(int)migrateProtectedDatabaseFromVersion:(int)arg1 toVersion:(int)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
-(int)statusForUnhandledVersion:(int)arg1 error:(id*)arg2 ;
-(int)fatalStatusForVersion:(int)arg1 errorMessage:(id)arg2 error:(id*)arg3 ;
@end

