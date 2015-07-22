/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBKAlertDialog : NSObject {

	NSString* _title;
	NSString* _message;
	NSString* _cancelButtonTitle;
	/*^block*/id _completionHandler;
	NSString* _acceptButtonTitle;

}

@property (copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (copy) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (copy) NSString * acceptButtonTitle;              //@synthesize acceptButtonTitle=_acceptButtonTitle - In the implementation block
@property (copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)completionHandler;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setAcceptButtonTitle:(NSString *)arg1 ;
-(BOOL)_runAsUIAlertView;
-(void)_runAsCFUserNotificationDisplayAlert;
-(NSString *)acceptButtonTitle;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
@end
