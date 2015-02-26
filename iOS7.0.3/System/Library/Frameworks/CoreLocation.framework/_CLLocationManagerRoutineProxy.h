/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CLLocationManagerRoutineClientInterface.h>

@protocol OS_dispatch_queue, CLLocationManagerDelegate;
@class NSObject, NSXPCConnection, CLLocationManagerRoutine;

@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {

	NSObject<OS_dispatch_queue>* _queue;
	BOOL _updating;
	NSXPCConnection* _connection;
	<CLLocationManagerDelegate>* _delegate;
	CLLocationManagerRoutine* _locationManagerRoutine;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) <CLLocationManagerDelegate> * delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationManagerRoutine * locationManagerRoutine;              //@synthesize locationManagerRoutine=_locationManagerRoutine - In the implementation block
@property (assign,nonatomic) BOOL updating;                                                  //@synthesize updating=_updating - In the implementation block
-(void)setLocationManagerRoutine:(id)arg1 ;
-(id)locationManagerRoutine;
-(void)didUpdateLocations:(id)arg1 ;
-(BOOL)updating;
-(id)initWithCLLocationManagerRoutine:(id)arg1 ;
-(void)setUpdating:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)connection;
-(void)createConnection;
-(void)setConnection:(id)arg1 ;
@end
