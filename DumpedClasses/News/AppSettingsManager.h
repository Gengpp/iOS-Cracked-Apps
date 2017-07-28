//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppSettingsManager : NSObject
{
}

+ (_Bool)videoSlideSwitchingEnabled;
+ (id)uploadVideoFrameInterval;
+ (_Bool)uploadVideoFrameEnabled;
+ (_Bool)monitorEnabled;
+ (id)encodeMaxBitrate;
+ (id)encodeMinBitrate;
+ (id)encodeInitBitrate;
+ (id)noticeInterval;
+ (long long)pushSDK;
+ (id)ngbTimeout;
+ (id)maxDrawMoney;
+ (_Bool)enableBuyTip;
+ (_Bool)enablePerformanceLog;
+ (_Bool)enableUpstreamLog;
+ (_Bool)enablePlayerLog;
+ (_Bool)useHttpsAndWss;
+ (id)ttMinCaptureFps;
+ (id)ttCaptureFps;
+ (id)captureFps;
+ (_Bool)enableWithShare;
+ (_Bool)enableWithWallet;
+ (_Bool)enableWithdraw;
+ (_Bool)pushOn;
+ (void)setPushOn:(_Bool)arg1;
+ (_Bool)allowPlayNotInWifi;
+ (void)setAllowPlayNotInWifi:(_Bool)arg1;
+ (id)getAudiencePingInterval;
+ (id)getRoomPingInterval;
+ (id)getDiggDelay;
+ (void)setAppSetting:(id)arg1;
+ (id)modelForAppSetting;

@end

