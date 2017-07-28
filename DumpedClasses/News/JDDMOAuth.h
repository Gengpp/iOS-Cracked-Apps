//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface JDDMOAuth : NSObject
{
    NSString *_accessToken;
    NSString *_refreshToken;
    NSDate *_expirationDate;
    id <JDDMLoginDelegate> _loginDelegate;
    NSString *_localShemes;
    NSString *_redirectUri;
    NSString *_appkey;
    NSString *_appsecret;
    NSDictionary *_passData;
    NSString *_openId;
    CDUnknownBlockType _jdInnerLogin;
    long long _jdInnerLoginFailureCount;
}

+ (id)sharedOAuthor;
+ (_Bool)iphoneAppInstalled;
@property(nonatomic) long long jdInnerLoginFailureCount; // @synthesize jdInnerLoginFailureCount=_jdInnerLoginFailureCount;
@property(copy, nonatomic) CDUnknownBlockType jdInnerLogin; // @synthesize jdInnerLogin=_jdInnerLogin;
@property(copy, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSDictionary *passData; // @synthesize passData=_passData;
@property(retain, nonatomic) NSString *appsecret; // @synthesize appsecret=_appsecret;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *redirectUri; // @synthesize redirectUri=_redirectUri;
@property(copy, nonatomic) NSString *localShemes; // @synthesize localShemes=_localShemes;
@property(nonatomic) id <JDDMLoginDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (void)getTokenByCode:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)reauthorize;
- (_Bool)authorize;
- (id)initWithAppID:(id)arg1 appKey:(id)arg2 secretKey:(id)arg3 redirectUri:(id)arg4 delegate:(id)arg5;
- (_Bool)isSDKAuthedByAppID:(id)arg1;
- (id)init;
- (_Bool)checkRegisteredScheme;

@end

