//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class SSThemedButton, SSThemedImageView, SSThemedLabel, SSThemedView, TTAsyncCornerImageView, TTIconLabel, TTImageView, TTMessageNotificationModel;

@interface TTMessageNotificationBaseCellView : SSViewBase
{
    TTAsyncCornerImageView *_avatarImageView;
    TTIconLabel *_roleInfoView;
    SSThemedLabel *_contactInfoLabel;
    SSThemedLabel *_refTextLabel;
    TTImageView *_refImageView;
    SSThemedLabel *_bodyTextLabel;
    SSThemedLabel *_timeLabel;
    SSThemedButton *_multiTextView;
    SSThemedView *_bottomLineView;
    TTMessageNotificationModel *_messageModel;
    SSThemedImageView *_refPalyIcon;
    SSThemedImageView *_multiTextArrow;
    SSThemedLabel *_multiTextLabel;
}

+ (double)heightForRefTextLabelWithData:(id)arg1 maxWidth:(double)arg2;
+ (double)heightForBodyTextLabelWithData:(id)arg1 maxWidth:(double)arg2;
+ (double)heightForData:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) SSThemedLabel *multiTextLabel; // @synthesize multiTextLabel=_multiTextLabel;
@property(retain, nonatomic) SSThemedImageView *multiTextArrow; // @synthesize multiTextArrow=_multiTextArrow;
@property(retain, nonatomic) SSThemedImageView *refPalyIcon; // @synthesize refPalyIcon=_refPalyIcon;
@property(retain, nonatomic) TTMessageNotificationModel *messageModel; // @synthesize messageModel=_messageModel;
@property(retain, nonatomic) SSThemedView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) SSThemedButton *multiTextView; // @synthesize multiTextView=_multiTextView;
@property(retain, nonatomic) SSThemedLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) SSThemedLabel *bodyTextLabel; // @synthesize bodyTextLabel=_bodyTextLabel;
@property(retain, nonatomic) TTImageView *refImageView; // @synthesize refImageView=_refImageView;
@property(retain, nonatomic) SSThemedLabel *refTextLabel; // @synthesize refTextLabel=_refTextLabel;
@property(retain, nonatomic) SSThemedLabel *contactInfoLabel; // @synthesize contactInfoLabel=_contactInfoLabel;
@property(retain, nonatomic) TTIconLabel *roleInfoView; // @synthesize roleInfoView=_roleInfoView;
@property(retain, nonatomic) TTAsyncCornerImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)layoutBottomLine;
- (void)layoutRefImageView;
- (void)layoutRefTextLabel;
- (void)layoutTimeLabelWithOrigin:(struct CGPoint)arg1 maxWidth:(double)arg2;
- (void)layoutMultiTextViewWithOrigin:(struct CGPoint)arg1 maxWitdh:(double)arg2;
- (void)layoutBodyTextLabelWithOrigin:(struct CGPoint)arg1 maxWidth:(double)arg2;
- (void)layoutContactInfoLabelWithOrigin:(struct CGPoint)arg1 maxWitdh:(double)arg2;
- (void)layoutRoleInfoView;
- (void)layoutAvatarImageView;
- (void)updateRoleInfoViewForMaxWidth:(double)arg1;
- (void)updateMultiTextView;
- (void)updateTimeLabel;
- (void)updateContactInfoLabel;
- (void)updateBodyTextLabel;
- (void)updateRefImageview;
- (void)updateRefTextLabel;
- (void)updateAvatarImageView;
- (void)multiTextViewOnClick:(id)arg1;
- (void)showProfileIfNeeded;
- (void)roleInfoViewOnClick;
- (void)avatarImageViewOnClick;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)cellData;
- (void)refreshWithData:(id)arg1;
- (void)refreshUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

