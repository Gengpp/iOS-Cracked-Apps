//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SSThemedLabel, TTMovieProgressSliderView, UIImageView;

@interface TTMovieAdjustView : UIView
{
    unsigned long long _type;
    unsigned long long _mode;
    long long _totalTime;
    UIImageView *_logoImageView;
    SSThemedLabel *_progressLabel;
    TTMovieProgressSliderView *_sliderView;
}

+ (double)heightWithMode:(unsigned long long)arg1;
@property(retain, nonatomic) TTMovieProgressSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) SSThemedLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) long long totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)p_hideSelf;
- (void)p_refreshUI:(double)arg1 isIncrease:(_Bool)arg2;
- (void)p_refreshUIStyle;
- (void)setProgressPercentage:(double)arg1 isIncrease:(_Bool)arg2 type:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

