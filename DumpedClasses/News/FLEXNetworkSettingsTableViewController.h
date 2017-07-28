//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UIActionSheetDelegate.h"

@class NSArray, NSString, UITableViewCell;

@interface FLEXNetworkSettingsTableViewController : UITableViewController <UIActionSheetDelegate>
{
    NSArray *_cells;
    UITableViewCell *_cacheLimitCell;
}

+ (id)cellTitleFont;
@property(retain, nonatomic) UITableViewCell *cacheLimitCell; // @synthesize cacheLimitCell=_cacheLimitCell;
@property(copy, nonatomic) NSArray *cells; // @synthesize cells=_cells;
- (void).cxx_destruct;
- (id)sliderCellWithTitle:(id)arg1 changedAction:(SEL)arg2 minimum:(double)arg3 maximum:(double)arg4 initialValue:(double)arg5;
- (id)titleForCacheLimitCellWithValue:(long long)arg1;
- (id)buttonCellWithTitle:(id)arg1 touchUpAction:(SEL)arg2 isDestructive:(_Bool)arg3;
- (id)switchCellWithTitle:(id)arg1 toggleAction:(SEL)arg2 isOn:(_Bool)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clearRequestsTapped:(id)arg1;
- (void)cacheLimitAdjusted:(id)arg1;
- (void)cacheMediaResponsesToggled:(id)arg1;
- (void)networkDebuggingToggled:(id)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

