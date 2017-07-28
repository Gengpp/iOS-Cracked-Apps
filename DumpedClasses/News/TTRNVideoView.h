//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TTADMovieViewDelegate.h"

@class ExploreArticleMovieViewDelegate, ExploreMovieViewModel, NSDate, NSDictionary, NSString, SSThemedButton, TTADMovieView, TTImageView;

@interface TTRNVideoView : UIView <TTADMovieViewDelegate>
{
    _Bool _muted;
    _Bool _pauseByEvent;
    NSDictionary *_cover;
    NSString *_video_id;
    long long _play;
    long long _videoPosition;
    TTADMovieView *_videoView;
    ExploreArticleMovieViewDelegate *_movieViewDelegate;
    ExploreMovieViewModel *_movieViewModel;
    TTImageView *_logoView;
    SSThemedButton *_playButton;
    NSDate *_startDate;
}

@property(nonatomic) _Bool pauseByEvent; // @synthesize pauseByEvent=_pauseByEvent;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) SSThemedButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) TTImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) ExploreMovieViewModel *movieViewModel; // @synthesize movieViewModel=_movieViewModel;
@property(retain, nonatomic) ExploreArticleMovieViewDelegate *movieViewDelegate; // @synthesize movieViewDelegate=_movieViewDelegate;
@property(retain, nonatomic) TTADMovieView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) long long videoPosition; // @synthesize videoPosition=_videoPosition;
@property(nonatomic) long long play; // @synthesize play=_play;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(retain, nonatomic) NSString *video_id; // @synthesize video_id=_video_id;
@property(retain, nonatomic) NSDictionary *cover; // @synthesize cover=_cover;
- (void).cxx_destruct;
- (void)trackMute;
- (void)trackBreak;
- (void)trackPause;
- (void)trackResume;
- (void)trackFinish;
- (void)trackStart;
- (void)pauseVideo:(id)arg1;
- (void)resumeVideo:(id)arg1;
- (void)stopVideoViewPlayWithoutRemoveMovieView:(id)arg1;
- (void)stopVideoViewPlay:(id)arg1;
- (void)videoViewPlayFinished:(id)arg1;
- (void)removeVideoNotification;
- (void)registerVideoNotification;
- (void)retryButtonClickedStatus:(long long)arg1;
- (void)replayButtonClicked;
- (void)breakVideo;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)setMuteButton;
- (void)muteButtonClicked:(id)arg1;
- (void)playButtonClicked:(id)arg1;
- (void)startVideo;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

