//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SSThemedImageView, SSThemedLabel, TTBadgeNumberView, TTBubbleView, TTCategorySelectorView, TTTopBarManager, UITapGestureRecognizer;

@interface TTTopBar : SSViewBase <UIGestureRecognizerDelegate>
{
    id <TTTopBarDelegate> _delegate;
    TTCategorySelectorView *_selectorView;
    SSThemedImageView *_backgroundImageView;
    SSThemedLabel *_searchLabel;
    UITapGestureRecognizer *_searchFieldTapGesture;
    UITapGestureRecognizer *_mineIconTapGesture;
    TTTopBarManager *_manager;
    SSThemedImageView *_mineIcon;
    SSThemedImageView *_mineIconMaskView;
    TTBadgeNumberView *_badgeView;
    TTBubbleView *_mineIconTipsView;
    double _touchOffset;
    double _textLeftOffset;
}

+ (id)searchBackgroundImage;
@property(nonatomic) double textLeftOffset; // @synthesize textLeftOffset=_textLeftOffset;
@property(nonatomic) double touchOffset; // @synthesize touchOffset=_touchOffset;
@property(retain, nonatomic) TTBubbleView *mineIconTipsView; // @synthesize mineIconTipsView=_mineIconTipsView;
@property(retain, nonatomic) TTBadgeNumberView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) SSThemedImageView *mineIconMaskView; // @synthesize mineIconMaskView=_mineIconMaskView;
@property(retain, nonatomic) SSThemedImageView *mineIcon; // @synthesize mineIcon=_mineIcon;
@property(retain, nonatomic) TTTopBarManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) UITapGestureRecognizer *mineIconTapGesture; // @synthesize mineIconTapGesture=_mineIconTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *searchFieldTapGesture; // @synthesize searchFieldTapGesture=_searchFieldTapGesture;
@property(retain, nonatomic) SSThemedLabel *searchLabel; // @synthesize searchLabel=_searchLabel;
@property(retain, nonatomic) SSThemedImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) TTCategorySelectorView *selectorView; // @synthesize selectorView=_selectorView;
@property(nonatomic) __weak id <TTTopBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)badgeNumber;
- (void)receiveBadgeMangerChangedNotification:(id)arg1;
- (void)searchPlaceholderChanged:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)mineIconClick:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)refreshBadgeView;
- (void)refreshSearchLabel;
- (void)refreshMineIcon;
- (void)refreshBackgroundImageView;
- (void)refreshData;
- (void)addTTCategorySelectorView:(id)arg1 delegate:(id)arg2;
- (void)setupSubviews;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

