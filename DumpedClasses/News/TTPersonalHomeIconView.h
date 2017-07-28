//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSString, SSThemedImageView, TTVerifyIconImageView;

@interface TTPersonalHomeIconView : SSThemedView
{
    TTVerifyIconImageView *_avatarVerifyView;
    SSThemedImageView *_avatarImageView;
    SSThemedView *_coverView;
    NSString *_placeHolder;
}

@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(retain, nonatomic) SSThemedView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) SSThemedImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TTVerifyIconImageView *avatarVerifyView; // @synthesize avatarVerifyView=_avatarVerifyView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)themedChange;
- (void)hideVerifyView;
- (void)showVerifyViewWithVerifyInfo:(id)arg1 size:(struct CGSize)arg2;
- (void)setImageWithURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

