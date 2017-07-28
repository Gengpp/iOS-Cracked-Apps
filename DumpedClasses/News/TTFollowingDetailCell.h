//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTSocialBaseCell.h"

@class NSString;

@interface TTFollowingDetailCell : TTSocialBaseCell
{
    NSString *_tipsCount;
}

+ (double)cellHeightOfModel:(id)arg1;
+ (double)extraInsetTop;
+ (double)subtitle2FontSize;
+ (double)subtitle1FontSize;
+ (double)titleFontSize;
+ (double)spacingOfTitle;
+ (double)imageSize;
+ (double)imageNormalSize;
+ (int)friendRelationTypeOfModel:(id)arg1;
@property(copy, nonatomic) NSString *tipsCount; // @synthesize tipsCount=_tipsCount;
- (void).cxx_destruct;
- (void)reloadWithFollowingModel:(id)arg1;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

