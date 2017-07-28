//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "ExploreSearchViewDelegate.h"
#import "FRThreadSmartDetailViewModelDataSource.h"
#import "TTCommentDataSource.h"
#import "TTCommentDelegate.h"
#import "TTDetailWebViewRequestProcessorDelegate.h"
#import "TTDetailWebviewDelegate.h"
#import "TTUGCWriteCommentViewDelegate.h"
#import "UIViewControllerErrorHandler.h"

@class FRThreadSmartDetailViewModel, FriendDataManager, NSDictionary, NSError, NSString, SSWebViewBackButtonView, TTAlphaThemedButton, TTDetailNatantContainerView, TTDetailWebviewContainer, TTPersonModel, TTThreadCommentViewController, TTUGCCommentEntity, TTUGCDetailToolbarView, TTUGCWriteCommentView, TTViewWrapper, UIView;

@interface FRThreadSmartDetailViewController : SSViewControllerBase <TTDetailWebviewDelegate, TTDetailWebViewRequestProcessorDelegate, UIViewControllerErrorHandler, FRThreadSmartDetailViewModelDataSource, TTUGCWriteCommentViewDelegate, ExploreSearchViewDelegate, TTCommentDelegate, TTCommentDataSource>
{
    _Bool _showForum;
    _Bool _domReady;
    _Bool _hasInsertedInformationJs;
    _Bool _isFirstDidAppear;
    _Bool _hasAddKVO;
    _Bool _requestingContent;
    _Bool _requestingInformation;
    _Bool _commentButtonClick;
    _Bool _needSendCommentEnterTrack;
    _Bool _enterFromClickComment;
    long long _tid;
    long long _fid;
    NSString *_msgid;
    NSString *_cid;
    long long _actionType;
    NSDictionary *_extraTracks;
    NSString *_apiParameters;
    TTUGCCommentEntity *_replyComment;
    NSString *_replyContent;
    double _natantContentOffset;
    NSString *_followCallbackID;
    TTPersonModel *_threadAuthor;
    NSError *_contentRequestError;
    NSError *_informationRequestError;
    unsigned long long _requestStartTime;
    unsigned long long _contentNetworkConsume;
    unsigned long long _infoNetworkConsume;
    TTViewWrapper *_wrapperView;
    TTDetailWebviewContainer *_webDetailView;
    TTUGCDetailToolbarView *_toolbarView;
    TTDetailNatantContainerView *_natantContainerView;
    FRThreadSmartDetailViewModel *_viewModel;
    SSWebViewBackButtonView *_backButtonView;
    TTAlphaThemedButton *_rightBarButton;
    TTAlphaThemedButton *_searchBarButton;
    UIView *_snapNaviBar;
    TTUGCWriteCommentView *_writeCommentView;
    FriendDataManager *_friendManager;
    long long _commentLoadMoreTimes;
    TTThreadCommentViewController *_sCommentViewController;
    long long _publishStatusForTrack;
    NSString *_recommendReason;
}

