//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SSThemedLabel, TTAsyncCornerImageView, TTFollowThemeButton, TTRecommendModel, UIView;

@interface TTRecommendCollectionViewCell : UICollectionViewCell
{
    TTRecommendModel *_model;
    CDUnknownBlockType _followPressed;
    TTFollowThemeButton *_subscribeButton;
    TTAsyncCornerImageView *_avatarView;
    UIView *_nameView;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_descLabel;
}

@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) TTAsyncCornerImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) TTFollowThemeButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(copy, nonatomic) CDUnknownBlockType followPressed; // @synthesize followPressed=_followPressed;
@property(retain, nonatomic) TTRecommendModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)updateSubscribeButton;
- (void)subscribePressed;
- (void)configWithModel:(id)arg1;
- (void)refreshPGCSubscribeState:(id)arg1;
- (void)themeChanged;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

