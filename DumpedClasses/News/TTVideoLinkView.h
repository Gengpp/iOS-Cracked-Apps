//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSObject<TTVideoLinkViewDelegate>, UIViewController;

@interface TTVideoLinkView : SSThemedView
{
    NSObject<TTVideoLinkViewDelegate> *_delegate;
    UIViewController *_webViewController;
}

@property(retain, nonatomic) UIViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) __weak NSObject<TTVideoLinkViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1 parentViewController:(id)arg2 parameters:(id)arg3;

@end

