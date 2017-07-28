//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTDetailNatantRelateReadPureTitleView.h"

@class SSThemedButton, SSThemedImageView, SSThemedLabel, SSThemedView, TTImageView, UILabel, UIView;

@interface TTDetailNatantRelateReadRightImgView : TTDetailNatantRelateReadPureTitleView
{
    TTImageView *_imageView;
    UILabel *_fromLabel;
    UILabel *_commentCountLabel;
    UIView *_timeInfoBgView;
    SSThemedImageView *_videoIconView;
    SSThemedLabel *_videoDurationLabel;
    SSThemedLabel *_albumLogo;
    SSThemedView *_albumCover;
    SSThemedLabel *_albumCount;
    SSThemedButton *_actionButton;
    SSThemedButton *_downloadIcon;
}

+ (struct CGSize)videoDetailRelateVideoImageSizeWithWidth:(double)arg1;
@property(retain, nonatomic) SSThemedButton *downloadIcon; // @synthesize downloadIcon=_downloadIcon;
@property(retain, nonatomic) SSThemedButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) SSThemedLabel *albumCount; // @synthesize albumCount=_albumCount;
@property(retain, nonatomic) SSThemedView *albumCover; // @synthesize albumCover=_albumCover;
@property(retain, nonatomic) SSThemedLabel *albumLogo; // @synthesize albumLogo=_albumLogo;
@property(retain, nonatomic) SSThemedLabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) SSThemedImageView *videoIconView; // @synthesize videoIconView=_videoIconView;
@property(retain, nonatomic) UIView *timeInfoBgView; // @synthesize timeInfoBgView=_timeInfoBgView;
@property(retain, nonatomic) UILabel *commentCountLabel; // @synthesize commentCountLabel=_commentCountLabel;
@property(retain, nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) TTImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (float)titleHeightForArticle:(id)arg1 cellWidth:(float)arg2;
- (float)titleWidthForCellWidth:(float)arg1;
- (double)titleLabelFontSize;
- (void)handleAction:(id)arg1;
- (void)layoutVideoDurationLabel;
- (void)updateVideoDurationLabel;
- (void)themeChanged:(id)arg1;
- (void)hideFromLabel:(_Bool)arg1;
- (void)layoutActionButton;
- (void)refreshUI;
- (void)removeKVO;
- (void)refreshBottomLineView;
- (void)addKVO;
- (void)setViewModel:(id)arg1;
- (Class)viewModelClass;
- (id)initWithWidth:(double)arg1;

@end

