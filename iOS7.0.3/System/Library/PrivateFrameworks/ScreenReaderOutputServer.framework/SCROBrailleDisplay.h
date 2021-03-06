/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SCROBrailleDisplayDelegate, SCROBrailleDriverProtocol, SCROIOElementProtocol;
#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class NSLock, SCROBrailleLine, NSString, SCROBrailleEventDispatcher;

@interface SCROBrailleDisplay : NSObject {

	NSLock* _contentLock;
	<SCROBrailleDisplayDelegate>* _delegate;
	<SCROBrailleDriverProtocol>* _brailleDriver;
	<SCROIOElementProtocol>* _ioElement;
	SCROBrailleLine* _brailleLine;
	int _contractionMode;
	BOOL _showEightDot;
	BOOL _shouldBatchUpdates;
	BOOL _needsUpdating;
	BOOL _automaticBrailleTranslationEnabled;
	NSString* _driverIdentifier;
	NSString* _driverModelIdentifier;
	int _mainSize;
	int _statusSize;
	BOOL _postsKeyboardEvents;
	int _brailleInputMode;
	SCD_Struct_SC2 _status;
	SCROBrailleEventDispatcher* _eventDispatcher;
	CFRunLoopRef _runLoop;
	CFRunLoopTimerRef _inputEventTimer;
	CFRunLoopTimerRef _blinkerEventTimer;
	BOOL _blinkingEnabled;
	BOOL _inputEnabled;
	SCD_Struct_SC5* _input;
	BOOL _isValid;
	BOOL _delegateWantsDisplayCallback;
	BOOL _delegateWantsPanningCallbacks;

}

@property (assign,nonatomic) BOOL delegateWantsDisplayCallback;                    //@synthesize delegateWantsDisplayCallback=_delegateWantsDisplayCallback - In the implementation block
@property (assign,nonatomic) BOOL delegateWantsPanningCallbacks;                   //@synthesize delegateWantsPanningCallbacks=_delegateWantsPanningCallbacks - In the implementation block
@property (assign,nonatomic) BOOL automaticBrailleTranslationEnabled;              //@synthesize automaticBrailleTranslationEnabled=_automaticBrailleTranslationEnabled - In the implementation block
+(BOOL)brailleDriverClassIsValid:(Class)arg1 ;
+(id)displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)_updateDisplay;
-(void)dealloc;
-(void)beginUpdates;
-(void)endUpdates;
-(void)invalidate;
-(BOOL)isValid;
-(void)handleEvent:(id)arg1 ;
-(BOOL)isLoaded;
-(id)configuration;
-(long)token;
-(void)_runThread;
-(int)mainSize;
-(int)statusSize;
-(id)_initWithDriver:(id)arg1 driverIdentifier:(id)arg2 ioElement:(id)arg3 delegate:(id)arg4 ;
-(void)_delayedDisplayLoad;
-(void)_unloadNotification:(id)arg1 ;
-(void)_configurationChangeNotification:(id)arg1 ;
-(void)_sleepNotification:(id)arg1 ;
-(int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3 ;
-(void)_setBrailleFormatterHandler:(id)arg1 ;
-(void)_statusDisplayHandler:(id)arg1 ;
-(void)_aggregatedStatusHandler:(id)arg1 ;
-(void)_setDelegateWantsDisplayCallbackHandler:(id)arg1 ;
-(void)_panHandler:(id)arg1 ;
-(BOOL)_isMemorizingKeys;
-(void)_unloadHandler;
-(void)_configurationChangeHandler;
-(void)_simulateKeypressHandler:(id)arg1 ;
-(void)_bulkStatusAttributesHandler:(id)arg1 ;
-(void)_setBatchUpdates:(id)arg1 ;
-(id)_statusStringWithDictionary:(id)arg1 ;
-(void)setMasterStatusCellIndex:(long)arg1 ;
-(void)_processKeyEvents:(id)arg1 ;
-(void)_appendTranslatedBrailleStringEventsToArray:(_CFArray*)arg1 ;
-(void)panLeft;
-(void)panRight;
-(BOOL)_hasKeyChord;
-(BOOL)_hasPressedBrailleKeys;
-(id)_newBrailleKeyForCurrentKeyChord;
-(BOOL)_hasBrailleChord;
-(id)_newBrailleKeyForCurrentBrailleChord;
-(void)_stopMemorization;
-(void)_translateBrailleStringAndPostEvent;
-(void)_delayedUnloadNotification;
-(void)_delayedConfigurationChangeNotification;
-(void)_delayedSleepNotification:(id)arg1 ;
-(id)driverIdentifier;
-(id)driverModelIdentifier;
-(id)lineDescriptor;
-(id)ioElement;
-(void)setBrailleFormatter:(id)arg1 ;
-(id)realStatus;
-(id)virtualStatus;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(long)masterStatusCellIndex;
-(void)setDelegateWantsDisplayCallback:(BOOL)arg1 ;
-(void)setStatusAttributesWithMasterCellIndex:(long)arg1 virtualAlignment:(int)arg2 ;
-(void)simulateKeypress:(id)arg1 ;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 ;
-(void)_inputEventHandler;
-(void)_blinkerEventHandler;
-(BOOL)delegateWantsDisplayCallback;
-(BOOL)delegateWantsPanningCallbacks;
-(void)setDelegateWantsPanningCallbacks:(BOOL)arg1 ;
-(BOOL)automaticBrailleTranslationEnabled;
-(void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1 ;
@end

