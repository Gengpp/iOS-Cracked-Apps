//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreArticleCellView.h"

#import "TTDislikePopViewDelegate.h"

@class NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, SSThemedView, TTImageView, UIView;

@interface TTArticleTitleLargePicHuoShanCellView : ExploreArticleCellView <TTDislikePopViewDelegate>
{
    long long type;
    SSThemedView *bottomSeperatorView;
    TTImageView *_pic;
    UIView *_timeInfoBgView;
    SSThemedButton *_playButton;
    SSThemedImageView *_videoIconView;
    SSThemedLabel *_videoDurationLabel;
}

+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) SSThemedLabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) SSThemedImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIView *timeInfoBgView; // @synthesize timeInfoBgView=_timeInfoBgView;
@property(retain, nonatomic) TTImageView *pic; // @synthesize pic=_pic;
- (void).cxx_destruct;
- (void)dislikeButtonClicked:(id)arg1 onlyOne:(_Bool)arg2;
- (void)unInterestButtonClicked:(id)arg1;
- (id)extraValueDic;
- (void)layoutBottomSeperatorView;
- (void)layoutPic;
- (void)updatePic;
- (void)updateTitleLabel;
- (void)updateTypeLabel;
- (void)layoutInfoLabel;
- (void)cellInListWillDisappear:(long long)arg1;
- (void)didEndDisplaying;
- (void)playButtonClicked;
- (void)refreshUI;
- (void)themeChanged:(id)arg1;
- (void)refreshWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

