//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SinaWeiboAuthorizeViewDelegate.h"
#import "SinaWeiboRequestDelegate.h"

@class NSDate, NSMutableSet, NSString, SinaWeiboRequest;

@interface SinaWeibo : NSObject <SinaWeiboAuthorizeViewDelegate, SinaWeiboRequestDelegate>
{
    NSString *userID;
    NSString *accessToken;
    NSDate *expirationDate;
    id <SinaWeiboDelegate> delegate;
    NSString *appKey;
    NSString *appSecret;
    NSString *appRedirectURI;
    NSString *ssoCallbackScheme;
    SinaWeiboRequest *request;
    NSMutableSet *requests;
    _Bool ssoLoggingIn;
    NSString *refreshToken;
    double expirationTimestamp;
}

+ (void)deleteWeiboCookies;
@property(nonatomic) double expirationTimestamp; // @synthesize expirationTimestamp;
@property(copy, nonatomic) NSString *appRedirectURI; // @synthesize appRedirectURI;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey;
@property(nonatomic) __weak id <SinaWeiboDelegate> delegate; // @synthesize delegate;
@property(copy, nonatomic) NSString *ssoCallbackScheme; // @synthesize ssoCallbackScheme;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken;
@property(copy, nonatomic) NSString *userID; // @synthesize userID;
- (_Bool)handleOpenURL:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)request:(id)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)authorizeViewDidCancel:(id)arg1;
- (void)authorizeView:(id)arg1 didFailWithErrorInfo:(id)arg2;
- (void)authorizeView:(id)arg1 didRecieveAuthorizationCode:(id)arg2;
- (id)requestWithURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 delegate:(id)arg4;
- (void)logOut;
- (void)logIn;
- (id)openURLString;
- (_Bool)isAuthValid;
- (_Bool)isAuthorizeExpired;
- (_Bool)isLoggedIn;
- (void)logInDidFailWithErrorInfo:(id)arg1;
- (void)logInDidFinishWithAuthInfo:(id)arg1;
- (void)logInDidCancel;
- (void)notifyTokenExpired:(id)arg1;
- (void)requestDidFailWithInvalidToken:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)requestAccessTokenWithAuthorizationCode:(id)arg1;
- (void)removeAuthData;
- (void)dealloc;
- (id)initWithAppKey:(id)arg1 appSecret:(id)arg2 appRedirectURI:(id)arg3 ssoCallbackScheme:(id)arg4 andDelegate:(id)arg5;
- (id)initWithAppKey:(id)arg1 appSecret:(id)arg2 appRedirectURI:(id)arg3 andDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

