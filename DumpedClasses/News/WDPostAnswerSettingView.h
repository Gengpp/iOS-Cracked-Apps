//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, WDPostAnswerViewModel, WDSettingSwitch;

@interface WDPostAnswerSettingView : SSThemedTableView <UITableViewDataSource, UITableViewDelegate>
{
    WDPostAnswerViewModel *_viewModel;
    WDSettingSwitch *_pgcSwitch;
    WDSettingSwitch *_banCommentSwitch;
}

@property(retain, nonatomic) WDSettingSwitch *banCommentSwitch; // @synthesize banCommentSwitch=_banCommentSwitch;
@property(retain, nonatomic) WDSettingSwitch *pgcSwitch; // @synthesize pgcSwitch=_pgcSwitch;
@property(nonatomic) __weak WDPostAnswerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)refreshswitch:(id)arg1;
- (void)banCommentValueChanged:(id)arg1;
- (void)pgcValueChanged:(id)arg1;
- (struct CGRect)frameForSwitchWithCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

