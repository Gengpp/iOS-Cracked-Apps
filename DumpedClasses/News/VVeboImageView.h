//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSTimer, VVeboImage;

@interface VVeboImageView : UIImageView
{
    NSTimer *timer;
    _Bool _repeats;
    _Bool _delayDuration;
    CDUnknownBlockType _completionHandler;
    VVeboImage *_gifImage;
}

@property(retain, nonatomic) VVeboImage *gifImage; // @synthesize gifImage=_gifImage;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool delayDuration; // @synthesize delayDuration=_delayDuration;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
- (void).cxx_destruct;
@property(nonatomic) long long currentPlayIndex;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)tick;
- (void)setImage:(id)arg1;

@end

