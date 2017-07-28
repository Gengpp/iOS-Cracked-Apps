//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ExploreLogicSetting : NSObject
{
}

+ (_Bool)isNeedCleanOldCache;
+ (void)setIsUpgradeUser:(_Bool)arg1;
+ (_Bool)isUpgradeUser;
+ (void)tryClearCoreDataCache;
+ (void)clearImageCache;
+ (void)clearHttpCache;
+ (void)clearDBCache;
+ (void)clearCoreDataCache;
+ (float)cacheSizeWithTempVideoAudioFile;
+ (void)clearTempVideoAudioFileCache;
+ (void)clearCache;
+ (void)clearImage:(_Bool)arg1 httpCache:(_Bool)arg2 coreDataCache:(_Bool)arg3;
+ (float)cacheSize;
+ (float)cacheSizeWithImage:(_Bool)arg1 http:(_Bool)arg2 coreData:(_Bool)arg3 wendaDraft:(_Bool)arg4;
+ (float)cacheSizeWithImage:(_Bool)arg1 http:(_Bool)arg2 coreData:(_Bool)arg3;
+ (float)huoshanVideoCacheSize;
+ (float)urlCacheSize;
+ (void)clearDBNewsLocalDataSave:(_Bool)arg1;
+ (void)clearPushHistoryCoreData;
+ (void)clearReadHistoryCoreData;
+ (void)clearFavoriteCoreData;
+ (void)removeOrderedDatas:(id)arg1 save:(_Bool)arg2;

@end

