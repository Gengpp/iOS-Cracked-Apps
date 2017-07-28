//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, UIWebView;

@interface ALBBHybridService : NSObject
{
    _Bool _hasPendingOperation;
    UIViewController *_vc;
    UIWebView *_webView;
}

@property(readonly) _Bool hasPendingOperation; // @synthesize hasPendingOperation=_hasPendingOperation;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)pDestory;
- (void)pInitialize;
- (id)createJavaScript:(id)arg1 requestId:(id)arg2 data:(id)arg3;
- (void)evaluatingJavaScript:(id)arg1;
- (id)initWithVC:(id)arg1 webView:(id)arg2;

@end

