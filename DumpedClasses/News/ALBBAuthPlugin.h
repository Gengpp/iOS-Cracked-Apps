//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBLogSource.h"
#import "ALBBPluginProtocol.h"

@class NSString;

@interface ALBBAuthPlugin : NSObject <ALBBPluginProtocol, ALBBLogSource>
{
}

+ (id)dependencies;
+ (long long)pversion;
+ (id)sharedPlugin;
- (id)messageWithCode:(long long)arg1 level:(unsigned long long)arg2;
- (void)dispatchRefreshSafeCookieTimer;
- (void)pDestory;
- (void)pInitialize:(CDUnknownBlockType)arg1;
- (id)services;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

