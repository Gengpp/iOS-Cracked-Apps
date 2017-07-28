//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SSThemedButton, UIActivityIndicatorView;

@interface TTLiveMessageSendStateView : UIView
{
    UIActivityIndicatorView *_indicatorView;
    _Bool _isIncomingMsg;
    _Bool _hiddenActivityIndicatorView;
    SSThemedButton *_resendButton;
    long long _messageSendState;
}

@property(nonatomic) _Bool hiddenActivityIndicatorView; // @synthesize hiddenActivityIndicatorView=_hiddenActivityIndicatorView;
@property(nonatomic) _Bool isIncomingMsg; // @synthesize isIncomingMsg=_isIncomingMsg;
@property(nonatomic) long long messageSendState; // @synthesize messageSendState=_messageSendState;
@property(retain, nonatomic) SSThemedButton *resendButton; // @synthesize resendButton=_resendButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

