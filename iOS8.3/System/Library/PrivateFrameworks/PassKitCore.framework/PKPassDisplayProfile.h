/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:56:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDisplayProfile.h>
#import <PassKitCore/NSSecureCoding.h>
#import <PassKitCore/NSCopying.h>

@class PKColor, NSData;

@interface PKPassDisplayProfile : PKDisplayProfile <NSSecureCoding, NSCopying> {

	char _tallCode;
	int _passStyle;
	PKColor* _backgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	PKColor* _stripColor;
	NSData* _iconHash;
	NSData* _logoHash;
	NSData* _thumbnailHash;
	NSData* _backgroundHash;
	NSData* _stripHash;
	NSData* _paymentAssetsHash;

}

@property (assign,nonatomic) int passStyle;                            //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;                //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                     //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKColor * stripColor;                     //@synthesize stripColor=_stripColor - In the implementation block
@property (nonatomic,retain) NSData * iconHash;                        //@synthesize iconHash=_iconHash - In the implementation block
@property (nonatomic,retain) NSData * logoHash;                        //@synthesize logoHash=_logoHash - In the implementation block
@property (nonatomic,retain) NSData * thumbnailHash;                   //@synthesize thumbnailHash=_thumbnailHash - In the implementation block
@property (nonatomic,retain) NSData * backgroundHash;                  //@synthesize backgroundHash=_backgroundHash - In the implementation block
@property (nonatomic,retain) NSData * stripHash;                       //@synthesize stripHash=_stripHash - In the implementation block
@property (nonatomic,retain) NSData * paymentAssetsHash;               //@synthesize paymentAssetsHash=_paymentAssetsHash - In the implementation block
@property (assign,nonatomic) char tallCode;                            //@synthesize tallCode=_tallCode - In the implementation block
@property (nonatomic,readonly) char showsBackgroundImage; 
@property (nonatomic,readonly) char showsStripImage; 
@property (nonatomic,readonly) int layoutMode; 
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)setBackgroundColor:(PKColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKColor *)foregroundColor;
-(void)setForegroundColor:(PKColor *)arg1 ;
-(int)passStyle;
-(char)tallCode;
-(NSData *)backgroundHash;
-(NSData *)stripHash;
-(NSData *)logoHash;
-(NSData *)thumbnailHash;
-(NSData *)paymentAssetsHash;
-(NSData *)iconHash;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(void)setPassStyle:(int)arg1 ;
-(void)setStripColor:(PKColor *)arg1 ;
-(void)setTallCode:(char)arg1 ;
-(void)setIconHash:(NSData *)arg1 ;
-(void)setLogoHash:(NSData *)arg1 ;
-(void)setThumbnailHash:(NSData *)arg1 ;
-(void)setBackgroundHash:(NSData *)arg1 ;
-(void)setPaymentAssetsHash:(NSData *)arg1 ;
-(void)setStripHash:(NSData *)arg1 ;
-(PKColor *)stripColor;
-(char)showsBackgroundImage;
-(char)showsStripImage;
-(int)layoutMode;
-(PKColor *)labelColor;
-(void)setLabelColor:(PKColor *)arg1 ;
@end

