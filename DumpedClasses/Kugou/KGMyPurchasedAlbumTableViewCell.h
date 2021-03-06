//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeLabel, UIImageView;

@interface KGMyPurchasedAlbumTableViewCell : UITableViewCell
{
    UIImageView *_leftImgView;
    UIImageView *_rightImgView;
    KGThemeLabel *_leftLabel;
    KGThemeLabel *_rightLabel;
    KGThemeLabel *_leftSingerNameLabel;
    KGThemeLabel *_rightSingerNameLabel;
    UIImageView *_left_CDbackground;
    UIImageView *_right_CDbackground;
    UIImageView *_leftPayAlbumBg;
    UIImageView *_rightPayAlbumBg;
}

@property(retain, nonatomic) UIImageView *rightPayAlbumBg; // @synthesize rightPayAlbumBg=_rightPayAlbumBg;
@property(retain, nonatomic) UIImageView *leftPayAlbumBg; // @synthesize leftPayAlbumBg=_leftPayAlbumBg;
@property(retain, nonatomic) UIImageView *right_CDbackground; // @synthesize right_CDbackground=_right_CDbackground;
@property(retain, nonatomic) UIImageView *left_CDbackground; // @synthesize left_CDbackground=_left_CDbackground;
@property(retain, nonatomic) KGThemeLabel *rightSingerNameLabel; // @synthesize rightSingerNameLabel=_rightSingerNameLabel;
@property(retain, nonatomic) KGThemeLabel *leftSingerNameLabel; // @synthesize leftSingerNameLabel=_leftSingerNameLabel;
@property(retain, nonatomic) KGThemeLabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) KGThemeLabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UIImageView *rightImgView; // @synthesize rightImgView=_rightImgView;
@property(retain, nonatomic) UIImageView *leftImgView; // @synthesize leftImgView=_leftImgView;
- (void).cxx_destruct;
- (void)CreatingSubviewsBySpace:(float)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

