//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBAccessibilityInvalidationEventsListener-Protocol.h"
#import "FBBookmarksFavoritesDownloaderDelegate-Protocol.h"
#import "FBBookmarksSingleSectionDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBBookmarksFavoritesDownloader, FBUserSession, NSArray, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;
@protocol FBBookmarksAddFavoritesViewControllerDelegate;

@interface FBBookmarksAddFavoritesViewController : UITableViewController <FBBookmarksFavoritesDownloaderDelegate, FBBookmarksSingleSectionDelegate, UITableViewDataSource, UITableViewDelegate, FBAccessibilityInvalidationEventsListener>
{
    _Bool _dataLoaded;
    FBBookmarksFavoritesDownloader *_downloader;
    NSObject *_scenePath;
    FBUserSession *_session;
    NSArray *_downloaderSections;
    NSMutableSet *_expandedSectionIndices;
    long long _mostRecentSingleSection;
    NSMutableOrderedSet *_selectedBookmarks;
    id <FBBookmarksAddFavoritesViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBBookmarksAddFavoritesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_tableViewBookmarkAtIndexPath:(id)arg1;
- (id)_downloaderSectionAtIndex:(long long)arg1;
- (void)_dismiss;
- (void)_sendRequestAndDismiss:(id)arg1;
- (void)_showSingleSectionForIndexPath:(id)arg1;
- (void)_toggleSectionAtIndex:(long long)arg1;
- (void)_toggleBookmarkSelectedAtIndexPath:(id)arg1;
- (id)analyticsModule;
- (void)_deselectSelectedRow;
- (void)sectionController:(id)arg1 didSelectBookmarkAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)_noItemsCellForSection:(long long)arg1 inTableView:(id)arg2;
- (id)_loadingCellForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)favoritesDownloader:(id)arg1 didLoadBookmarkSections:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveAccessibilityInvalidation;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

