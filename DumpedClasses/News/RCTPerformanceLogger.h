//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface RCTPerformanceLogger : NSObject
{
    long long _data[18][2];
    unsigned long long _cookies[18];
    NSArray *_labelsForTags;
}

@property(copy, nonatomic) NSArray *labelsForTags; // @synthesize labelsForTags=_labelsForTags;
- (void).cxx_destruct;
- (long long)valueForTag:(unsigned long long)arg1;
- (long long)durationForTag:(unsigned long long)arg1;
- (id)valuesForTags;
- (void)appendStopForTag:(unsigned long long)arg1;
- (void)appendStartForTag:(unsigned long long)arg1;
- (void)addValue:(long long)arg1 forTag:(unsigned long long)arg2;
- (void)setValue:(long long)arg1 forTag:(unsigned long long)arg2;
- (void)markStopForTag:(unsigned long long)arg1;
- (void)markStartForTag:(unsigned long long)arg1;
- (id)init;

@end

