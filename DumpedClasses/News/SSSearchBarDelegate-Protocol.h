//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SSSearchBar;

@protocol SSSearchBarDelegate <NSObject>

@optional
- (void)searchBar:(SSSearchBar *)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)searchBarResultsListButtonClicked:(SSSearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(SSSearchBar *)arg1;
- (void)searchBarBookmarkButtonClicked:(SSSearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(SSSearchBar *)arg1;
- (_Bool)searchBar:(SSSearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(SSSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarTextDidEndEditing:(SSSearchBar *)arg1;
- (_Bool)searchBarShouldEndEditing:(SSSearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(SSSearchBar *)arg1;
- (_Bool)searchBarShouldBeginEditing:(SSSearchBar *)arg1;
@end

