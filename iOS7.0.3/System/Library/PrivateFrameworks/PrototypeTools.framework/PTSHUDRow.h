/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface PTSHUDRow : NSObject {

	float _height;
	NSArray* _controls;

}

@property (assign,nonatomic) float height;                    //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSArray * controls;              //@synthesize controls=_controls - In the implementation block
+(id)rowWithHeight:(float)arg1 controls:(id)arg2 ;
-(float)height;
-(void)setHeight:(float)arg1 ;
-(void)setControls:(id)arg1 ;
-(id)controls;
-(void).cxx_destruct;
@end

