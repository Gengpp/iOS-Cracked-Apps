//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet;

@interface CTH5InstallManager : NSObject
{
    NSMutableSet *_optedProductNameSet;
    NSMutableSet *_requestedPackageNameSet;
    NSArray *_h5CommonPackageName;
    NSArray *_rnCommonPackageName;
}

+ (_Bool)isNeedReloadPageForPackageInstall:(id)arg1;
+ (void)upgradeOnlineNewestPackageForProduct:(id)arg1 packageType:(int)arg2 resultBlock:(CDUnknownBlockType)arg3;
+ (void)callbackResultForErrorCode:(int)arg1 errorDesc:(id)arg2 product:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (void)upgradeOnlineNewestPackageForURL:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (_Bool)installOfflinePackage:(int)arg1 productName:(id)arg2;
+ (_Bool)installOfflinePackageForURL:(id)arg1;
+ (_Bool)isOnlineBundleForValidate:(id)arg1;
+ (void)upgradeOfflinePackageWorkspace;
+ (void)installAllMergedOfflinePackage;
+ (_Bool)installDownloadPackageForProductV2:(id)arg1;
+ (_Bool)installOfflinePackageForProductV2:(id)arg1;
+ (_Bool)updateH5Module:(id)arg1;
+ (_Bool)installPackagesForURLIfNeed:(id)arg1;
+ (_Bool)checkPackageUnzipForPackageName:(id)arg1;
+ (_Bool)checkPackageUnzipForRNPackage:(id)arg1;
+ (void)updateDownloadPackageStatus:(id)arg1 savedPath:(id)arg2;
+ (int)installDownloadPackage:(id)arg1 responseData:(id)arg2;
+ (int)verifyPackage:(id)arg1 filePath:(id)arg2;
+ (int)installHybridOrRN:(id)arg1 filePath:(id)arg2;
+ (int)installHotfix:(id)arg1 filePath:(id)arg2;
+ (id)sharedCTH5InstallManager;
@property(retain, nonatomic) NSArray *rnCommonPackageName; // @synthesize rnCommonPackageName=_rnCommonPackageName;
@property(retain, nonatomic) NSArray *h5CommonPackageName; // @synthesize h5CommonPackageName=_h5CommonPackageName;
@property(retain) NSMutableSet *requestedPackageNameSet; // @synthesize requestedPackageNameSet=_requestedPackageNameSet;
@property(retain) NSMutableSet *optedProductNameSet; // @synthesize optedProductNameSet=_optedProductNameSet;
- (void).cxx_destruct;
- (_Bool)containsOptedProduct:(id)arg1;
- (void)removeOptedProduct:(id)arg1;
- (void)addInstalledProduct:(id)arg1;
- (id)init;

@end
