//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSFetchSettingsManager.h"

@interface ArticleFetchSettingsManager : SSFetchSettingsManager
{
}

+ (void)setMineTabSellIntroduce:(id)arg1;
+ (id)mineTabSellIntroduce;
+ (_Bool)isShowMallCellEntry;
+ (void)setShowMallCellEntry:(_Bool)arg1;
- (void)fetchSettingsIfNeeded;
- (void)applicationWillEnterForeground;
- (void)dealAppSettingResult:(id)arg1;
- (void)refreshListMode:(unsigned long long)arg1;
- (void)refreshImageMode:(unsigned long long)arg1;
- (void)refreshFontsize:(unsigned long long)arg1;
- (void)dealDefaultSettingsResult:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)empty_dealAppSettingResult:(id)arg1;

@end

