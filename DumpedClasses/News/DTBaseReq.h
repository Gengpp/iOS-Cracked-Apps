//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface DTBaseReq : NSObject <NSCoding>
{
    long long _reqType;
    NSString *_appId;
    NSString *_appBundleIdentifier;
    NSString *_openSDKVersion;
}

+ (id)dt_respPasteBoardType;
+ (id)dt_reqPasteBoardType;
@property(readonly, copy, nonatomic) NSString *openSDKVersion; // @synthesize openSDKVersion=_openSDKVersion;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) long long reqType; // @synthesize reqType=_reqType;
- (void).cxx_destruct;
- (_Bool)checkReq;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)dt_reqURL;
- (id)dt_servicePath;
- (id)dt_responseURL;

@end

