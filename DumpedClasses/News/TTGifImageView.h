//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "TTAnimationImageView.h"

@class CADisplayLink, VVeboImage;

@interface TTGifImageView : UIImageView <TTAnimationImageView>
{
    _Bool _repeats;
    _Bool _delayDuration;
    CDUnknownBlockType _completionHandler;
    VVeboImage *_gifImage;
    CADisplayLink *_displayLink;
    double _startTime;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool delayDuration; // @synthesize delayDuration=_delayDuration;
@property(retain, nonatomic) VVeboImage *gifImage; // @synthesize gifImage=_gifImage;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool repeats; // @synthesize repeats=_repeats;
- (void).cxx_destruct;
@property(nonatomic) long long currentPlayIndex;
- (void)removeFromSuperview;
- (void)displayImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)endAnimation;
- (void)beginAnimation;
- (void)dealloc;
- (void)commonInit;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

