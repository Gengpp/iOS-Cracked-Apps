//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIAlertViewDelegate.h"

@class LiveUserModel, NSString, UIButton, UIImageView, UILabel;

@interface LiveUserAdministratorCell : UITableViewCell <UIAlertViewDelegate>
{
    id <LiveAdminSettingDelegate> _delegate;
    LiveUserModel *_userModel;
    UIButton *_revokeButton;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIButton *revokeButton; // @synthesize revokeButton=_revokeButton;
@property(retain, nonatomic) LiveUserModel *userModel; // @synthesize userModel=_userModel;
@property(nonatomic) __weak id <LiveAdminSettingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)revokeButtonTapped:(id)arg1;
- (void)updateCellWithUser:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

