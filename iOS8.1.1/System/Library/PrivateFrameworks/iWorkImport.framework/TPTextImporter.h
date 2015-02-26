/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKImporter.h>

@class NSURL, TSUProgressContext, NSString;

@interface TPTextImporter : NSObject <TSKImporter> {

	NSURL* mURL;
	TSUProgressContext* mProgressContext;

}

@property (retain) TSUProgressContext * progressContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)importToDocumentRoot:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(id)initialTemplateName;
-(BOOL)stylesheetUpdatesRequired;
-(BOOL)importStartsWithThemeOnly;
-(void)cancel;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)setProgressContext:(TSUProgressContext *)arg1 ;
-(TSUProgressContext *)progressContext;
-(void)quit;
@end
