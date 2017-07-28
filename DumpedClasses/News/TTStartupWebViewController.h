//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, NSTimer, NSURLRequest, UIBarButtonItem, UIProgressView, UIWebView;

@interface TTStartupWebViewController : UIViewController <UIWebViewDelegate>
{
    _Bool _theBool;
    UIWebView *_webView;
    NSString *_htmlUrl;
    NSURLRequest *_request;
    UIBarButtonItem *_backItem;
    UIProgressView *_progressView;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) _Bool theBool; // @synthesize theBool=_theBool;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *htmlUrl; // @synthesize htmlUrl=_htmlUrl;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)timerCallback;
- (void)webViewDidStartLoad:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)addProgressBar;
- (void)backNative;
- (void)addLeftButton;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadHTML:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

