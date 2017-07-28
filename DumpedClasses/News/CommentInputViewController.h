//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "SSCommentInputViewDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, SSCommentInputView;

@interface CommentInputViewController : SSViewControllerBase <SSCommentInputViewDelegate, UITextViewDelegate>
{
    id <CommentInputViewControllerDelegate> _delegate;
    SSCommentInputView *_commentInputView;
}

@property(retain, nonatomic) SSCommentInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(nonatomic) __weak id <CommentInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)commentInputViewWillSendMsg:(id)arg1;
- (void)commentInputViewCancelled:(id)arg1;
- (void)commentInputView:(id)arg1 responsedReceived:(id)arg2;
- (void)sendButtonClicked;
- (void)cancelButtonClicked;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initCommentInputViewWithDesignateMaxWords:(long long)arg1;
- (id)initWithMaxWordsCount:(long long)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

