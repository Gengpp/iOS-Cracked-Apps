//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTFollowOberverAndSelectorPairs : NSObject
{
    id _observer;
    NSString *_selectorString;
}

@property(copy, nonatomic) NSString *selectorString; // @synthesize selectorString=_selectorString;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2;

@end

