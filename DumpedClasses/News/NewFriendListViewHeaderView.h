//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSString, UILabel, UIView;

@interface NewFriendListViewHeaderView : SSViewBase
{
    UILabel *_textLabel;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *text;
- (void)settingTextLabelFrame;
- (void)layoutSubviews;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

