/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSLock;

@interface SKUIMediaSocialProfileOperation : SSVComplexOperation {

	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(id)initWithClientContext:(id)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)_profileWithResponseDictionary:(id)arg1 ;
@end
