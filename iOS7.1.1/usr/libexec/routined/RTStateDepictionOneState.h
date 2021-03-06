/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:28 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class RTStateModelLocation, NSMutableArray, GEOPlaceResult, NSDate;

@interface RTStateDepictionOneState : NSObject <NSSecureCoding> {

	RTStateModelLocation* _location;
	NSMutableArray* _histEntryExit_s;
	GEOPlaceResult* _placeResult;
	NSDate* _geocodeDate;
	int _type;

}

@property (nonatomic,retain) RTStateModelLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSMutableArray * histEntryExit_s;              //@synthesize histEntryExit_s=_histEntryExit_s - In the implementation block
@property (nonatomic,retain) GEOPlaceResult * placeResult;                  //@synthesize placeResult=_placeResult - In the implementation block
@property (nonatomic,retain) NSDate * geocodeDate;                          //@synthesize geocodeDate=_geocodeDate - In the implementation block
@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)histEntryExit_s;
-(id)geocodeDate;
-(void)setHistEntryExit_s:(id)arg1 ;
-(void)setGeocodeDate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)location;
-(void).cxx_destruct;
-(void)setPlaceResult:(id)arg1 ;
-(id)placeResult;
-(void)setLocation:(id)arg1 ;
@end

