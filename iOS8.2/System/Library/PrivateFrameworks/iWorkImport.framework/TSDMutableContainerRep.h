/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDMutableContainerRep <TSDContainerRep>
@property (nonatomic,readonly) NSObject*<TSDMutableContainerInfo> mutableContainerInfo; 
@required
-(void)setChildReps:(id)arg1;
-(void)addChildRep:(id)arg1;
-(void)insertChildRep:(id)arg1 atIndex:(unsigned)arg2;
-(void)insertChildRep:(id)arg1 below:(id)arg2;
-(void)insertChildRep:(id)arg1 above:(id)arg2;
-(void)removeChildRep:(id)arg1;
-(void)replaceChildRep:(id)arg1 with:(id)arg2;
-(NSObject*<TSDMutableContainerInfo>)mutableContainerInfo;

@end
