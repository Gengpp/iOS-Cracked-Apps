//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CommentInputViewController, NSNotification;

@protocol CommentInputViewControllerDelegate <NSObject>

@optional
- (_Bool)commentInputViewControllerWillSendMsg:(CommentInputViewController *)arg1;
- (void)commentInputViewController:(CommentInputViewController *)arg1 responsedReceived:(NSNotification *)arg2;
- (void)commentInputViewControllerCancelled:(CommentInputViewController *)arg1;
@end

