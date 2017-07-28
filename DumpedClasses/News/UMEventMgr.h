//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSTimer;

@interface UMEventMgr : NSObject
{
    NSMutableDictionary *_agMFDict;
    NSMutableDictionary *_agCachedDict;
    NSTimer *_cacheTimer;
    NSTimer *_agTimer;
    int _agCachedCounter;
    double _agMemoryLatestTS;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)cancelTimer:(id *)arg1;
- (unsigned int)twNumWithUTCMS:(unsigned long long)arg1;
- (int)intervalAgTWCloseWithNow;
- (void)processAgTWDone;
- (void)agTimeWindowArrived;
- (void)agCacheFire;
- (int)setupAGTWWithInterval:(double)arg1;
- (void)setupCacheTimer;
- (void)clearEventsWithMeta:(_Bool)arg1;
- (void)loadVeMetaEvents:(id)arg1;
- (void)loadAGEvents:(id)arg1;
- (void)addMetaVerbatimItem:(id)arg1 value:(int)arg2 timestamp:(unsigned long long)arg3 label:(id)arg4;
- (_Bool)aggregateCk:(id)arg1 value:(int)arg2 timestamp:(unsigned long long)arg3 label:(id)arg4;
- (_Bool)aggregateEvent:(id)arg1 value:(int)arg2 timestamp:(unsigned long long)arg3 label:(id)arg4;
- (void)saveCacheData;
- (void)loadCacheData;
- (id)init;

@end

