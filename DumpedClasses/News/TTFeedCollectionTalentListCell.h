//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTFeedCollectionCell.h"

#import "ArticleBaseListViewDelegate.h"

@class NSString, TTCategory, TTWaterfallCollectionView;

@interface TTFeedCollectionTalentListCell : TTFeedCollectionCell <ArticleBaseListViewDelegate>
{
    TTWaterfallCollectionView *_listView;
    TTCategory *_category;
}

@property(retain, nonatomic) TTCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) TTWaterfallCollectionView *listView; // @synthesize listView=_listView;
- (void).cxx_destruct;
- (void)listViewStopLoading:(id)arg1;
- (void)listViewStartLoading:(id)arg1;
- (void)refreshDataWithType:(int)arg1;
- (void)triggerPullRefresh;
- (void)refreshIfNeeded;
- (void)refreshData;
- (id)categoryModel;
- (void)setupCellModel:(id)arg1 isDisplay:(_Bool)arg2;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