@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(nonatomic) long long publishStatusForTrack; // @synthesize publishStatusForTrack=_publishStatusForTrack;
@property(nonatomic) _Bool enterFromClickComment; // @synthesize enterFromClickComment=_enterFromClickComment;
@property(nonatomic) _Bool needSendCommentEnterTrack; // @synthesize needSendCommentEnterTrack=_needSendCommentEnterTrack;
@property(nonatomic) _Bool commentButtonClick; // @synthesize commentButtonClick=_commentButtonClick;
@property(retain, nonatomic) TTThreadCommentViewController *sCommentViewController; // @synthesize sCommentViewController=_sCommentViewController;
@property(nonatomic) long long commentLoadMoreTimes; // @synthesize commentLoadMoreTimes=_commentLoadMoreTimes;
@property(retain, nonatomic) FriendDataManager *friendManager; // @synthesize friendManager=_friendManager;
@property(retain, nonatomic) TTUGCWriteCommentView *writeCommentView; // @synthesize writeCommentView=_writeCommentView;
@property(retain, nonatomic) UIView *snapNaviBar; // @synthesize snapNaviBar=_snapNaviBar;
@property(retain, nonatomic) TTAlphaThemedButton *searchBarButton; // @synthesize searchBarButton=_searchBarButton;
@property(retain, nonatomic) TTAlphaThemedButton *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
@property(retain, nonatomic) SSWebViewBackButtonView *backButtonView; // @synthesize backButtonView=_backButtonView;
@property(retain, nonatomic) FRThreadSmartDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TTDetailNatantContainerView *natantContainerView; // @synthesize natantContainerView=_natantContainerView;
@property(retain, nonatomic) TTUGCDetailToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) TTDetailWebviewContainer *webDetailView; // @synthesize webDetailView=_webDetailView;
@property(retain, nonatomic) TTViewWrapper *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(nonatomic) unsigned long long infoNetworkConsume; // @synthesize infoNetworkConsume=_infoNetworkConsume;
@property(nonatomic) unsigned long long contentNetworkConsume; // @synthesize contentNetworkConsume=_contentNetworkConsume;
@property(nonatomic) unsigned long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) NSError *informationRequestError; // @synthesize informationRequestError=_informationRequestError;
@property(retain, nonatomic) NSError *contentRequestError; // @synthesize contentRequestError=_contentRequestError;
@property(nonatomic) _Bool requestingInformation; // @synthesize requestingInformation=_requestingInformation;
@property(nonatomic) _Bool requestingContent; // @synthesize requestingContent=_requestingContent;
@property(retain, nonatomic) TTPersonModel *threadAuthor; // @synthesize threadAuthor=_threadAuthor;
@property(copy, nonatomic) NSString *followCallbackID; // @synthesize followCallbackID=_followCallbackID;
@property(nonatomic) double natantContentOffset; // @synthesize natantContentOffset=_natantContentOffset;
@property(nonatomic) _Bool hasAddKVO; // @synthesize hasAddKVO=_hasAddKVO;
@property(nonatomic) _Bool isFirstDidAppear; // @synthesize isFirstDidAppear=_isFirstDidAppear;
@property(copy, nonatomic) NSString *replyContent; // @synthesize replyContent=_replyContent;
@property(retain, nonatomic) TTUGCCommentEntity *replyComment; // @synthesize replyComment=_replyComment;
@property(nonatomic) _Bool hasInsertedInformationJs; // @synthesize hasInsertedInformationJs=_hasInsertedInformationJs;
@property(nonatomic) _Bool domReady; // @synthesize domReady=_domReady;
@property(copy, nonatomic) NSString *apiParameters; // @synthesize apiParameters=_apiParameters;
@property(copy, nonatomic) NSDictionary *extraTracks; // @synthesize extraTracks=_extraTracks;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool showForum; // @synthesize showForum=_showForum;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *msgid; // @synthesize msgid=_msgid;
@property(nonatomic) long long fid; // @synthesize fid=_fid;
@property(nonatomic) long long tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (void)tt_commentViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)tt_commentViewController:(id)arg1 startWriteComment:(id)arg2;
- (void)tt_commentViewController:(id)arg1 avatarTappedWithCommentModel:(id)arg2;
- (void)tt_commentViewController:(id)arg1 didClickReplyButtonWithCommentModel:(id)arg2;
- (void)tt_commentViewController:(id)arg1 didClickCommentCellWithCommentModel:(id)arg2;
- (void)tt_commentViewController:(id)arg1 digCommentWithCommentModel:(id)arg2;
- (void)tt_commentViewControllerDidFetchCommentsWithError:(id)arg1;
- (id)tt_serveForum;
- (id)tt_serveThread;
- (_Bool)tt_shoudShowHeaderSeparator;
- (_Bool)tt_canDeleteComments;
- (id)tt_commentHeaderView;
- (void)tt_thread_loadCommentsForMode:(long long)arg1 possibleLoadMoreOffset:(id)arg2 options:(unsigned long long)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (struct CGRect)contentVisableRect;
- (void)sendCommentEnterTrack;
- (void)trackWithEvent:(id)arg1 label:(id)arg2 extraDictionary:(id)arg3 containExtraTracks:(_Bool)arg4;
- (id)trackEvent;
- (id)stayPageDictionary:(double)arg1;
- (void)sendCurrentPageStayTime:(double)arg1;
- (void)trySendCurrentPageStayTime;
- (void)trackStartedByAppWillEnterForground;
- (void)trackEndedByAppWillEnterBackground;
- (void)friendDataManager:(id)arg1 finishActionType:(int)arg2 error:(id)arg3 result:(id)arg4;
- (void)processRequestShowSearchViewWithQuery:(id)arg1 fromType:(int)arg2 index:(unsigned long long)arg3;
- (void)processRequestOpenAppStoreByActionURL:(id)arg1 itunesID:(id)arg2;
- (void)processRequestShowPGCProfileWithParams:(id)arg1;
- (void)processRequestShowUserProfileForUserID:(id)arg1;
- (void)processRequestShowTipMsg:(id)arg1 icon:(id)arg2;
- (void)processRequestShowImgInPhotoScrollViewAtIndex:(unsigned long long)arg1 withFrameValue:(id)arg2;
- (id)placeholderImageAtIndex:(long long)arg1;
- (void)processRequestOpenWebViewUseURL:(id)arg1 supportRotate:(_Bool)arg2;
- (void)processRequestUpdateArticleImageMode:(id)arg1;
- (void)processRequestReceiveDomReady;
- (void)webViewContainerInFooterHalfShowStatusWithScrollOffset:(double)arg1;
- (void)webViewContainerWillShowFirstCommentCellByScrolling;
- (void)webView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)thread;
- (id)viewContrller;
- (void)publishComment:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)commentViewPublishComment:(id)arg1;
- (_Bool)shouldAllowCommentViewPublishComment:(id)arg1;
- (void)commentViewWillCancelled:(id)arg1;
- (void)searchSelectionText:(id)arg1;
- (id)selectedText;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setupMenuItems;
- (void)deleteThreadNotification:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)themeChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)closeNatantView;
- (void)openNatantViewWithFirstComment;
- (void)openNatantView;
- (void)shareButtonClicked:(id)arg1;
- (void)diggButtonClicked:(id)arg1;
- (void)commentButtonClicked:(id)arg1;
- (void)writeComment:(id)arg1;
- (void)moreButtonClicked;
- (void)closeButtonClicked:(id)arg1;
- (void)backButtonClicked:(id)arg1;
- (id)buildNatantItems;
- (void)buildNatantView;
- (id)detailWebView:(id)arg1 stringByEvaluatingJavaScriptFromString:(id)arg2;
- (void)updateThreadTagsWithTags:(id)arg1;
- (void)updateThreadStateWithDictionary:(id)arg1;
- (void)insertInfomationJs:(id)arg1;
- (void)webViewUpdateFontSize;
- (void)loadThreadContent;
- (void)registerFollowCallBack;
- (void)registerWebViewImageCallback;
- (void)registerWebViewJSCallback;
- (void)loadWebViewContent;
- (void)searchViewCancelButtonClicked:(id)arg1;
- (void)showSearchViewController;
- (id)generateBarButtonWithImageName:(id)arg1;
- (void)buildComponent;
- (void)requestThreadInfomation;
- (void)requestThreadContent;
- (void)requestContentAndDetailInfoAndComment;
- (void)sessionExpiredAction;
- (void)emptyViewBtnAction;
- (void)refreshData;
- (_Bool)tt_hasValidateData;
- (struct CGRect)frameForWebView;
- (struct CGRect)frameForToolBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithThreadID:(long long)arg1 forumID:(long long)arg2 concernID:(id)arg3 msgID:(id)arg4 showForum:(_Bool)arg5 actionType:(long long)arg6 extraTracks:(id)arg7 apiParameters:(id)arg8;
- (id)initWithBaseCondition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

