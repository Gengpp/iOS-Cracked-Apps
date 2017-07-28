//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "FRConcernHomepageChildViewControllerProtocol.h"
#import "FRPageStayManagerDelegate.h"
#import "WDNativeListBaseListViewLoadingDelegate.h"

@class FRConcernTabStructModel, NSDate, NSDictionary, NSString, UIScrollView, WDNativeListBaseListView;

@interface FRConcernHomepageWenDaTabViewController : SSViewControllerBase <FRPageStayManagerDelegate, WDNativeListBaseListViewLoadingDelegate, FRConcernHomepageChildViewControllerProtocol>
{
    _Bool _isViewAppear;
    _Bool _isShowing;
    _Bool _isFirstAppearAndShowing;
    id <FRConcernHomepageViewControllerProtocol> _concernHomepageViewController;
    WDNativeListBaseListView *_listView;
    NSString *_concernID;
    FRConcernTabStructModel *_concernTabStructModel;
    long long _index;
    NSDictionary *_extraTracks;
    NSString *_apiParameters;
    NSDate *_lastRefreshDate;
}

@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(nonatomic) _Bool isFirstAppearAndShowing; // @synthesize isFirstAppearAndShowing=_isFirstAppearAndShowing;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isViewAppear; // @synthesize isViewAppear=_isViewAppear;
@property(retain, nonatomic) NSString *apiParameters; // @synthesize apiParameters=_apiParameters;
@property(copy, nonatomic) NSDictionary *extraTracks; // @synthesize extraTracks=_extraTracks;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) FRConcernTabStructModel *concernTabStructModel; // @synthesize concernTabStructModel=_concernTabStructModel;
@property(copy, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(retain, nonatomic) WDNativeListBaseListView *listView; // @synthesize listView=_listView;
@property(nonatomic) __weak id <FRConcernHomepageViewControllerProtocol> concernHomepageViewController; // @synthesize concernHomepageViewController=_concernHomepageViewController;
- (void).cxx_destruct;
- (void)pageStayRecorderWithTimeInterval:(long long)arg1 pageDisappearType:(unsigned long long)arg2;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 extraDict:(id)arg3 containExtra:(_Bool)arg4;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 containExtra:(_Bool)arg3;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2;
- (void)childViewControllerDidDisappear;
- (void)childViewControllerDidAppear;
- (void)refreshWithUserClick:(_Bool)arg1;
- (void)WDNativeListBaseListView:(id)arg1 isPullRefresh:(_Bool)arg2 FinishError:(id)arg3;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)didReceiveMemoryWarning;
- (void)setIsViewAppear:(_Bool)arg1 andIsShowing:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConcernID:(id)arg1 concernTabStructModel:(id)arg2 threadListStructModel:(id)arg3 atIndex:(long long)arg4 extraTracks:(id)arg5 apiParameters:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

