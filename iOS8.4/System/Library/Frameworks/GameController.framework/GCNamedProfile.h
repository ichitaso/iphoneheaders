/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol GCNamedProfile <NSObject>
@property (readonly) NSString * name; 
@required
-(void)didChangeValueForElement:(id)arg1;
-(id)inputForElement:(IOHIDElementRef)arg1;
-(void)setPlayerIndex:(long long)arg1;
-(id)initWithController:(id)arg1;
-(NSString *)name;
-(void)setController:(id)arg1;

@end
