//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTADBaseCell.h"

@class SSThemedLabel, SSThemedView, TTVideoTabThirdStyleTopView;

@interface TTADVideoTabThirdStyleCell : TTADBaseCell
{
    TTVideoTabThirdStyleTopView *_userInfoView;
    SSThemedView *_bottomView;
    SSThemedLabel *_titleLabel;
    SSThemedView *_sepView;
    SSThemedView *_sepLineView;
}

+ (id)p_titleTextWithData:(id)arg1;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) SSThemedView *sepLineView; // @synthesize sepLineView=_sepLineView;
@property(retain, nonatomic) SSThemedView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) TTVideoTabThirdStyleTopView *userInfoView; // @synthesize userInfoView=_userInfoView;
- (void).cxx_destruct;
- (void)didSelectWithContext:(id)arg1;
- (_Bool)p_nextCellHasTopPadding;
- (void)themeChanged:(id)arg1;
- (void)fontSizeChanged;
- (void)refreshWithData:(id)arg1;
- (void)layoutSubviews;

@end

