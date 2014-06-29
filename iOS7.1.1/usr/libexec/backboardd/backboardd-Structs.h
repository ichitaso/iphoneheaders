/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct {
	unsigned field1[8];
} SCD_Struct_BK0;

typedef struct __GSEvent* GSEventRef;

typedef struct BKProcessTimes {
	double execTime;
	double beginUserCPUElapsedTime;
	double beginSystemCPUElapsedTime;
	double beginIdleCPUElapsedTime;
	double beginApplicationCPUElapsedTime;
} BKProcessTimes;

typedef struct {
	BOOL field1[128];
	double field2;
	int field3;
	BOOL field4;
	BOOL field5;
	BOOL field6;
	unsigned char field7[0];
} SCD_Struct_BK3;

typedef struct {
	int field1;
	int field2;
	CGPoint field3;
	CGPoint field4;
	unsigned field5;
	unsigned long long field6;
	void field7;
	int field8;
	int field9;
	unsigned field10;
	unsigned long long field11;
	unsigned char field12[0];
} SCD_Struct_BK4;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFString* CFStringRef;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct __IOHIDEventSystem* IOHIDEventSystemRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __IOHIDEventSystemConnection* IOHIDEventSystemConnectionRef;

typedef struct __IOHIDService* IOHIDServiceRef;
