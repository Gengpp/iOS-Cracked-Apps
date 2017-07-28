//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FRUserRelationWeitoutiaoRecommendsResponseModel, NSString, SSThemedButton, SSThemedTableView;

@interface TTWeitoutiaoColdStartViewController : SSViewControllerBase <UITableViewDelegate, UITableViewDataSource>
{
    SSThemedTableView *_tableView;
    SSThemedButton *_startBtn;
    FRUserRelationWeitoutiaoRecommendsResponseModel *_model;
    CDUnknownBlockType _startWeitoutiao;
}

@property(copy, nonatomic) CDUnknownBlockType startWeitoutiao; // @synthesize startWeitoutiao=_startWeitoutiao;
@property(retain, nonatomic) FRUserRelationWeitoutiaoRecommendsResponseModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)startAction;
- (void)themeChanged:(id)arg1;
- (void)_initViews;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

