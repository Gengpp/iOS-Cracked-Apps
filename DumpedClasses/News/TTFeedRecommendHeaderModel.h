//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TTFeedRecommendHeaderModel : JSONModel
{
    NSString<Optional> *_layerText;
    NSNumber<Optional> *_isShowLayer;
    NSNumber<Optional> *_isFollowing;
    NSString<Optional> *_userAvatarUrl;
    NSNumber<Optional> *_userIsVerify;
    NSString<Optional> *_userSchema;
    NSNumber<Optional> *_userId;
    NSString<Optional> *_userName;
    NSString<Optional> *_userIntro;
    NSString<Optional> *_userAuthInfo;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString<Optional> *userIntro; // @synthesize userIntro=_userIntro;
@property(copy, nonatomic) NSString<Optional> *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSNumber<Optional> *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString<Optional> *userSchema; // @synthesize userSchema=_userSchema;
@property(copy, nonatomic) NSNumber<Optional> *userIsVerify; // @synthesize userIsVerify=_userIsVerify;
@property(copy, nonatomic) NSString<Optional> *userAvatarUrl; // @synthesize userAvatarUrl=_userAvatarUrl;
@property(copy, nonatomic) NSNumber<Optional> *isFollowing; // @synthesize isFollowing=_isFollowing;
@property(copy, nonatomic) NSNumber<Optional> *isShowLayer; // @synthesize isShowLayer=_isShowLayer;
@property(copy, nonatomic) NSString<Optional> *layerText; // @synthesize layerText=_layerText;
- (void).cxx_destruct;

@end

