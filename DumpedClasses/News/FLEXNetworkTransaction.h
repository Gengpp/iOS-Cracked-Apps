//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSError, NSString, NSURLRequest, NSURLResponse, UIImage;

@interface FLEXNetworkTransaction : NSObject
{
    NSString *_requestID;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSString *_requestMechanism;
    long long _transactionState;
    NSError *_error;
    NSDate *_startTime;
    double _latency;
    double _duration;
    long long _receivedDataLength;
    UIImage *_responseThumbnail;
}

+ (id)readableStringFromTransactionState:(long long)arg1;
@property(retain, nonatomic) UIImage *responseThumbnail; // @synthesize responseThumbnail=_responseThumbnail;
@property(nonatomic) long long receivedDataLength; // @synthesize receivedDataLength=_receivedDataLength;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long transactionState; // @synthesize transactionState=_transactionState;
@property(copy, nonatomic) NSString *requestMechanism; // @synthesize requestMechanism=_requestMechanism;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (id)description;

@end

