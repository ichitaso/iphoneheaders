/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSNumber;

@interface SSLookupItemOffer : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSString * offerType; 
@property (nonatomic,readonly) NSNumber * price; 
-(NSString *)buyParameters;
-(NSString *)formattedPrice;
-(NSString *)offerType;
-(NSNumber *)price;
-(id)actionTextForType:(id)arg1 ;
-(void)dealloc;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
@end
