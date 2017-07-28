//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTInteractExitProtocol.h"

@class NSString, TTExploreMainViewController;

@interface ArticleTabBarStyleNewsListViewController : SSViewControllerBase <TTInteractExitProtocol>
{
    TTExploreMainViewController *_mainVC;
}

@property(retain, nonatomic) TTExploreMainViewController *mainVC; // @synthesize mainVC=_mainVC;
- (void).cxx_destruct;
- (id)suitableFinishBackView;
- (void)themeChanged:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)createMainVC;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

