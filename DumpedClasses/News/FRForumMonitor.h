//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FRForumMonitor : NSObject
{
}

+ (void)ugcVideoPostMonitorUploadVideoPerformanceWithStatus:(unsigned long long)arg1 extra:(id)arg2;
+ (void)topicPostMonitorFetchDataPerformanceWithData:(id)arg1;
+ (void)concernThreadTabMonitorFetchDataPerformanceWithData:(id)arg1;
+ (void)concernHomeHeadMonitorFetchDataPerformanceWithData:(id)arg1;
+ (void)threadDetailCommentMonitorFetchDataPerformanceWithData:(id)arg1;
+ (void)threadDetailMonitorFetchDataPerformanceWithData:(id)arg1;
+ (void)trackRepostThreadStatus:(unsigned long long)arg1 extra:(id)arg2;
+ (void)trackPostThreadStatus:(unsigned long long)arg1 extra:(id)arg2;
+ (void)trackConcernThreadTabStatus:(unsigned long long)arg1 extra:(id)arg2;
+ (void)trackConcernHeadStatus:(unsigned long long)arg1 extra:(id)arg2;
+ (void)trackThreadCommentStatus:(unsigned long long)arg1 extra:(id)arg2;
+ (void)trackThreadInfoStatus:(unsigned long long)arg1 extra:(id)arg2;
+ (void)trackThreadContentStatus:(unsigned long long)arg1 extra:(id)arg2;

@end

