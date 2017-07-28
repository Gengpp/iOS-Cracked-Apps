//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SSLogDataManager : NSObject
{
    _Bool _isSending;
    struct _opaque_pthread_mutex_t _logDataLock;
    struct _opaque_pthread_mutex_t _appendDataLock;
    NSMutableArray *_logDatas;
    NSMutableArray *_appendingDatas;
}

+ (id)shareManager;
@property(retain, nonatomic) NSMutableArray *appendingDatas; // @synthesize appendingDatas=_appendingDatas;
@property(retain, nonatomic) NSMutableArray *logDatas; // @synthesize logDatas=_logDatas;
- (void).cxx_destruct;
- (void)trackerSentFailNotification:(id)arg1;
- (void)trackerSentSuccessNotification:(id)arg1;
- (void)trackerWillSendNotification:(id)arg1;
- (id)needSendLogDatas;
- (void)appendLogData:(id)arg1;
- (id)init;
- (void)dealloc;

@end

