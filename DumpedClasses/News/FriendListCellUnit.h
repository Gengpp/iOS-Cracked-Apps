//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class SSAvatarView, TTIconLabel, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface FriendListCellUnit : SSViewBase
{
    int _verifyType;
    int _relationButtonType;
    int _platformType;
    UIButton *_relationButton;
    TTIconLabel *_titleLabel;
    UILabel *_descLabel;
    SSAvatarView *_avatarView;
    UIView *_bottomLineView;
    UIActivityIndicatorView *_loadingIndicator;
    UIImageView *_platformImageView;
    UILabel *_tipNewLabel;
}

@property(retain, nonatomic) UILabel *tipNewLabel; // @synthesize tipNewLabel=_tipNewLabel;
@property(nonatomic) int platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) UIImageView *platformImageView; // @synthesize platformImageView=_platformImageView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) SSAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) TTIconLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) int relationButtonType; // @synthesize relationButtonType=_relationButtonType;
@property(nonatomic) int verifyType; // @synthesize verifyType=_verifyType;
@property(retain, nonatomic) UIButton *relationButton; // @synthesize relationButton=_relationButton;
- (void).cxx_destruct;
- (void)refreshFrame;
- (void)setDesc:(id)arg1;
- (void)setAvatarURLString:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)showTipNew:(_Bool)arg1;
- (void)refreshPlatform;
- (void)refreshRelationButton;
- (void)refreshVerifyImage;
- (struct CGRect)frameForRelationButton;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

