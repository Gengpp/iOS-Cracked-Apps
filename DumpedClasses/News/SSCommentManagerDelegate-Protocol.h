//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSCommentManager;

@protocol SSCommentManagerDelegate <NSObject>

@optional
- (void)articleInfoManager:(SSCommentManager *)arg1 shouldShowAddForum:(_Bool)arg2;
- (void)articleInfoManager:(SSCommentManager *)arg1 refreshCommentsCount:(unsigned long long)arg2;
@end

