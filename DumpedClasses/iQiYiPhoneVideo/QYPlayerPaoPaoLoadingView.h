//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface QYPlayerPaoPaoLoadingView : UIView
{
    UIView *backView;
    UIActivityIndicatorView *activityIndicator;
    UIView *actView;
    UILabel *titleResult;
    struct CGRect oriFrame;
    struct CGRect strFrame;
}

- (void).cxx_destruct;
- (void)hideLoadingWithStr:(id)arg1;
- (void)hideLoadingView;
- (void)setProcess:(double)arg1;
- (void)showLoadingViewToView:(id)arg1;
- (void)showLoadingView;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

