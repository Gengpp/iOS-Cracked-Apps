//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTAlphaThemedButton.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SSThemedImageView, SSThemedLabel, SSThemedView, UIPanGestureRecognizer;

@interface TTScreenshotShareTipView : TTAlphaThemedButton <UIGestureRecognizerDelegate>
{
    _Bool _exited;
    SSThemedImageView *_shareImageView;
    SSThemedLabel *_shareLabel;
    SSThemedView *_backgroundView;
    UIPanGestureRecognizer *_rightPanGesture;
}

+ (void)show;
@property(retain, nonatomic) UIPanGestureRecognizer *rightPanGesture; // @synthesize rightPanGesture=_rightPanGesture;
@property(nonatomic) _Bool exited; // @synthesize exited=_exited;
@property(retain, nonatomic) SSThemedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) SSThemedLabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) SSThemedImageView *shareImageView; // @synthesize shareImageView=_shareImageView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleRightPanGesture:(id)arg1;
- (void)shareButtonAction;
- (id)imageByScalingAndCroppingForSize:(struct CGSize)arg1 withSourceImage:(id)arg2;
- (void)exit:(_Bool)arg1;
- (void)show;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

