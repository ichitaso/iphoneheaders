/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResourceLoader.h>

@interface TSCH3DVAOLoader : TSCH3DResourceLoader
-(id)generateHandleWithConfig:(void*)arg1 ;
-(unsigned)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(void)bindHandle:(id)arg1 config:(void*)arg2 ;
-(void)deactivateHandle:(id)arg1 insideContext:(id)arg2 ;
-(VAOLoadResult)activateObjectState:(const ObjectState*)arg1 indices:(id)arg2 insideSession:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

