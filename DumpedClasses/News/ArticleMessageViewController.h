//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "ArticleMessageContainerControllerProtocol.h"

@class ArticleMessageView, NSString;

@interface ArticleMessageViewController : SSViewControllerBase <ArticleMessageContainerControllerProtocol>
{
    ArticleMessageView *_messageView;
    unsigned long long _messageType;
    CDUnknownBlockType _clearBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clearBlock; // @synthesize clearBlock=_clearBlock;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) ArticleMessageView *messageView; // @synthesize messageView=_messageView;
- (void).cxx_destruct;
- (void)reloadData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithType:(unsigned long long)arg1 clearBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

