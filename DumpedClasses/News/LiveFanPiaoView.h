//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LiveRoomBaseView.h"

@class UILabel;

@interface LiveFanPiaoView : LiveRoomBaseView
{
    UILabel *_messageLabel;
    long long _fanPiaoCount;
}

- (void).cxx_destruct;
- (void)refreshFanPiaoCount:(long long)arg1;
- (void)pr_enterTicketRankList:(id)arg1;
- (void)refreshLiveRoomModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 liveRoomModel:(id)arg2;

@end

