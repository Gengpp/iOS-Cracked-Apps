//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedImageView, SSThemedLabel, TTAlphaThemedButton;

@interface TTNameContainerView : SSThemedView
{
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_showInfoLabel;
    TTAlphaThemedButton *_followersButton;
    TTAlphaThemedButton *_visitorButton;
    SSThemedImageView *_toutiaohaoUserImageView;
    SSThemedImageView *_rightArrowImageView;
    unsigned long long _maxWidth;
}

+ (id)visitorButtonString;
+ (id)followersButtonString;
@property(nonatomic) unsigned long long maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) SSThemedImageView *rightArrowImageView; // @synthesize rightArrowImageView=_rightArrowImageView;
@property(retain, nonatomic) SSThemedImageView *toutiaohaoUserImageView; // @synthesize toutiaohaoUserImageView=_toutiaohaoUserImageView;
@property(retain, nonatomic) TTAlphaThemedButton *visitorButton; // @synthesize visitorButton=_visitorButton;
@property(retain, nonatomic) TTAlphaThemedButton *followersButton; // @synthesize followersButton=_followersButton;
@property(retain, nonatomic) SSThemedLabel *showInfoLabel; // @synthesize showInfoLabel=_showInfoLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)openSocialViewControllerWithSelectedIndex:(unsigned long long)arg1;
- (void)didTapVisitorButton:(id)arg1;
- (void)didTapFollowersButton:(id)arg1;
- (_Bool)useTemporaryLayout;
- (void)refreshContainerView;
- (void)layoutSubviews;
- (id)init;

@end

