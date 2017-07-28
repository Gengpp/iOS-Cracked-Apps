//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSArray, NSString;

@interface SSThemedTableView : UITableView
{
    _Bool _enableTTStyledSeparator;
    NSArray *_backgroundColors;
    NSString *_backgroundColorThemeKey;
    NSString *_separatorColorThemeKey;
    NSString *_separatorSecondColorThemeKey;
    double _separatorInsetLeft;
}

@property(nonatomic) _Bool enableTTStyledSeparator; // @synthesize enableTTStyledSeparator=_enableTTStyledSeparator;
@property(nonatomic) double separatorInsetLeft; // @synthesize separatorInsetLeft=_separatorInsetLeft;
@property(copy, nonatomic) NSString *separatorSecondColorThemeKey; // @synthesize separatorSecondColorThemeKey=_separatorSecondColorThemeKey;
@property(copy, nonatomic) NSString *separatorColorThemeKey; // @synthesize separatorColorThemeKey=_separatorColorThemeKey;
@property(copy, nonatomic) NSString *backgroundColorThemeKey; // @synthesize backgroundColorThemeKey=_backgroundColorThemeKey;
@property(copy, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
- (void).cxx_destruct;
- (void)_customThemeChanged:(id)arg1;
- (void)layoutSubviews;
- (void)ss_didInitialize;
- (void)dealloc;

@end

