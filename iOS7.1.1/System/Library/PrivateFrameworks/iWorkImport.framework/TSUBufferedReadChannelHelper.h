/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUStreamReadChannel.h>

@class TSUBufferedReadChannel;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {

	TSUBufferedReadChannel* _bufferedReadChannel;

}
-(void)readWithQueue:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)initWithBufferedReadChannel:(id)arg1 ;
-(void)close;
-(void).cxx_destruct;
@end

