//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@interface WXOMTAEnv : NSObject
{
    _Bool _jailbroken;
    NSString *_platform;
    NSString *_os_version;
    NSString *_language;
    NSString *_resolution;
    NSString *_deviceid;
    NSString *_mccmnc;
    NSString *_timezone;
    NSString *_app_version;
    NSString *_sdk_version;
    NSString *_devicename;
    NSString *_modulename;
    NSUUID *_ifa;
    NSUUID *_ifv;
    NSString *_wf;
}

@property(retain, nonatomic) NSString *wf; // @synthesize wf=_wf;
@property _Bool jailbroken; // @synthesize jailbroken=_jailbroken;
@property(retain, nonatomic) NSUUID *ifv; // @synthesize ifv=_ifv;
@property(retain, nonatomic) NSUUID *ifa; // @synthesize ifa=_ifa;
@property(retain, nonatomic) NSString *modulename; // @synthesize modulename=_modulename;
@property(retain, nonatomic) NSString *devicename; // @synthesize devicename=_devicename;
@property(retain, nonatomic) NSString *sdk_version; // @synthesize sdk_version=_sdk_version;
@property(retain, nonatomic) NSString *app_version; // @synthesize app_version=_app_version;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *mccmnc; // @synthesize mccmnc=_mccmnc;
@property(retain, nonatomic) NSString *deviceid; // @synthesize deviceid=_deviceid;
@property(retain, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *os_version; // @synthesize os_version=_os_version;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void)dealloc;

@end

