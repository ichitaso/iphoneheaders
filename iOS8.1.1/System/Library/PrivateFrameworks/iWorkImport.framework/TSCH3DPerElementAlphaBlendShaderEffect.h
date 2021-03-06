/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderEffect.h>

@class NSString;

@interface TSCH3DPerElementAlphaBlendShaderEffect : TSCH3DShaderEffect {

	NSString* mFunctionName;

}

@property (nonatomic,readonly) NSString * functionName; 
+(id)effectWithInterpolationFunctionName:(id)arg1 ;
+(void)setInterpolationRange:(box<glm::detail::tvec1<float> >)arg1 effectsStates:(id)arg2 ;
+(id)variablePerElementAlphaBlendInterpolationRange;
+(id)variablePerElementAlphaBlendValue;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)initWithInterpolationFunctionName:(id)arg1 ;
-(id)variablePerElementAlphaBlendInterpolationRange;
-(id)variablePerElementAlphaBlendValue;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)functionName;
@end

