/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUContinuation.h>

@class SUPurchaseManager;

@interface SUPurchaseContinuation : SUContinuation {

	id _purchase;
	SUPurchaseManager* _purchaseManager;

}

@property (nonatomic,readonly) id purchase;                                           //@synthesize purchase=_purchase - In the implementation block
@property (assign,nonatomic,__weak) SUPurchaseManager * purchaseManager;              //@synthesize purchaseManager=_purchaseManager - In the implementation block
-(id)purchase;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)setPurchaseManager:(id)arg1 ;
-(id)purchaseManager;
-(id)initWithPurchase:(id)arg1 ;
@end
