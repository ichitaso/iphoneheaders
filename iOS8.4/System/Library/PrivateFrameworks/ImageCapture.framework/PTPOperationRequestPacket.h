/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPOperationRequestPacket : NSObject {

	int _numParameters;
	unsigned _dataPhaseInfo;
	unsigned short _operationCode;
	unsigned _transactionID;
	unsigned _parameters[5];

}
-(id)description;
-(unsigned)transactionID;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 ;
-(unsigned)parameter1;
-(unsigned short)operationCode;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 parameter2:(unsigned)arg5 parameter3:(unsigned)arg6 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 parameter2:(unsigned)arg5 parameter3:(unsigned)arg6 parameter4:(unsigned)arg7 parameter5:(unsigned)arg8 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 parameter2:(unsigned)arg5 ;
-(int)numParameters;
-(unsigned)parameter2;
-(unsigned)parameter3;
-(unsigned)parameter4;
-(unsigned)parameter5;
-(void)setTransactionID:(unsigned)arg1 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(void)setOperationCode:(unsigned short)arg1 ;
-(void)setParameter1:(unsigned)arg1 ;
-(void)setParameter2:(unsigned)arg1 ;
-(void)setParameter3:(unsigned)arg1 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 numParameters:(unsigned)arg4 parameters:(unsigned*)arg5 ;
-(id)initWithOperationCode:(unsigned short)arg1 transactionID:(unsigned)arg2 dataPhaseInfo:(unsigned)arg3 parameter1:(unsigned)arg4 parameter2:(unsigned)arg5 parameter3:(unsigned)arg6 parameter4:(unsigned)arg7 ;
-(unsigned)dataPhaseInfo;
-(void)setDataPhaseInfo:(unsigned)arg1 ;
-(unsigned)parameterAtIndex:(unsigned)arg1 ;
-(void)setPparameter:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(void)setParameter4:(unsigned)arg1 ;
-(void)setParameter5:(unsigned)arg1 ;
@end
