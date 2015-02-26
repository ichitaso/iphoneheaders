/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotificationsUI/NotificationsUI-Structs.h>
#import <NotificationsUI/NSCopying.h>
#import <NotificationsUI/NSSecureCoding.h>

@class NSString;

@interface NCViewServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _viewControllerClassName;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * viewControllerClassName;              //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)viewControllerClassName;
@end
