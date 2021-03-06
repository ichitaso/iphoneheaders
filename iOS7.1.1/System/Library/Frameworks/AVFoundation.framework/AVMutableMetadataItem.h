/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSString, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem {

	AVMutableMetadataItemInternal* _mutablePriv;

}

@property (copy) <NSObject><NSCopying> * key; 
@property (copy) NSString * keySpace; 
@property (copy) NSLocale * locale; 
@property (assign) SCD_Struct_CM4 time; 
@property (assign) SCD_Struct_CM4 duration; 
@property (copy) <NSObject><NSCopying> * value; 
@property (copy) NSDictionary * extraAttributes; 
+(id)metadataItem;
-(id)keySpace;
-(SCD_Struct_CM4)duration;
-(void)setDuration:(SCD_Struct_CM4)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setLocale:(id)arg1 ;
-(void)setTime:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)time;
-(id)key;
-(id)locale;
-(void)setKey:(id)arg1 ;
-(void)setExtraAttributes:(id)arg1 ;
-(id)extraAttributes;
-(void)setKeySpace:(id)arg1 ;
@end

