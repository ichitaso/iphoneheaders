/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:19:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	double field1;
	double field2;
	char field3;
} SCD_Struct_OT2;

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

