//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "TTStatusButtonDelegate.h"

@class NSString, SSThemedLabel, TTStatusButton, UIImageView, UIView;

@interface TTVideoFloatActionButton : SSThemedView <TTStatusButtonDelegate>
{
    TTStatusButton *_button;
    UIImageView *_iconImageView;
    SSThemedLabel *_titleLabel;
    UIView *_containView;
    NSString *_normalImageName;
    NSString *_normalImageNameHighlighted;
    _Bool _enable;
    _Bool _seleted;
    NSString *_title;
    NSString *_seletedImageName;
    NSString *_seletedImageNameHighlighted;
}

@property(copy, nonatomic) NSString *seletedImageNameHighlighted; // @synthesize seletedImageNameHighlighted=_seletedImageNameHighlighted;
@property(copy, nonatomic) NSString *seletedImageName; // @synthesize seletedImageName=_seletedImageName;
@property(nonatomic) _Bool seleted; // @synthesize seleted=_seleted;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)statusButtonHighlighted:(_Bool)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithImageName:(id)arg1 highlightedImageName:(id)arg2;
- (id)iconImageView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

