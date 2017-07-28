//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSMutableData, NSMutableURLRequest, NSThread, NSURLConnection;

@interface ALBBSDKTLogUploaderOperation : NSOperation
{
    NSMutableURLRequest *_request;
    unsigned long long _options;
    _Bool _executing;
    _Bool _finished;
    unsigned long long _lastBytesWritten;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
    long long _responseExpectedSize;
    CDUnknownBlockType _cancelBlock;
    NSURLConnection *_connection;
    NSThread *_thread;
    NSMutableData *_fileData;
    unsigned long long _backgroundTaskId;
}

@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(retain, nonatomic) NSMutableData *fileData; // @synthesize fileData=_fileData;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) long long responseExpectedSize; // @synthesize responseExpectedSize=_responseExpectedSize;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) unsigned long long lastBytesWritten; // @synthesize lastBytesWritten=_lastBytesWritten;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (_Bool)shouldContinueWhenAppEntersBackground;
- (_Bool)isConcurrent;
- (void)reset;
- (void)done;
- (void)stopRunloop;
- (void)cancelInternal;
- (void)cancelInternalAndStop;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4 cancelled:(CDUnknownBlockType)arg5;

@end

