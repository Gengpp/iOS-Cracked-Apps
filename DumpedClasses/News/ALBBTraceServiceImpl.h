//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBTraceService.h"

@class NSString;

@interface ALBBTraceServiceImpl : NSObject <ALBBTraceService>
{
}

- (void)addTraceLog:(id)arg1 page:(id)arg2 label:(id)arg3 interval:(long long)arg4 propertys:(id)arg5;
- (void)addTraceLog:(id)arg1 label:(id)arg2 interval:(long long)arg3 propertys:(id)arg4;
- (void)addTraceLog:(id)arg1 label:(id)arg2 propertys:(id)arg3;
- (void)addTraceLog:(id)arg1 propertys:(id)arg2;
- (void)addTraceLog:(id)arg1;
- (void)updateUserAccount:(id)arg1 userid:(id)arg2;
- (id)getUID;
- (void)turnOffCrashHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

