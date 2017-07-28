//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeModule.h"
#import "RCTFrameUpdateObserver.h"
#import "RCTInvalidating.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, RCTBridge;

@interface RCTTiming : NSObject <RCTBridgeModule, RCTInvalidating, RCTFrameUpdateObserver>
{
    NSMutableDictionary *_timers;
    NSTimer *_sleepTimer;
    _Bool _sendIdleEvents;
    _Bool _paused;
    RCTBridge *_bridge;
    CDUnknownBlockType _pauseCallback;
}

+ (id)__rct_export__3033;
+ (id)__rct_export__2952;
+ (id)__rct_export__2660;
+ (void)load;
+ (id)moduleName;
@property(copy, nonatomic) CDUnknownBlockType pauseCallback; // @synthesize pauseCallback=_pauseCallback;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)setSendIdleEvents:(_Bool)arg1;
- (void)deleteTimer:(id)arg1;
- (void)createTimer:(id)arg1 duration:(double)arg2 jsSchedulingTime:(id)arg3 repeats:(_Bool)arg4;
- (void)timerDidFire;
- (void)scheduleSleepTimer:(id)arg1;
- (void)didUpdateFrame:(id)arg1;
- (_Bool)hasPendingTimers;
- (void)startTimers;
- (void)stopTimers;
- (void)invalidate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)dealloc;
- (void)setBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

