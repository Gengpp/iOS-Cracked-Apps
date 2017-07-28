//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSMutableArray, UIView, _TTPopTipsViewHitWrapper;

@interface TTPopTipsView : SSThemedView
{
    int _type;
    UIView *_wrapperView;
    SSThemedView *_trangleView;
    SSThemedView *_contentView;
    NSMutableArray *_items;
    _TTPopTipsViewHitWrapper *_hitWrapper;
}

@property(retain, nonatomic) _TTPopTipsViewHitWrapper *hitWrapper; // @synthesize hitWrapper=_hitWrapper;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) SSThemedView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SSThemedView *trangleView; // @synthesize trangleView=_trangleView;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void).cxx_destruct;
- (void)replaceItemByTitle:(id)arg1 withItem:(id)arg2;
- (void)showBackLayerBtn;
- (_Bool)dismiss;
- (void)showAnimate:(_Bool)arg1;
- (void)dismissAnimate:(_Bool)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColorThemeKey:(id)arg1;
- (void)setBackgroundColorThemeKey:(id)arg1;
- (id)setUpTipActionView:(id)arg1;
- (id)setUpTipMessageView:(id)arg1;
- (void)setPopViewWithItem:(id)arg1 type:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

