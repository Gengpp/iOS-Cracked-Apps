//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TTLCSManager : NSObject
{
    id <TTLCSManagerDelegate> _delegate;
    NSString *_appKey;
    NSString *_fpId;
    NSString *_deviceId;
    NSString *_appId;
    NSString *_installId;
    NSString *_sessionId;
    NSArray *_wsURLs;
}

+ (void)handleNetworkChange_:(long long)arg1;
+ (id)sharedManager;
@property(nonatomic) __weak id <TTLCSManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAppDidBecomeActive_:(id)arg1;
- (void)onPushManagerConnectionStateChanged_:(id)arg1;
- (void)onPushManagerConnectionError_:(id)arg1;
- (void)onPushManagerUnknownPushMessage_:(id)arg1;
- (void)removeObservers_;
- (void)addObservers_;
- (int)getClientVersionNumber_;
- (int)currentPlatform_;
- (int)currentNetworkStatus_;
- (void)onReachabilityChangedNotification_:(id)arg1;
- (_Bool)isConnected;
- (void)stopConnection;
- (void)startConnection;
- (void)configLCSWithMessageReceiver:(id)arg1 appKey:(id)arg2 fpId:(id)arg3 deviceId:(id)arg4 appId:(id)arg5 installId:(id)arg6 sessionId:(id)arg7 wsURLs:(id)arg8;
- (id)init;
- (void)dealloc;

@end

