/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:01:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/NSCopying.h>

@class NSString;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying> {

	MTLComputePipelineDescriptorPrivate* _private;

}

@property (nonatomic,copy) NSString * label; 
@property (nonatomic,retain) id<MTLFunction> computeFunction; 
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)setComputeFunction:(id<MTLFunction>)arg1 ;
-(id<MTLFunction>)computeFunction;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)validate;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end
