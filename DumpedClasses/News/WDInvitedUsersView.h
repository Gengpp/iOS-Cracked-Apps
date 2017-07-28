//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class ExploreAvatarView, NSDictionary, NSString, SSThemedButton, SSThemedLabel, WDInviteUserStructModel;

@interface WDInvitedUsersView : SSThemedView
{
    NSString *_pageSource;
    ExploreAvatarView *_avartarView;
    SSThemedLabel *_nameLabel;
    SSThemedLabel *_descLabel;
    SSThemedButton *_inviteButton;
    WDInviteUserStructModel *_model;
    NSString *_qID;
    NSDictionary *_apiParameter;
    NSDictionary *_gdExtJson;
}

@property(copy, nonatomic) NSDictionary *gdExtJson; // @synthesize gdExtJson=_gdExtJson;
@property(copy, nonatomic) NSDictionary *apiParameter; // @synthesize apiParameter=_apiParameter;
@property(copy, nonatomic) NSString *qID; // @synthesize qID=_qID;
@property(retain, nonatomic) WDInviteUserStructModel *model; // @synthesize model=_model;
@property(retain, nonatomic) SSThemedButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property(retain, nonatomic) SSThemedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) SSThemedLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) ExploreAvatarView *avartarView; // @synthesize avartarView=_avartarView;
@property(copy, nonatomic) NSString *pageSource; // @synthesize pageSource=_pageSource;
- (void).cxx_destruct;
- (void)inviteRequest;
- (void)inviteUserToAnswer:(id)arg1;
- (void)refreshView;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithModel:(id)arg1 quenstionId:(id)arg2 apiParams:(id)arg3 gdExtJson:(id)arg4;

@end

