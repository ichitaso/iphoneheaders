/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:23:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DAMessageMoveRequest : NSObject {

	NSString* _message;
	NSString* _fromFolder;
	NSString* _toFolder;
	id _context;

}

@property (nonatomic,copy) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * fromFolder;              //@synthesize fromFolder=_fromFolder - In the implementation block
@property (nonatomic,copy) NSString * toFolder;                //@synthesize toFolder=_toFolder - In the implementation block
@property (nonatomic,retain) id context;                       //@synthesize context=_context - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setFromFolder:(NSString *)arg1 ;
-(void)setToFolder:(NSString *)arg1 ;
-(NSString *)fromFolder;
-(NSString *)toFolder;
-(id)initMoveRequestWithMessage:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3 ;
@end

