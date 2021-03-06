/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIColor, UIFont, CAFilter;

@interface WDAxisLabel : NSObject {

	NSString* _text;
	id _location;
	UIColor* _labelColor;
	UIFont* _labelFont;
	CAFilter* _compositingFilter;

}

@property (nonatomic,retain) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                               //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                      //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                        //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) CAFilter * compositingFilter;              //@synthesize compositingFilter=_compositingFilter - In the implementation block
-(void)setLabelFont:(UIFont *)arg1 ;
-(UIFont *)labelFont;
-(void)setCompositingFilter:(CAFilter *)arg1 ;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CAFilter *)compositingFilter;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(UIColor *)labelColor;
-(void)setLabelColor:(UIColor *)arg1 ;
@end

