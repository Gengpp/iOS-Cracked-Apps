//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTAdLoadingCicle;

@interface TTAdLoadingView : SSThemedView
{
    TTAdLoadingCicle *_loadingCicle;
}

@property(retain, nonatomic) TTAdLoadingCicle *loadingCicle; // @synthesize loadingCicle=_loadingCicle;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setSubViews;
- (id)init;

@end

