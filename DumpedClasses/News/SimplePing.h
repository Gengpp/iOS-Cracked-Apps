//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSString;

@interface SimplePing : NSObject
{
    NSString *_hostName;
    NSData *_hostAddress;
    struct __CFHost *_host;
    struct __CFSocket *_socket;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
    id <SimplePingDelegate> _delegate;
    NSString *_IPAddress;
    CDUnknownBlockType _IPReverseHandler;
    NSDate *_pingStartDate;
}

+ (const struct ICMPHeader *)icmpInPacket:(id)arg1;
+ (unsigned long long)_icmpHeaderOffsetInPacket:(id)arg1;
+ (id)simplePingWithHostAddress:(id)arg1;
+ (id)simplePingWithHostName:(id)arg1;
@property(retain, nonatomic) NSDate *pingStartDate; // @synthesize pingStartDate=_pingStartDate;
@property(copy, nonatomic) CDUnknownBlockType IPReverseHandler; // @synthesize IPReverseHandler=_IPReverseHandler;
@property(copy, nonatomic) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
@property(nonatomic) unsigned short nextSequenceNumber; // @synthesize nextSequenceNumber=_nextSequenceNumber;
@property(readonly, nonatomic) unsigned short identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <SimplePingDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSData *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(readonly, copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
- (void)stop;
- (void)_stopDataTransfer;
- (void)_stopHostResolution;
- (void)start;
- (void)_hostResolutionDone;
- (void)_startWithHostAddress;
- (void)_readData;
- (_Bool)_isValidPingResponsePacket:(id)arg1;
- (void)sendPingWithData:(id)arg1;
- (void)_didFailWithHostStreamError:(CDStruct_87dc826d)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)dealloc;
- (id)initWithHostName:(id)arg1 address:(id)arg2;

@end

