//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class SSThemedLabel, SSThemedView, TTAlphaThemedButton, UIImageView;

@interface TTVideoDetailFloatCommentTopBar : SSViewBase
{
    TTAlphaThemedButton *_closeBtn;
    SSThemedLabel *_titleLabel;
    SSThemedView *_lineView;
    UIImageView *_shadowView;
}

@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) SSThemedView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTAlphaThemedButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

