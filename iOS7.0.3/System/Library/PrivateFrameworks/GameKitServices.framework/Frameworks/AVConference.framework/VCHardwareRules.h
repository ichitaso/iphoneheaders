/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSMutableArray;

@interface VCHardwareRules : NSObject {

	NSMutableDictionary* supportedEncodingRules;
	NSMutableDictionary* supportedDecodingRules;
	int encodeScore;
	int decodeScore;
	BOOL encodeHiDef;
	BOOL decodeHiDef;
	NSString* machineName;
	NSMutableArray* supportedPayloads;

}

@property (readonly) int encodeScore; 
@property (readonly) int decodeScore; 
@property (readonly) BOOL encodeHiDef; 
@property (readonly) BOOL decodeHiDef; 
@property (readonly) NSString * machineName; 
@property (readonly) NSMutableArray * supportedPayloads; 
+(id)VCHardwareRulesSingleton;
-(void)dealloc;
-(id)init;
-(id)supportedPayloads;
-(id)supportedEncodingSizesForBitrate:(id)arg1 andPayload:(int)arg2 ;
-(id)supportedDecodingSizesForBitrate:(id)arg1 andPayload:(int)arg2 ;
-(id)supportedEncodingRulesForBitrate:(id)arg1 andPayload:(int)arg2 ;
-(id)supportedDecodingRulesForBitrate:(id)arg1 andPayload:(int)arg2 ;
-(void)createSupportedPayloads;
-(void)createSupportedRuleSets;
-(void)setPreferredVideoRules;
-(BOOL)canDoHiDefEncoding;
-(int)getHardwareScore;
-(BOOL)canDoHiDefDecoding;
-(BOOL)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4 forAspectRatio:(double)arg5 ;
-(id)supportedEncodingRulesFromDictionaryForPayload:(int)arg1 ;
-(id)supportedDecodingRulesFromDictionaryForPayload:(int)arg1 ;
-(BOOL)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4 forAspectRatio:(double)arg5 forPayload:(int)arg6 ;
-(float)getBestFramerateForFrameWidth:(int)arg1 frameHeight:(int)arg2 isEncoding:(BOOL)arg3 forPayload:(int)arg4 ;
-(void)getBestEncodingFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 ;
-(id)supportedEncodingSizesFromDictionaryForPayload:(int)arg1 ;
-(id)filterRules:(id)arg1 byBitrateRule:(id)arg2 ;
-(id)supportedDecodingSizesFromDictionaryForPayload:(int)arg1 ;
-(void)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 isEncoding:(BOOL)arg4 ;
-(float)getBestFramerateForFrameWidth:(int)arg1 frameHeight:(int)arg2 isEncoding:(BOOL)arg3 ;
-(void)calculateEncodingScore;
-(void)calculateDecodingScore;
-(id)getCPUTypeStringForMachineType:(int)arg1 ;
-(int)getScoreFromHardwareInfo:(id)arg1 cpuFamily:(int)arg2 frequency:(int)arg3 numProcs:(int)arg4 ;
-(BOOL)isGVAEncoderAvailable;
-(int)getCPUFamilyType;
-(BOOL)isMacBookAirModel;
-(BOOL)isMachineNewerThanSandybridge:(int)arg1 ;
-(BOOL)isHiDefCapapable;
-(BOOL)useSoftFramerateSwitching;
-(void)getBestPreviewFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 ;
-(void)getBestDecodingFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 ;
-(float)getBestEncodingFrameRateForFrameWidth:(int)arg1 frameHeight:(int)arg2 ;
-(float)getBestDecodingFrameRateForFrameWidth:(int)arg1 frameHeight:(int)arg2 ;
-(void)resetEncodingRulesForCamera:(unsigned)arg1 ;
-(int)encodeScore;
-(int)decodeScore;
-(BOOL)encodeHiDef;
-(BOOL)decodeHiDef;
-(id)machineName;
@end

