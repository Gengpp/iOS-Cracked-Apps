//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "ArticleMomentRefreshTitleViewDelegate.h"

@class ArticleMomentListView, ArticleMomentRefreshTitleView, NSString, TTBadgeNumberView;

@interface ArticleTabBarStyleMomentViewController : SSViewControllerBase <ArticleMomentRefreshTitleViewDelegate>
{
    ArticleMomentListView *_momentListView;
    ArticleMomentRefreshTitleView *_refreshTitleView;
    TTBadgeNumberView *_addFriendBadgeView;
    unsigned long long _momentStyle;
}

@property(nonatomic) unsigned long long momentStyle; // @synthesize momentStyle=_momentStyle;
@property(retain, nonatomic) TTBadgeNumberView *addFriendBadgeView; // @synthesize addFriendBadgeView=_addFriendBadgeView;
@property(retain, nonatomic) ArticleMomentRefreshTitleView *refreshTitleView; // @synthesize refreshTitleView=_refreshTitleView;
@property(retain, nonatomic) ArticleMomentListView *momentListView; // @synthesize momentListView=_momentListView;
- (void).cxx_destruct;
- (_Bool)hasTipMomentlistLoginUserDefaultKey;
- (void)setHasTipMomentlistLoginUserDefaultKey:(_Bool)arg1;
- (void)weitoutiaoTabbarTapped:(id)arg1;
- (void)receiveBadgeChangedNotification:(id)arg1;
- (void)addFriendButtonClicked:(id)arg1;
- (void)rotationViewDidClicked:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)setupNavigationBarIfNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (_Bool)isUINavBarVisible;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithMomentStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

