//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BLDataEngine, BLRootBillModel, NSString, PagingCondition, UITableView;

@interface BLHomeListDataManager : NSObject
{
    _Bool _isDataLoading;
    _Bool _hasMore;
    id <BLHomeListDataManagerDelegate> _delegate;
    unsigned long long _pageNum;
    NSString *_searchKeywords;
    BLRootBillModel *_listInfo;
    PagingCondition *_paging;
    NSString *_sceneId;
    UITableView *_tableView;
    BLDataEngine *_dataEngine;
    NSString *_category;
    NSString *_originCatory;
}

@property(retain, nonatomic) NSString *originCatory; // @synthesize originCatory=_originCatory;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) BLDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(retain, nonatomic) PagingCondition *paging; // @synthesize paging=_paging;
@property(retain, nonatomic) BLRootBillModel *listInfo; // @synthesize listInfo=_listInfo;
@property(retain, nonatomic) NSString *searchKeywords; // @synthesize searchKeywords=_searchKeywords;
@property(nonatomic) unsigned long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isDataLoading; // @synthesize isDataLoading=_isDataLoading;
@property(nonatomic) __weak id <BLHomeListDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeCacheListWithKey:(id)arg1;
- (void)saveCacheListWithKey:(id)arg1;
- (void)loadCacheListWithKey:(id)arg1;
- (void)hideDeleteButton;
- (void)deleteListWithIndexPath:(id)arg1;
- (void)queryRPCBillListWithCategory:(id)arg1 hasShowLoading:(_Bool)arg2;
- (void)queryRPCBillListWithParams:(id)arg1 hasShowLoading:(_Bool)arg2;
- (void)loadListWithParams:(id)arg1 isFirst:(_Bool)arg2 hasShowLoading:(_Bool)arg3;
- (void)dealloc;
- (id)initWithTableView:(id)arg1;

@end
