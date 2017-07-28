//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CAShapeLayer;

@interface TTRefreshAnimationView : UIView
{
    CAShapeLayer *borderLayer;
    CAShapeLayer *contentLayer;
    CAShapeLayer *imageLayer;
    CALayer *imageInnerLayer;
    CAShapeLayer *borderAnimationLayer;
    CALayer *imageAnimationLayer;
    CAShapeLayer *topContentAnimationLayer;
    CAShapeLayer *bottomContentAnimationLayer;
    CALayer *imageAnimationInnerLayer;
    CAShapeLayer *imageAnimationBorderLayer;
    _Bool _isLoading;
    double _percent;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) double percent; // @synthesize percent=_percent;
- (void).cxx_destruct;
- (struct CGPath *)newAnimationContentLayer;
- (struct CGPath *)newImageAnimationLayer;
- (struct CGPath *)newImageLayer;
- (struct CGPath *)newContentLayer;
- (struct CGPath *)newBorderLayer;
- (void)stopLoading;
- (void)startLoading;
- (void)loadingAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)addDrawAni;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

