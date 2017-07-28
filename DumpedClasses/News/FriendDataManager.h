//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<FriendDataManagerDelegate>, SSHttpOperation;

@interface FriendDataManager : NSObject
{
    NSObject<FriendDataManagerDelegate> *delegate;
    NSMutableDictionary *operationDict;
    SSHttpOperation *profileOperation;
    SSHttpOperation *_joinFriendOP;
}

+ (_Bool)relationCountNeedNotify;
+ (void)saveSuggestUserLastTimestamp:(double)arg1;
+ (double)suggestUserLastTimestamp;
+ (void)clearStatistics;
+ (void)setHasNewFriendCount:(_Bool)arg1;
+ (_Bool)hasNewFriendCount;
+ (id)sharedManager;
+ (void)initialize;
@property(retain, nonatomic) SSHttpOperation *joinFriendOP; // @synthesize joinFriendOP=_joinFriendOP;
@property(retain, nonatomic) SSHttpOperation *profileOperation; // @synthesize profileOperation;
@property(retain, nonatomic) NSMutableDictionary *operationDict; // @synthesize operationDict;
@property(nonatomic) __weak NSObject<FriendDataManagerDelegate> *delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)operation:(id)arg1 finishedActionResult:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)startAction:(int)arg1 userID:(id)arg2 platform:(id)arg3 name:(id)arg4 from:(id)arg5 reason:(id)arg6;
- (void)notifyMediaID:(id)arg1 isFollowing:(_Bool)arg2;
- (void)newStartAction:(int)arg1 userID:(id)arg2 platform:(id)arg3 name:(id)arg4 from:(id)arg5 reason:(id)arg6 newReason:(id)arg7 newSource:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)follow:(id)arg1 action:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unfollow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)follow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startAction:(int)arg1 userID:(id)arg2 platform:(id)arg3 name:(id)arg4 from:(id)arg5;
- (void)operation:(id)arg1 finishedFriendProfileResult:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)startGetFriendProfileByUserID:(id)arg1 extraTrack:(id)arg2;
- (void)startGetFriendProfileByUserID:(id)arg1;
- (void)startGetStatisticsWithForceRemote:(_Bool)arg1 userID:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)operation:(id)arg1 finishedResult:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)startGetFriendListType:(int)arg1 friendModelClass:(Class)arg2 userID:(id)arg3 count:(int)arg4 offset:(int)arg5;
- (void)startGetFriendListType:(int)arg1 userID:(id)arg2 count:(int)arg3 offset:(int)arg4;
- (void)cancelAllRequests;
- (void)cancelGetFriendListType:(int)arg1;
- (void)_sendNotExistEventWithCount:(long long)arg1 totalCount:(long long)arg2;
- (void)startGetJoinFriendsWithOffset:(long long)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;
- (void)logoutNotificationRecevied:(id)arg1;

@end

