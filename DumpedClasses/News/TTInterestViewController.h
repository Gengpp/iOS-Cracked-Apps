//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewController.h"

#import "TTSocialBaseCellDelegate.h"

@class ArticleFriend, NSString, TTInterestDataModel;

@interface TTInterestViewController : TTTableViewController <TTSocialBaseCellDelegate>
{
    ArticleFriend *_visitingUser;
    TTInterestDataModel *_interestModel;
}

+ (double)insetRightOfSeparator;
@property(retain, nonatomic) TTInterestDataModel *interestModel; // @synthesize interestModel=_interestModel;
@property(retain, nonatomic) ArticleFriend *visitingUser; // @synthesize visitingUser=_visitingUser;
- (void).cxx_destruct;
- (long long)tableViewSeparatorStyle;
- (id)offset;
- (id)uid;
- (void)socialBaseCell:(id)arg1 didTapFollowButton:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)emptyViewBtnAction;
- (_Bool)tt_hasValidateData;
- (id)eventPageKey;
- (_Bool)isMe;
- (_Bool)hasMoreData;
- (void)loadRequest;
- (void)viewDidLoad;
- (id)init;
- (id)initWithArticleFriend:(id)arg1;
- (id)initWithBaseCondition:(id)arg1;
- (id)initWithUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

