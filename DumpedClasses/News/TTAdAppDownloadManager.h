//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSString, TTAdSKVC;

@interface TTAdAppDownloadManager : NSObject <SKStoreProductViewControllerDelegate>
{
    _Bool _isPreloading;
    _Bool _skVCAppear;
    NSString *_appleId;
    NSString *_ad_id;
    NSString *_log_extra;
    TTAdSKVC *_skVc;
}

+ (_Bool)downloadApp:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool skVCAppear; // @synthesize skVCAppear=_skVCAppear;
@property(nonatomic) _Bool isPreloading; // @synthesize isPreloading=_isPreloading;
@property(retain, nonatomic) TTAdSKVC *skVc; // @synthesize skVc=_skVc;
@property(copy, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(copy, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
@property(retain, nonatomic) NSString *appleId; // @synthesize appleId=_appleId;
- (void).cxx_destruct;
- (void)trackPreloadAdWithTag:(id)arg1 label:(id)arg2 appleId:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)pushSkController:(id)arg1 controller:(id)arg2;
- (void)failAppleId:(id)arg1;
- (void)openAppStoreAppleID:(id)arg1 controller:(id)arg2;
- (void)preloadSkViewControllerAppleId:(id)arg1;
- (void)preloadAppStoreOrderData:(id)arg1;
- (void)preloadAppStoreAppleId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

