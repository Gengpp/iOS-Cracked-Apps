//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class ArticleAvatarView, SSThemedLabel, SSUserModel, TTUserInfoView;

@interface ArticleMomentDigUsersViewCell : SSThemedTableViewCell
{
    TTUserInfoView *_nameView;
    SSThemedLabel *_descLabel;
    ArticleAvatarView *_avatarView;
    SSUserModel *_userModel;
}

@property(retain, nonatomic) SSUserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) ArticleAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) TTUserInfoView *nameView; // @synthesize nameView=_nameView;
- (void).cxx_destruct;
- (id)getRelationStr:(id)arg1;
- (void)refreshUserModel:(id)arg1 width:(double)arg2;
- (void)layoutSubviews;
- (struct CGRect)_separatorLineFrame;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

