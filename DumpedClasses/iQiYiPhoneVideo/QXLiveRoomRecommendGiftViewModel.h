//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QXBaseViewModel.h"

@class NSString, QXChatGiftItem;

@interface QXLiveRoomRecommendGiftViewModel : QXBaseViewModel
{
    _Bool _needRecommendGiftAlert;
    QXChatGiftItem *_item;
    NSString *_anchor_id;
    NSString *_room_id;
    NSString *_fromBlock;
}

@property(nonatomic) _Bool needRecommendGiftAlert; // @synthesize needRecommendGiftAlert=_needRecommendGiftAlert;
@property(copy, nonatomic) NSString *fromBlock; // @synthesize fromBlock=_fromBlock;
@property(copy, nonatomic) NSString *room_id; // @synthesize room_id=_room_id;
@property(copy, nonatomic) NSString *anchor_id; // @synthesize anchor_id=_anchor_id;
@property(retain, nonatomic) QXChatGiftItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)sendGiftWithFinishBlock:(CDUnknownBlockType)arg1;

@end

