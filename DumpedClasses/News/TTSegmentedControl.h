//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISegmentedControl.h"

@class NSMutableArray, NSString;

@interface TTSegmentedControl : UISegmentedControl
{
    NSString *_backgroundColorThemeKey;
    NSMutableArray *_badgeViews;
}

@property(retain, nonatomic) NSMutableArray *badgeViews; // @synthesize badgeViews=_badgeViews;
@property(copy, nonatomic) NSString *backgroundColorThemeKey; // @synthesize backgroundColorThemeKey=_backgroundColorThemeKey;
- (void).cxx_destruct;
- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)themeChanged:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (id)initWithItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

