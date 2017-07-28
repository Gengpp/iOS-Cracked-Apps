//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, SimplePing;

@protocol SimplePingDelegate <NSObject>

@optional
- (void)simplePing:(SimplePing *)arg1 didReceiveUnexpectedPacket:(NSData *)arg2;
- (void)simplePing:(SimplePing *)arg1 didReceivePingResponsePacket:(NSData *)arg2 timeElasped:(double)arg3;
- (void)simplePing:(SimplePing *)arg1 didFailToSendPacket:(NSData *)arg2 error:(NSError *)arg3;
- (void)simplePing:(SimplePing *)arg1 didSendPacket:(NSData *)arg2 ICMPHeader:(struct ICMPHeader *)arg3;
- (void)simplePing:(SimplePing *)arg1 didFailWithError:(NSError *)arg2;
- (void)simplePing:(SimplePing *)arg1 didStartWithAddress:(NSData *)arg2;
@end

