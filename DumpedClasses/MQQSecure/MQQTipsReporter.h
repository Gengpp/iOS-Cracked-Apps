//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQReportRequest, NSString;

@interface MQQTipsReporter : NSObject <MQQSharkRequestDelegate>
{
    MQQReportRequest *_reportAPLRequest;
    MQQReportRequest *_reportQQRequest;
    MQQReportRequest *_reportEventsRequest;
}

+ (id)defaultReporter;
@property(retain, nonatomic) MQQReportRequest *reportEventsRequest; // @synthesize reportEventsRequest=_reportEventsRequest;
@property(retain, nonatomic) MQQReportRequest *reportQQRequest; // @synthesize reportQQRequest=_reportQQRequest;
@property(retain, nonatomic) MQQReportRequest *reportAPLRequest; // @synthesize reportAPLRequest=_reportAPLRequest;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)reportQQ;
- (void)reportAPL;
- (void)reportSpamEvents:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

