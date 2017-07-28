//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Singleton.h"

@class NSObject<TTSharedViewTransitionFrom>, NSString, UIImage, UIView, UIViewController;

@interface TTVideoFloatSingletonTransition : NSObject <Singleton>
{
    _Bool _isPresent;
    UIView *_fromAnimatedView;
    UIViewController *_fromViewController;
    UIImage *_fromAnimatedImage;
    UIImage *_fixedAnimatedImage;
    UIView *_to;
    NSObject<TTSharedViewTransitionFrom> *_fromView;
}

@property(nonatomic) NSObject<TTSharedViewTransitionFrom> *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
@property(retain, nonatomic) UIView *to; // @synthesize to=_to;
@property(retain, nonatomic) UIImage *fixedAnimatedImage; // @synthesize fixedAnimatedImage=_fixedAnimatedImage;
@property(retain, nonatomic) UIImage *fromAnimatedImage; // @synthesize fromAnimatedImage=_fromAnimatedImage;
@property(retain, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) UIView *fromAnimatedView; // @synthesize fromAnimatedView=_fromAnimatedView;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

