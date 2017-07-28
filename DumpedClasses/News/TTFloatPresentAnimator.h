//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTCommonPresentAnimator.h"

@class UIPercentDrivenInteractiveTransition;

@interface TTFloatPresentAnimator : TTCommonPresentAnimator
{
    UIPercentDrivenInteractiveTransition *_interactionController;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
- (void).cxx_destruct;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (id)childViewControllerOnViewController:(id)arg1;
- (id)topViewControllerfromAnimatedViewController:(id)arg1;

@end

