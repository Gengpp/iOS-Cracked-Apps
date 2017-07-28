//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Middleware.h"
#import "SSActivityViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, Store, TTActivityShareManager, TTMomentDetailAction;

@interface TTMomentDetailMiddleware : NSObject <UIActionSheetDelegate, SSActivityViewDelegate, Middleware>
{
    Store *store;
    TTMomentDetailAction *_deleteCommentAction;
    TTMomentDetailAction *_shareAction;
    TTActivityShareManager *_activityShareManager;
}

+ (id)topNavigationControllerFor:(id)arg1;
@property(retain, nonatomic) TTActivityShareManager *activityShareManager; // @synthesize activityShareManager=_activityShareManager;
@property(retain, nonatomic) TTMomentDetailAction *shareAction; // @synthesize shareAction=_shareAction;
@property(retain, nonatomic) TTMomentDetailAction *deleteCommentAction; // @synthesize deleteCommentAction=_deleteCommentAction;
@property(nonatomic) __weak Store *store; // @synthesize store;
- (void).cxx_destruct;
- (id)pageState;
- (id)generateRepostOriginArticleWithShareAction:(id)arg1;
- (void)openLoginController:(id)arg1;
- (void)forwardToWeitoutiao;
- (void)forwardButtonClicked;
- (void)activityView:(id)arg1 didCompleteByItemType:(int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleShareAction:(id)arg1;
- (void)handleUnBlockAction:(id)arg1;
- (void)handleDeleteCommentAction:(id)arg1;
- (void)handleReplyCommentDigAction:(id)arg1;
- (void)handleCommentDigAction:(id)arg1;
- (void)handlePublishCommentAction:(id)arg1;
- (void)handleUnfollowAction:(id)arg1;
- (void)handleFollowAction:(id)arg1;
- (void)handleLoadDigAction:(id)arg1;
- (void)handleLoadCommentAction:(id)arg1;
- (void)handleInitAction:(id)arg1;
- (void)handleAction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

