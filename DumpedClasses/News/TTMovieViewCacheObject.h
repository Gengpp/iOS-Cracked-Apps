//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTMovieViewCacheObject : NSObject
{
    NSString *_key;
    double _progress;
    NSString *_stopEvent;
}

@property(copy, nonatomic) NSString *stopEvent; // @synthesize stopEvent=_stopEvent;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 progress:(double)arg2 stopEvent:(id)arg3;

@end

