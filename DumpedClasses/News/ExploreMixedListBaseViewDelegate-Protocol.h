//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExploreMixedListBaseView, NSIndexPath;

@protocol ExploreMixedListBaseViewDelegate <NSObject>

@optional
- (void)mixListViewWillScrollToTop:(ExploreMixedListBaseView *)arg1;
- (void)mixListViewCancelRequest:(ExploreMixedListBaseView *)arg1;
- (void)mixListViewFinishLoad:(ExploreMixedListBaseView *)arg1 isFinish:(_Bool)arg2 isUserPull:(_Bool)arg3;
- (void)mixListViewDidStartLoad:(ExploreMixedListBaseView *)arg1;
- (void)mixListView:(ExploreMixedListBaseView *)arg1 didSelectRowAtIndex:(NSIndexPath *)arg2;
@end

