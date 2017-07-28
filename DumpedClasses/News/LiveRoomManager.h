//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiveRoomModel, NSNumber;

@interface LiveRoomManager : NSObject
{
    _Bool _enableEnterRoomFromPush;
    _Bool _isInLiveRoom;
    long long _enterReference;
    NSNumber *_pushedRoomID;
    LiveRoomModel *_liveRoomModel;
}

+ (id)shareInstance;
@property(retain, nonatomic) LiveRoomModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
@property(nonatomic) _Bool isInLiveRoom; // @synthesize isInLiveRoom=_isInLiveRoom;
@property(retain, nonatomic) NSNumber *pushedRoomID; // @synthesize pushedRoomID=_pushedRoomID;
@property(nonatomic) long long enterReference; // @synthesize enterReference=_enterReference;
@property(nonatomic) _Bool enableEnterRoomFromPush; // @synthesize enableEnterRoomFromPush=_enableEnterRoomFromPush;
- (void).cxx_destruct;
- (void)requestBannerWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)stats:(id)arg1 streamUrl:(id)arg2 statsType:(long long)arg3;
- (void)digg:(id)arg1 count:(long long)arg2 duration:(long long)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)barrage:(id)arg1 content:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)chat:(id)arg1 content:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)pollMessage:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)fetchMessage:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)fetchFromUrl:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)deassignAdmin:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)assignAdmin:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)unforbiddenUser:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)forbiddenUser:(id)arg1 room:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)getRoomUsers:(id)arg1 cursor:(long long)arg2 count:(long long)arg3 isFirstFetch:(_Bool)arg4 finishBlock:(CDUnknownBlockType)arg5;
- (void)getSwitchStream:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)playState:(id)arg1 streamID:(id)arg2;
- (void)recordState:(long long)arg1 roomID:(id)arg2 streamID:(id)arg3 roomFinishReason:(long long)arg4;
- (void)recordState:(long long)arg1 roomID:(id)arg2 streamID:(id)arg3;
- (void)exitRoom:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)enterRoom:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)getRoomInfo:(id)arg1 roomPackLevel:(long long)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)getRoomInfo:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)createRoomWithFinishBlock:(CDUnknownBlockType)arg1;
- (_Bool)getIsInLiveRoom;
- (id)getCurrentLiveRoom;
- (void)isInLiveRoom:(_Bool)arg1 liveRoomModel:(id)arg2;
- (void)isInLiveRoom:(_Bool)arg1;

@end

