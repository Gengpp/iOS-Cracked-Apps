//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SSThemedLabel, TTIMMessage;

@interface TTIMSystemMessageCell : UITableViewCell
{
    SSThemedLabel *_timeLabel;
    SSThemedLabel *_textLabel;
    TTIMMessage *_message;
}

+ (id)TTIMSystemMsgCellReuseIdentifier;
- (void).cxx_destruct;
- (void)tt_selfThemeChanged:(id)arg1;
- (void)setupCellWithMessage:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

