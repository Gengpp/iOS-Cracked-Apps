//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, SSHttpOperation;

@interface SSFetchSettingsManager : NSObject
{
    NSString *_from;
    NSDictionary *_settingsDict;
    SSHttpOperation *_operation;
}

+ (_Bool)hasFetchedDefaultInfo;
+ (void)saveFetchedDefaultInfo;
+ (id)shareInstance;
+ (void)startFetchDefaultInfoIfNeed;
@property(retain, nonatomic) SSHttpOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSDictionary *settingsDict; // @synthesize settingsDict=_settingsDict;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)refreshNightModelBySetting:(unsigned long long)arg1;
- (void)refreshApnNotifyBySetting:(unsigned long long)arg1;
- (void)dealDefaultSettingsResult:(id)arg1;
- (void)dealAppSettingResult:(id)arg1;
- (void)operation:(id)arg1 finishedResult:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)startFetchDefaultSettingsWithDefaultInfo:(_Bool)arg1;
- (id)init;
- (void)dealloc;

@end

