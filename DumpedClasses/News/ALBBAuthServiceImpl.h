//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ALBBLoginService.h"

@class NSArray, NSNumber, NSString;

@interface ALBBAuthServiceImpl : NSObject <ALBBLoginService>
{
    NSNumber *_lastOpenTaobaoTimeInSeconds;
    _Bool _isWillJump2TaobaoClient;
    CDUnknownBlockType _onLoginSuccess;
    CDUnknownBlockType _onLoginFailure;
    CDUnknownBlockType _onQRLoginSuccess;
    CDUnknownBlockType _onQRLoginFailure;
    CDUnknownBlockType _sessionStateChangedHandler;
    NSString *_tempLoginToken;
    NSArray *_loginCookieList;
    NSString *_safeCookieVST;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isWillJump2TaobaoClient; // @synthesize isWillJump2TaobaoClient=_isWillJump2TaobaoClient;
@property(copy) NSString *safeCookieVST; // @synthesize safeCookieVST=_safeCookieVST;
@property(copy, nonatomic) NSArray *loginCookieList; // @synthesize loginCookieList=_loginCookieList;
@property(copy, nonatomic) NSString *tempLoginToken; // @synthesize tempLoginToken=_tempLoginToken;
@property(copy, nonatomic) CDUnknownBlockType sessionStateChangedHandler; // @synthesize sessionStateChangedHandler=_sessionStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType onQRLoginFailure; // @synthesize onQRLoginFailure=_onQRLoginFailure;
@property(copy, nonatomic) CDUnknownBlockType onQRLoginSuccess; // @synthesize onQRLoginSuccess=_onQRLoginSuccess;
@property(copy, nonatomic) CDUnknownBlockType onLoginFailure; // @synthesize onLoginFailure=_onLoginFailure;
@property(copy, nonatomic) CDUnknownBlockType onLoginSuccess; // @synthesize onLoginSuccess=_onLoginSuccess;
- (void).cxx_destruct;
- (void)logout;
- (void)showQRLogin:(id)arg1 params:(id)arg2 successCallback:(CDUnknownBlockType)arg3 failedCallback:(CDUnknownBlockType)arg4;
- (void)showLogin:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failedCallback:(CDUnknownBlockType)arg3 notUseTaobaoAppLogin:(_Bool)arg4 isBackButtonHidden:(_Bool)arg5;
- (void)showLogin:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failedCallback:(CDUnknownBlockType)arg3 notUseTaobaoAppLogin:(_Bool)arg4;
- (void)showLogin:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failedCallback:(CDUnknownBlockType)arg3;
- (void)showLoginOnRootView:(id)arg1 successCallback:(CDUnknownBlockType)arg2 failedCallback:(CDUnknownBlockType)arg3 notUseTaobaoAppLogin:(_Bool)arg4 isBackButtonHidden:(_Bool)arg5;
- (_Bool)loginWithTaobaoIfPossible;
- (id)jumpTaobaoUrl;
- (void)resetLoginContext;
- (void)handleSuccessLoginReturnInfo:(id)arg1 loginType:(long long)arg2;
- (id)init;
- (id)sharedInstance;

@end

