//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedTableViewCell.h"

@class SSThemedLabel, SSThemedView, UIImageView;

@interface TTArticleDetailMenuCell : SSThemedTableViewCell
{
    SSThemedLabel *_contentLabel;
    UIImageView *_arrowImageView;
    SSThemedView *_seperatorView;
}

@property(retain, nonatomic) SSThemedView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) SSThemedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

