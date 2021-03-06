/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSString;

@interface AppReceiptRefreshOperationOptions : NSObject <NSCopying> {

	long long _authenticationPromptStyle;
	NSString* _bundleIdentifier;
	unsigned long long _flags;
	BOOL _needsAuthentication;

}

@property (assign,nonatomic) unsigned long long receiptFlags;                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) long long authenticationPromptStyle;              //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) BOOL needsAuthentication;                         //@synthesize needsAuthentication=_needsAuthentication - In the implementation block
@property (nonatomic,readonly) NSString * URLBagKey; 
-(id)initWithReceiptFlags:(unsigned long long)arg1 ;
-(unsigned long long)receiptFlags;
-(void)setReceiptFlags:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setNeedsAuthentication:(BOOL)arg1 ;
-(NSString *)URLBagKey;
-(void)setAuthenticationPromptStyle:(long long)arg1 ;
-(BOOL)needsAuthentication;
-(long long)authenticationPromptStyle;
@end

