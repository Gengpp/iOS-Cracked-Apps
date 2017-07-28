//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

@class SSThemedView, UINavigationItem, UIViewController;

@interface TTNavigationBar : UINavigationBar
{
    UIViewController *_viewController;
    UINavigationItem *_item;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UINavigationItem *item; // @synthesize item=_item;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)addKVO;
- (void)layoutSubviews;
- (void)tt_configNavBarWithTheme:(id)arg1;
- (void)reloadTheme;
- (void)addBottomLine;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

