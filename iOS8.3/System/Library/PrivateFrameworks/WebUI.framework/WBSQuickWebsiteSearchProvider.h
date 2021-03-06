/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:22:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDate, WBSOpenSearchDescription;

@interface WBSQuickWebsiteSearchProvider : NSObject {

	NSString* _displayName;
	NSString* _hostname;
	NSString* _sourcePageURLString;
	NSDate* _dateAdded;
	NSString* _searchURLTemplateStringFromForm;
	NSString* _openSearchDescriptionURLString;
	NSDate* _dateOfLastSearch;

}

@property (nonatomic,readonly) NSString * sourcePageURLString;                                //@synthesize sourcePageURLString=_sourcePageURLString - In the implementation block
@property (nonatomic,readonly) NSDate * dateAdded;                                            //@synthesize dateAdded=_dateAdded - In the implementation block
@property (nonatomic,copy) NSString * searchURLTemplateStringFromForm;                        //@synthesize searchURLTemplateStringFromForm=_searchURLTemplateStringFromForm - In the implementation block
@property (nonatomic,copy) NSString * openSearchDescriptionURLString;                         //@synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString - In the implementation block
@property (nonatomic,copy) NSDate * dateOfLastSearch;                                         //@synthesize dateOfLastSearch=_dateOfLastSearch - In the implementation block
@property (nonatomic,readonly) WBSOpenSearchDescription * openSearchDescription; 
@property (nonatomic,readonly) NSString * searchURLTemplateString; 
@property (nonatomic,readonly) NSString * urlTemplateStringForSuggestionsInJSON; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * hostname; 
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)hostname;
-(WBSOpenSearchDescription *)openSearchDescription;
-(NSString *)searchURLTemplateString;
-(NSString *)urlTemplateStringForSuggestionsInJSON;
-(id)initWithSourcePageURLString:(id)arg1 searchURLTemplateStringFromForm:(id)arg2 ;
-(id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 ;
-(id)searchURLStringForQueryString:(id)arg1 ;
-(NSString *)sourcePageURLString;
-(NSDate *)dateAdded;
-(NSString *)searchURLTemplateStringFromForm;
-(void)setSearchURLTemplateStringFromForm:(NSString *)arg1 ;
-(NSString *)openSearchDescriptionURLString;
-(void)setOpenSearchDescriptionURLString:(NSString *)arg1 ;
-(NSDate *)dateOfLastSearch;
-(void)setDateOfLastSearch:(NSDate *)arg1 ;
@end

