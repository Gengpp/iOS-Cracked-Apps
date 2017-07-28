//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SSThemedTableView, WDVerticalSearchViewModel;

@interface WDVerticalSearchSuggestionView : SSThemedView <UITableViewDelegate, UITableViewDataSource>
{
    id <WDVerticalSearchSuggestionViewDelegate> _delegate;
    WDVerticalSearchViewModel *_viewModel;
    SSThemedTableView *_tableView;
}

@property(retain, nonatomic) SSThemedTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) WDVerticalSearchViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <WDVerticalSearchSuggestionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)suggestionArray;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

