//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class ExploreAvatarView, SSThemedButton, SSThemedLabel, SSThemedView, WDInviteUserTableCellViewModel;

@interface WDInviteRecommendUsersCell : SSThemedTableViewCell
{
    _Bool _isViewHighlighted;
    WDInviteUserTableCellViewModel *_viewModel;
    SSThemedButton *_inviteBtn;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_descLabel;
    ExploreAvatarView *_avatar;
    SSThemedView *_line;
}

@property(retain, nonatomic) SSThemedView *line; // @synthesize line=_line;
@property(retain, nonatomic) ExploreAvatarView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) SSThemedButton *inviteBtn; // @synthesize inviteBtn=_inviteBtn;
@property(nonatomic) _Bool isViewHighlighted; // @synthesize isViewHighlighted=_isViewHighlighted;
@property(retain, nonatomic) WDInviteUserTableCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)inviteRequest:(id)arg1;
- (void)changeBtnTitle:(id)arg1 status:(long long)arg2;
- (void)inviteUserToAnswer:(id)arg1;
- (void)refreshWithViewModel:(id)arg1 width:(double)arg2;
- (void)refreshUI;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

