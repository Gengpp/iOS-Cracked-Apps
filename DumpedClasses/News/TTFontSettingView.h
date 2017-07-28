//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSAlertViewBase.h"

#import "UIScrollViewDelegate.h"

@class ExploreDetailFontSettingView, NSString, SSThemedButton, UIButton, UIView;

@interface TTFontSettingView : SSAlertViewBase <UIScrollViewDelegate>
{
    UIView *_itemContentView;
    UIView *_bgView;
    SSThemedButton *_cancelButton;
    UIButton *_hideButton;
    ExploreDetailFontSettingView *_fontSettingView;
    UIView *_cancelButtonTopDivideLineView;
}

@property(retain, nonatomic) UIView *cancelButtonTopDivideLineView; // @synthesize cancelButtonTopDivideLineView=_cancelButtonTopDivideLineView;
@property(retain, nonatomic) ExploreDetailFontSettingView *fontSettingView; // @synthesize fontSettingView=_fontSettingView;
@property(retain, nonatomic) UIButton *hideButton; // @synthesize hideButton=_hideButton;
@property(retain, nonatomic) SSThemedButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *itemContentView; // @synthesize itemContentView=_itemContentView;
- (void).cxx_destruct;
- (void)hideButtonClicked:(id)arg1;
- (void)cancelButtonClicked;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)show;
- (void)themeChanged:(id)arg1;
- (void)buildViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

