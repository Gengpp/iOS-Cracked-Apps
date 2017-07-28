//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ExploreMovieLoadingView, UIButton, UIImageView, UILabel;

@interface ExploreMoviePlayerControlTipView : UIView
{
    unsigned long long _tipType;
    _Bool _isFullScreen;
    _Bool _forbidLayout;
    UIImageView *_liveImageView;
    UILabel *_liveTipLabel;
    UIButton *_retryButton;
    UILabel *_retryLabel;
    ExploreMovieLoadingView *_loadingView;
    UIView *_movieControlView;
    UIView *_backView;
}

@property(nonatomic) _Bool forbidLayout; // @synthesize forbidLayout=_forbidLayout;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UIView *movieControlView; // @synthesize movieControlView=_movieControlView;
@property(retain, nonatomic) ExploreMovieLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(nonatomic) unsigned long long tipType; // @synthesize tipType=_tipType;
@property(retain, nonatomic) UILabel *retryLabel; // @synthesize retryLabel=_retryLabel;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *liveTipLabel; // @synthesize liveTipLabel=_liveTipLabel;
@property(retain, nonatomic) UIImageView *liveImageView; // @synthesize liveImageView=_liveImageView;
- (void).cxx_destruct;
- (void)dismissTipViewAnimation;
- (void)showTipView:(unsigned long long)arg1 andTipString:(id)arg2;
- (void)showTipView:(unsigned long long)arg1;
- (_Bool)hasShowTipView;
- (void)_refreshType:(unsigned long long)arg1 andTipString:(id)arg2;
- (_Bool)hasTipType;
- (void)updateFrame;
- (void)layoutSubviews;
- (id)init;

@end

