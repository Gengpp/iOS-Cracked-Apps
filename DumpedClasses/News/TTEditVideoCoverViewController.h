//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UIGestureRecognizerDelegate.h"

@class AVPlayer, AVPlayerItem, AVURLAsset, NSDictionary, NSMutableArray, NSString, NSURL, SSThemedView, TTAlphaThemedButton, TTVideoPlayerLayerView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface TTEditVideoCoverViewController : SSViewControllerBase <UIGestureRecognizerDelegate>
{
    _Bool _coverPlayerIsSeekInProgress;
    _Bool _previewPlayerIsSeekInProgress;
    SSThemedView *_toolBarView;
    TTAlphaThemedButton *_confirmButton;
    AVPlayer *_coverPlayer;
    TTVideoPlayerLayerView *_coverPlayerContainerView;
    AVPlayer *_previewPlayer;
    TTVideoPlayerLayerView *_previewContainerView;
    NSMutableArray *_previewImageViews;
    SSThemedView *_coversContainerView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSURL *_videoUrl;
    NSDictionary *_extraTrack;
    AVURLAsset *_videoAsset;
    AVPlayerItem *_coverPlayerItem;
    AVPlayerItem *_previewPlayerItem;
    CDUnknownBlockType _completeBlock;
    long long _coverPlayerItemStatus;
    long long _previewPlayerItemStatus;
    CDStruct_1b6d18a9 _coverPlayerChaseTime;
    CDStruct_1b6d18a9 _previewPlayerChaseTime;
}

@property(nonatomic) CDStruct_1b6d18a9 previewPlayerChaseTime; // @synthesize previewPlayerChaseTime=_previewPlayerChaseTime;
@property(nonatomic) CDStruct_1b6d18a9 coverPlayerChaseTime; // @synthesize coverPlayerChaseTime=_coverPlayerChaseTime;
@property(nonatomic) _Bool previewPlayerIsSeekInProgress; // @synthesize previewPlayerIsSeekInProgress=_previewPlayerIsSeekInProgress;
@property(nonatomic) _Bool coverPlayerIsSeekInProgress; // @synthesize coverPlayerIsSeekInProgress=_coverPlayerIsSeekInProgress;
@property(nonatomic) long long previewPlayerItemStatus; // @synthesize previewPlayerItemStatus=_previewPlayerItemStatus;
@property(nonatomic) long long coverPlayerItemStatus; // @synthesize coverPlayerItemStatus=_coverPlayerItemStatus;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) AVPlayerItem *previewPlayerItem; // @synthesize previewPlayerItem=_previewPlayerItem;
@property(retain, nonatomic) AVPlayerItem *coverPlayerItem; // @synthesize coverPlayerItem=_coverPlayerItem;
@property(retain, nonatomic) AVURLAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(copy, nonatomic) NSDictionary *extraTrack; // @synthesize extraTrack=_extraTrack;
@property(copy, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) SSThemedView *coversContainerView; // @synthesize coversContainerView=_coversContainerView;
@property(retain, nonatomic) NSMutableArray *previewImageViews; // @synthesize previewImageViews=_previewImageViews;
@property(retain, nonatomic) TTVideoPlayerLayerView *previewContainerView; // @synthesize previewContainerView=_previewContainerView;
@property(retain, nonatomic) AVPlayer *previewPlayer; // @synthesize previewPlayer=_previewPlayer;
@property(retain, nonatomic) TTVideoPlayerLayerView *coverPlayerContainerView; // @synthesize coverPlayerContainerView=_coverPlayerContainerView;
@property(retain, nonatomic) AVPlayer *coverPlayer; // @synthesize coverPlayer=_coverPlayer;
@property(retain, nonatomic) TTAlphaThemedButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) SSThemedView *toolBarView; // @synthesize toolBarView=_toolBarView;
- (void).cxx_destruct;
- (void)trackWithEvent:(id)arg1 label:(id)arg2 extraDictionary:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)getCurrentTimeInterval;
- (void)gesturetTriggerSeekToTimeWithOffset:(double)arg1;
- (void)panCovers:(id)arg1;
- (void)tapCovers:(id)arg1;
- (void)previewPlayerTrySeekToChaseTime;
- (void)previewPlayerSeekSmoothlyToTime:(CDStruct_1b6d18a9)arg1;
- (void)coverPlayerTrySeekToChaseTime;
- (void)coverPlayerSeekSmoothlyToTime:(CDStruct_1b6d18a9)arg1;
- (void)goBack:(id)arg1;
- (void)confirm:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)createCoversContainerViewComponent;
- (void)createCoverPlayerContainerViewComponent;
- (void)createToolBarViewComponent;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoUrl:(id)arg1 extraTrack:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

