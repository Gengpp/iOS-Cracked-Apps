//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaeH5WebViewController.h"

@interface ALBBAuthWebViewController : TaeH5WebViewController
{
    _Bool _isLoginCancelled;
    _Bool _isLoginSuccess;
    _Bool _isBackButtonHidden;
}

@property(nonatomic) _Bool isBackButtonHidden; // @synthesize isBackButtonHidden=_isBackButtonHidden;
- (void)beforeWebViewStartLoad:(id)arg1 url:(id)arg2;
- (void)reloadLoginPage;
- (void)handlerAuthSuccessReturnResult:(id)arg1;
- (void)onBack;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

