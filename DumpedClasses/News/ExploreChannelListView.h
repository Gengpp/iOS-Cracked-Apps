//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "ExploreMixedListBaseViewDelegate.h"
#import "WDNativeListBaseListViewLoadingDelegate.h"

@class ArticleWebListView, ExploreMixedListBaseView, NSString, SSNavigationBar, SSThemedButton, SSThemedView, WDNativeListBaseListView;

@interface ExploreChannelListView : SSViewBase <ExploreMixedListBaseViewDelegate, WDNativeListBaseListViewLoadingDelegate>
{
    int _flag;
    SSNavigationBar *_navigationBar;
    id <ExploreChannelListViewDelegate> _delegate;
    WDNativeListBaseListView *_wenDaListView;
    ExploreMixedListBaseView *_listView;
    ArticleWebListView *_webListView;
    SSThemedView *_subscribeViewContainer;
    SSThemedButton *_subscribeButton;
    NSString *_categoryID;
    NSString *_categoryName;
    NSString *_wapUrl;
    unsigned long long _listType;
}

@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(copy, nonatomic) NSString *wapUrl; // @synthesize wapUrl=_wapUrl;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) SSThemedButton *subscribeButton; // @synthesize subscribeButton=_subscribeButton;
@property(retain, nonatomic) SSThemedView *subscribeViewContainer; // @synthesize subscribeViewContainer=_subscribeViewContainer;
@property(retain, nonatomic) ArticleWebListView *webListView; // @synthesize webListView=_webListView;
@property(retain, nonatomic) ExploreMixedListBaseView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) WDNativeListBaseListView *wenDaListView; // @synthesize wenDaListView=_wenDaListView;
@property(nonatomic) __weak id <ExploreChannelListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (id)categorySelectorView;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)setTitleWithCategoryName:(id)arg1;
- (struct CGRect)frameForSubscribeBtn;
- (struct CGPoint)frameOriginForSubscribeInfoLabel;
- (struct CGRect)frameForSubscribeViewContainer;
- (struct CGRect)frameForWebListView;
- (struct CGRect)frameForTitleImageView;
- (void)backButtonClicked;
- (void)layoutSubviews;
- (void)didDisappear;
- (void)willDisappear;
- (void)didAppear;
- (void)willAppear;
- (void)subscribe:(id)arg1;
- (void)createSubscribeView;
- (id)queryCategoryModel;
- (void)WDNativeListBaseListView:(id)arg1 isPullRefresh:(_Bool)arg2 FinishError:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 baseCondition:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

