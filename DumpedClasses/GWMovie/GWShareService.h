//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GWShareService : NSObject
{
}

+ (void)showShareResultDefaultView:(id)arg1;
+ (void)handleWeixinNotification:(int)arg1;
+ (void)dismissSemiModalView:(id)arg1;
+ (id)platformNameWithShareContentType:(unsigned long long)arg1;
+ (void)showShareActionView:(id)arg1 shareContent:(id)arg2 Member:(id)arg3 IsAddBlack:(_Bool)arg4;
+ (void)presentSnsController:(id)arg1 shareToSnsNames:(id)arg2 BlackListMemeberID:(id)arg3 IsAddBlack:(_Bool)arg4;
+ (void)shareItem:(id)arg1;
+ (void)shareItemsWithView:(id)arg1 MemberID:(id)arg2 IsAddBlack:(_Bool)arg3;
+ (void)shareItemsWithView:(id)arg1;
+ (void)shareWithItem:(id)arg1;
+ (_Bool)isSupportWeixin;
+ (void)initShareSdkInto;
+ (id)shareService;
+ (void)getPlatformCredential:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)hasAuthorizedWithType:(unsigned long long)arg1;
+ (void)authorizedWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)cancelAuthWithType:(unsigned long long)arg1;
+ (void)cancelAllAuthType;

@end

