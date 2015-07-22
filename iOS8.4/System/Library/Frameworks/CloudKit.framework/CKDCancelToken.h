/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDCancelling.h>

@interface CKDCancelToken : NSObject <CKDCancelling> {

	BOOL _isCancelled;
	/*^block*/id _cancelAction;

}

@property (nonatomic,copy) id cancelAction;              //@synthesize cancelAction=_cancelAction - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancelAction:(id)arg1 ;
-(id)cancelAction;
@end
