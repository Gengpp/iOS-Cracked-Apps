//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTAdCanvasBaseCell.h"

#import "TTChatroomMovieViewDelegate.h"

@class NSDate, NSString, SSThemedButton, TTAdCanvasLayoutModel, TTAdCanvasLiveModel, TTChatroomMovieView, TTImageView;

@interface TTAdCanvasLiveCell : TTAdCanvasBaseCell <TTChatroomMovieViewDelegate>
{
    _Bool _pauseByEvent;
    TTChatroomMovieView *_liveView;
    SSThemedButton *_statusView;
    SSThemedButton *_muteButton;
    NSDate *_startDate;
    TTAdCanvasLiveModel *_liveModel;
    TTImageView *_logoView;
    SSThemedButton *_playButton;
    NSString *_coverUrl;
    TTAdCanvasLayoutModel *_model;
}

+ (double)heightForModel:(id)arg1 inWidth:(double)arg2;
@property(retain, nonatomic) TTAdCanvasLayoutModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool pauseByEvent; // @synthesize pauseByEvent=_pauseByEvent;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) TTAdCanvasLiveModel *liveModel; // @synthesize liveModel=_liveModel;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) SSThemedButton *muteButton; // @synthesize muteButton=_muteButton;
@property(retain, nonatomic) SSThemedButton *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) TTChatroomMovieView *liveView; // @synthesize liveView=_liveView;
- (void).cxx_destruct;
- (void)trackMute;
- (void)trackBreak;
- (void)trackPause;
- (void)trackResume;
- (void)trackFinish;
- (void)trackStart;
- (void)trackShow;
- (void)layoutSubviews;
- (void)liveFinishNotification:(id)arg1;
- (void)removeLiveNotification;
- (void)registerLiveNotification;
- (void)setMutedButton;
- (void)retryButtonClickedStatus:(long long)arg1;
- (void)replayButtonClicked;
- (void)muteButtonTouched:(id)arg1;
- (void)playButtonClicked:(id)arg1;
- (void)startLive;
- (void)stopRemainMedias;
- (void)cellMediaPlay:(id)arg1;
- (void)cellBreakByEvent;
- (void)cellResumeByEvent;
- (void)cellPauseByEvent;
- (void)canvasCell:(id)arg1 showStatus:(unsigned long long)arg2 itemIndex:(long long)arg3;
- (void)refreshWithModel:(id)arg1;
- (void)setSubViews;
- (id)initWithWidth:(double)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

