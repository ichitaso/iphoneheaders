/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface _MFMailComposeAttachmentWrapper : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _fileName;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSString * mimeType;                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) NSString * fileName;                //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)wrapperWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(NSString *)fileName;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSData *)data;
-(NSString *)mimeType;
@end
