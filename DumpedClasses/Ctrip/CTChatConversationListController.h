//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTChatRootViewController.h"

#import "CTChatClientReceiveConversationDelegate.h"
#import "CTTableViewDelegate.h"
#import "UITableViewDelegate.h"

@class CTChatConversationListView, CTChatConversationListViewManager, NSString;

@interface CTChatConversationListController : CTChatRootViewController <UITableViewDelegate, CTTableViewDelegate, CTChatClientReceiveConversationDelegate>
{
    CTChatConversationListView *_tableView;
    _Bool _isNetError;
    _Bool _isSyncing;
    _Bool _isViewAppear;
    _Bool _isPoped;
    _Bool _isPushed;
    _Bool _preNavBarHidden;
    long long _jumpType;
    CTChatConversationListViewManager *_viewManager;
}

+ (id)showConversationListVCFrom:(id)arg1 jumpType:(long long)arg2;
@property(retain, nonatomic) CTChatConversationListViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) CTChatConversationListView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;
- (_Bool)cellSelected;
- (void)handleInsideMsgCode:(id)arg1;
- (id)netErrorView;
- (id)syncTitleView;
- (void)popVC;
- (void)pullUpToAddData:(id)arg1;
- (void)pullDownToRefreshData:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)backBarButtonClicked:(id)arg1;
- (void)reloadTableView:(CDUnknownBlockType)arg1;
- (void)pushToConversationVC:(id)arg1;
- (void)fetchThreadInfoWithConversation:(id)arg1;
- (void)handleVCPushWithConversation:(id)arg1 threadinfo:(id)arg2;
- (void)handleVCPushWithConversation:(id)arg1;
- (void)handleCellSelected:(id)arg1;
- (void)handleInsideMsgSelected:(id)arg1 cellModel:(id)arg2;
- (void)handleCellDelete:(id)arg1 editStyle:(long long)arg2;
- (void)setTitleUnread;
- (void)handleReceivedConversation:(id)arg1;
- (void)onReceivedConversations:(id)arg1;
- (void)onReceivedConversation:(id)arg1;
- (void)receiveNotification:(id)arg1;
- (void)refreshTableViewRepeat;
- (void)handlePullUpEvent;
- (void)handlePullDownEvent;
- (void)fetchInsideMsgs;
- (void)fetchConversationsFromDBAndSync;
- (void)handleAllConversationsSyncFinish;
- (void)handleAllConversationsSyncBegin;
- (void)netWorkChanged;
- (void)initView;
- (int)applyNavigationBarStyle;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

