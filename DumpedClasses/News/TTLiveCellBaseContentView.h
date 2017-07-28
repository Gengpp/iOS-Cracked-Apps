//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class TTLiveCellMetaInfoView, TTLiveMessage;

@interface TTLiveCellBaseContentView : SSThemedView
{
    _Bool _isIncomingMsg;
    _Bool _isReplyedMsg;
    TTLiveCellMetaInfoView *_topInfoView;
    TTLiveMessage *_message;
}

@property(nonatomic) _Bool isReplyedMsg; // @synthesize isReplyedMsg=_isReplyedMsg;
@property(nonatomic) _Bool isIncomingMsg; // @synthesize isIncomingMsg=_isIncomingMsg;
@property(retain, nonatomic) TTLiveMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) TTLiveCellMetaInfoView *topInfoView; // @synthesize topInfoView=_topInfoView;
- (void).cxx_destruct;
- (void)showContentWithMessage:(id)arg1 isIncomingMsg:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

