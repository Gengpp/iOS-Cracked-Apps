//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface QRFinishTaskPop : UIView
{
    CDUnknownBlockType _closeHandle;
    UILabel *_descriptionLabel;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(copy, nonatomic) CDUnknownBlockType closeHandle; // @synthesize closeHandle=_closeHandle;
- (void).cxx_destruct;
- (void)closeHandle:(id)arg1;
- (void)setVipDays:(long long)arg1;
- (void)setVoucherNum:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

