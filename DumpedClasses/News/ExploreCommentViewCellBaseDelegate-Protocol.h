//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExploreCommentCell, NSString, SSCommentModel;

@protocol ExploreCommentViewCellBaseDelegate <NSObject>

@optional
- (void)commentViewCellBase:(ExploreCommentCell *)arg1 replyListAvatarClickedWithUserID:(NSString *)arg2 commentModel:(SSCommentModel *)arg3;
- (void)commentViewCellBase:(ExploreCommentCell *)arg1 replyListClickedWithModel:(SSCommentModel *)arg2;
- (void)commentViewCellBase:(ExploreCommentCell *)arg1 showMoreButtonClickedWithModel:(SSCommentModel *)arg2;
- (void)commentViewCellBase:(ExploreCommentCell *)arg1 deleteCommentWithCommentModel:(SSCommentModel *)arg2;
- (void)commentViewCellBase:(ExploreCommentCell *)arg1 avatarTappedWithCommentModel:(SSCommentModel *)arg2;
- (void)commentViewCellBase:(ExploreCommentCell *)arg1 replyButtonClickedWithModel:(SSCommentModel *)arg2;
@end

