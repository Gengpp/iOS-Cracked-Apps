//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ArticleBaseListView.h"

#import "CHTCollectionViewDelegateWaterfallLayout.h"
#import "SSImpressionProtocol.h"
#import "UICollectionViewDataSource.h"
#import "UIViewControllerErrorHandler.h"

@class ExploreFetchListManager, ExploreItemActionManager, NSDictionary, NSIndexPath, NSString, NSTimer, UICollectionView;

@interface TTHTSWaterfallCollectionView : ArticleBaseListView <UICollectionViewDataSource, CHTCollectionViewDelegateWaterfallLayout, SSImpressionProtocol, UIViewControllerErrorHandler>
{
    _Bool _isShowing;
    _Bool _isDisplayView;
    _Bool _isClickCellLeaveList;
    _Bool _accountChangedNeedReadloadList;
    int _refreshFromType;
    UICollectionView *_collectionView;
    ExploreFetchListManager *_fetchListManager;
    NSString *_categoryID;
    NSString *_concernID;
    NSIndexPath *_selectedIndexPath;
    NSTimer *_preloadTimer;
    ExploreItemActionManager *_itemActionManager;
    NSDictionary *_externalRequestCondtion;
}

@property(retain, nonatomic) NSDictionary *externalRequestCondtion; // @synthesize externalRequestCondtion=_externalRequestCondtion;
@property(nonatomic) _Bool accountChangedNeedReadloadList; // @synthesize accountChangedNeedReadloadList=_accountChangedNeedReadloadList;
@property(nonatomic) _Bool isClickCellLeaveList; // @synthesize isClickCellLeaveList=_isClickCellLeaveList;
@property(retain, nonatomic) ExploreItemActionManager *itemActionManager; // @synthesize itemActionManager=_itemActionManager;
@property(retain, nonatomic) NSTimer *preloadTimer; // @synthesize preloadTimer=_preloadTimer;
@property(nonatomic) int refreshFromType; // @synthesize refreshFromType=_refreshFromType;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool isDisplayView; // @synthesize isDisplayView=_isDisplayView;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(retain, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) ExploreFetchListManager *fetchListManager; // @synthesize fetchListManager=_fetchListManager;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)refreshTypeStr;
- (void)eventV3ForRefresh;
- (void)eventV3HuoShanVideoShowWithOrderData:(id)arg1;
- (void)trackCellsInVisibleCells;
- (id)tabBarSnapShotView;
- (struct CGRect)selectedCellFrame;
- (id)selectedCollectionViewCell;
- (void)openHuoShanVideoByOrderedData:(id)arg1;
- (void)didSelectCellWithOrderedData:(id)arg1;
- (void)receiveVideoDeleteNotification:(id)arg1;
- (void)receiveItemDeleteNotification:(id)arg1;
- (id)getOrderedDataArrayFromVideoID:(id)arg1;
- (void)setNotInterestToOrderedData:(id)arg1;
- (void)receiveNotInterestNotification:(id)arg1;
- (void)notInterestAction:(id)arg1 position:(id)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)preloadMore;
- (void)tryPreload;
- (void)clearListContent;
- (void)beginListImpression;
- (void)endListImpression;
- (void)beginCellImpression:(id)arg1;
- (void)endCellImpression:(id)arg1;
- (void)needRerecordImpressions;
- (void)reloadListView;
- (void)loadMoreWithUmengLabel:(id)arg1;
- (_Bool)tt_hasValidateData;
- (void)emptyViewBtnAction;
- (void)refreshData;
- (id)primaryKey;
- (void)reportDelegateCancelRequest;
- (void)reportDelegateLoadFinish:(_Bool)arg1 isUserPull:(_Bool)arg2 isGetMore:(_Bool)arg3;
- (void)fetchFromLocal:(_Bool)arg1 fromRemote:(_Bool)arg2 getMore:(_Bool)arg3;
- (void)addPullDownRefreshView;
- (void)setContentTopInset:(double)arg1 bottomInset:(double)arg2;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)refreshDisplayView:(_Bool)arg1;
- (void)refreshListViewForCategory:(id)arg1 isDisplayView:(_Bool)arg2 fromLocal:(_Bool)arg3 fromRemote:(_Bool)arg4 reloadFromType:(int)arg5;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)shouldReloadBackAfterLeaveCurrentCategory;
- (void)saveLeaveCurrentCategoryDate;
- (void)tryAutoReloadIfNeed;
- (void)accountChanged:(id)arg1;
- (void)clearCacheNotification:(id)arg1;
- (void)receiveCoreDataCacheClearedNotification:(id)arg1;
- (void)listViewWillEnterBackground;
- (void)listViewWillEnterForground;
- (void)scrollToTopEnable:(_Bool)arg1;
- (void)pullAndRefresh;
- (void)themeChanged:(id)arg1;
- (void)removeDelegates;
- (void)willDisappear;
- (void)willAppear;
- (void)layoutSubviews;
- (struct CGRect)frameForCollectionView;
- (void)dealloc;
- (void)setExternalCondtion:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 topInset:(double)arg2 bottomInset:(double)arg3 fromTab:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

