//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, UIImageView;

@interface TTPersonalHomeFollowView : SSThemedView
{
    _Bool _isAnimation;
    _Bool _isMutualFollow;
    int _currentState;
    int _lastState;
    id <TTPersonalHomeFollowViewDelegate> _delegate;
    double _minWidth;
    double _maxWidth;
    SSThemedButton *_followBtn;
    SSThemedButton *_hasFollowBtn;
    SSThemedButton *_operationBtn;
    UIImageView *_activityIndicatorView;
}

@property(nonatomic) _Bool isMutualFollow; // @synthesize isMutualFollow=_isMutualFollow;
@property(nonatomic) __weak UIImageView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool isAnimation; // @synthesize isAnimation=_isAnimation;
@property(nonatomic) int lastState; // @synthesize lastState=_lastState;
@property(nonatomic) __weak SSThemedButton *operationBtn; // @synthesize operationBtn=_operationBtn;
@property(nonatomic) __weak SSThemedButton *hasFollowBtn; // @synthesize hasFollowBtn=_hasFollowBtn;
@property(nonatomic) __weak SSThemedButton *followBtn; // @synthesize followBtn=_followBtn;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(nonatomic) __weak id <TTPersonalHomeFollowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (_Bool)isLoading;
- (void)operationBtnClick:(id)arg1;
- (void)hasFollowBtnClick;
- (void)followBtnClick;
- (void)layoutSubviews;
- (void)setupActivityIndicatorAnimation;
- (void)startAnimationWithState:(int)arg1 isMutualFollow:(_Bool)arg2;
- (void)setupSubview;
- (void)baseSetup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

