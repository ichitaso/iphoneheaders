/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISDataProvider.h>

@class SUClientInterface, ISPropertyListProvider;

@interface SUStorePageDataProvider : ISDataProvider {

	SUClientInterface* _clientInterface;
	long long _outputType;
	ISPropertyListProvider* _propertyListDataProvider;

}

@property (retain) SUClientInterface * clientInterface;                          //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign) long long outputType;                                         //@synthesize outputType=_outputType - In the implementation block
@property (copy) ISPropertyListProvider * propertyListDataProvider;              //@synthesize propertyListDataProvider=_propertyListDataProvider - In the implementation block
-(void)dealloc;
-(void)setOutputType:(long long)arg1 ;
-(long long)outputType;
-(id)clientInterface;
-(void)setClientInterface:(id)arg1 ;
-(id)propertyListDataProvider;
-(bool)parseData:(id)arg1 returningError:(id*)arg2 ;
-(void)_loadPersonalizedStoreOffersForPage:(id)arg1 ;
-(void)setPropertyListDataProvider:(id)arg1 ;
@end

