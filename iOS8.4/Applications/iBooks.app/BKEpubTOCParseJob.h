/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKPaginationBatchJob.h>

@class NSURL;

@interface BKEpubTOCParseJob : BKPaginationBatchJob {

	NSURL* _url;

}

@property (nonatomic,copy) NSURL * url;              //@synthesize url=_url - In the implementation block
+(id)jobName;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
@end

