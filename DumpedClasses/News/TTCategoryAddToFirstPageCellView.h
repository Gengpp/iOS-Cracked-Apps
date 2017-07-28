//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreCellViewBase.h"

@class SSThemedButton, SSThemedLabel, SSThemedView, TTAlphaThemedButton, TTCategoryAddToFirstPageData, TTImageView;

@interface TTCategoryAddToFirstPageCellView : ExploreCellViewBase
{
    _Bool _isViewHighlighted;
    TTCategoryAddToFirstPageData *_modelData;
    id _originData;
    SSThemedButton *_addActionButton;
    SSThemedLabel *_tipTextLabel;
    TTImageView *_iconImageView;
    TTAlphaThemedButton *_closeButton;
    SSThemedView *_footerView;
}

+ (double)cellViewHeightWithModel:(id)arg1 constraintWidth:(double)arg2;
+ (double)footerViewHeight:(id)arg1;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
@property(retain, nonatomic) SSThemedView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) TTAlphaThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) TTImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) SSThemedLabel *tipTextLabel; // @synthesize tipTextLabel=_tipTextLabel;
@property(retain, nonatomic) SSThemedButton *addActionButton; // @synthesize addActionButton=_addActionButton;
@property(retain, nonatomic) id originData; // @synthesize originData=_originData;
@property(retain, nonatomic) TTCategoryAddToFirstPageData *modelData; // @synthesize modelData=_modelData;
@property(nonatomic) _Bool isViewHighlighted; // @synthesize isViewHighlighted=_isViewHighlighted;
- (void).cxx_destruct;
- (void)closeAddTipCell:(id)arg1;
- (void)addToFirstPage:(id)arg1;
- (void)refreshLayOutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshUI;
- (id)cellData;
- (void)refreshWithData:(id)arg1;
- (void)fontSizeChanged;
- (void)themeChanged:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

