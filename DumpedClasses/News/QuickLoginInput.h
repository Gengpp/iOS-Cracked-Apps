//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedLabel, SSThemedTextField;

@interface QuickLoginInput : SSThemedView
{
    SSThemedTextField *_field;
    SSThemedLabel *_error;
    SSThemedView *_resendView;
    SSThemedView *_resendSeparatorView;
    SSThemedButton *_resendButton;
}

@property(retain, nonatomic) SSThemedButton *resendButton; // @synthesize resendButton=_resendButton;
@property(retain, nonatomic) SSThemedView *resendSeparatorView; // @synthesize resendSeparatorView=_resendSeparatorView;
@property(retain, nonatomic) SSThemedView *resendView; // @synthesize resendView=_resendView;
@property(retain, nonatomic) SSThemedLabel *error; // @synthesize error=_error;
@property(retain, nonatomic) SSThemedTextField *field; // @synthesize field=_field;
- (void).cxx_destruct;
- (void)showError;
- (void)layoutSubviews;
- (void)layoutResendView;
- (void)updateRightText:(id)arg1;
- (void)doLayOut;
- (void)recover;
- (id)initWithFrame:(struct CGRect)arg1 rightText:(id)arg2;

@end

