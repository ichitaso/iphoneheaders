/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAWebAcePicture : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * format; 
@property (nonatomic,copy) NSNumber * height; 
@property (nonatomic,copy) NSNumber * width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acePicture;
+(id)acePictureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(id)encodedClassName;
@end

