/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __CFSet* CFSetRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _CFCachedURLResponse* CFCachedURLResponseRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct SecCmsMessageStr* SecCmsMessageStrRef;

typedef struct SecCmsSignedDataStr* SecCmsSignedDataStrRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct SBSProcessAssertion* SBSProcessAssertionRef;

typedef struct dispatch_source_type_s* dispatch_source_type_sRef;

typedef struct {
	unsigned eventDateTimestamp : 1;
	unsigned eventSecondsFromGMT : 1;
	unsigned itemDuration : 1;
	unsigned itemEndTime : 1;
	unsigned itemStartTime : 1;
	unsigned persistentID : 1;
	unsigned storeAccountID : 1;
	unsigned containerType : 1;
	unsigned endReasonType : 1;
	unsigned itemType : 1;
	unsigned mediaType : 1;
	unsigned sourceType : 1;
	unsigned offline : 1;
	unsigned sBEnabled : 1;
} SCD_Struct_SS14;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;
