//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError;

@interface ALBBPluginLoadOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    id <ALBBPluginProtocol> _instance;
    NSError *_error;
    Class _plugin;
    CDUnknownBlockType _complection;
}

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)operationWithPlugin:(Class)arg1 complection:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType complection; // @synthesize complection=_complection;
@property(retain, nonatomic) Class plugin; // @synthesize plugin=_plugin;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <ALBBPluginProtocol> instance; // @synthesize instance=_instance;
@property(getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)start;
- (_Bool)isAsynchronous;

@end

