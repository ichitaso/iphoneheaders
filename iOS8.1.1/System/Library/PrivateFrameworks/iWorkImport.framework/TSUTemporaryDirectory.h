/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface TSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(void)dealloc;
-(id)init;
-(id)path;
-(id)URL;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(id)initWithSignature:(id)arg1 ;
-(void)leakTemporaryDirectory;
@end
