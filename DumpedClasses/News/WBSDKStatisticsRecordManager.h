//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSTimer;

@interface WBSDKStatisticsRecordManager : NSObject
{
    NSObject<OS_dispatch_queue> *_io_queue;
    NSMutableDictionary *_recordsDict;
    NSTimer *_uploadTimer;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(retain, nonatomic) NSMutableDictionary *recordsDict; // @synthesize recordsDict=_recordsDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *io_queue; // @synthesize io_queue=_io_queue;
- (void).cxx_destruct;
@property(nonatomic) double lastUploadSuccessTimestamp;
- (double)uploadFrequency;
- (id)versionString;
- (id)channelID;
- (void)resetTimer;
- (void)uploadFrequencyDidChange;
- (id)uploadFormatForRecordUserInfo:(id)arg1;
- (id)uploadFormatForRecord:(id)arg1;
- (id)uploadFormatWithRecords:(id)arg1 withTimestamp:(long long)arg2;
- (void)postLogsToServerWithRecords:(id)arg1 andResultBlock:(CDUnknownBlockType)arg2;
- (void)upload;
- (_Bool)canUpload:(double)arg1;
- (void)uploadTimerFired;
- (void)forceUpload;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)keyForRecordWithEventID:(id)arg1 PageID:(id)arg2 recordType:(long long)arg3;
- (void)endApp;
- (void)startApp;
- (void)internalEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
- (void)event:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
- (void)endLogEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
- (void)beginLogEvent:(id)arg1 onPageView:(id)arg2 withUserInfo:(id)arg3;
- (void)endLogPageView:(id)arg1;
- (void)beginLogPageView:(id)arg1;
- (_Bool)enableDebugLog;
- (void)dealloc;
- (void)cleanHistoryUnlessRecord;
- (id)init;

@end

