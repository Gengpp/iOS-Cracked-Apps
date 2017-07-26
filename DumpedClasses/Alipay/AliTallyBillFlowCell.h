//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface AliTallyBillFlowCell : UITableViewCell
{
    _Bool _showTopNumberTitle;
    _Bool _showCategoryImage;
    _Bool _showPicFlatImage;
    _Bool _showAccessoryView;
    _Bool _showSubTitle;
    UIButton *_categoryImageView;
    UILabel *_topNumberLabel;
    UILabel *_descLabel;
    UIImageView *_picFlagImageView;
    UILabel *_amountLabel;
    UIImageView *_accessoryImageView;
    UIView *_bottomLineView;
    UILabel *_cellSubTitle;
}

@property(retain, nonatomic) UILabel *cellSubTitle; // @synthesize cellSubTitle=_cellSubTitle;
@property(nonatomic) _Bool showSubTitle; // @synthesize showSubTitle=_showSubTitle;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UIImageView *picFlagImageView; // @synthesize picFlagImageView=_picFlagImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *topNumberLabel; // @synthesize topNumberLabel=_topNumberLabel;
@property(retain, nonatomic) UIButton *categoryImageView; // @synthesize categoryImageView=_categoryImageView;
@property(nonatomic) _Bool showAccessoryView; // @synthesize showAccessoryView=_showAccessoryView;
@property(nonatomic) _Bool showPicFlatImage; // @synthesize showPicFlatImage=_showPicFlatImage;
@property(nonatomic) _Bool showCategoryImage; // @synthesize showCategoryImage=_showCategoryImage;
@property(nonatomic) _Bool showTopNumberTitle; // @synthesize showTopNumberTitle=_showTopNumberTitle;
- (void).cxx_destruct;
- (void)buildSubViews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 width:(double)arg3 height:(double)arg4 showTopNumberTitle:(_Bool)arg5 showCategoryImage:(_Bool)arg6 showPicFlatImage:(_Bool)arg7 showAccessoryView:(_Bool)arg8;

@end
