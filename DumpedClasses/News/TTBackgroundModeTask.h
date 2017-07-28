//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStartupTask.h"

#import "UIApplicationDelegate.h"

@class NSString, UIWindow;

@interface TTBackgroundModeTask : TTStartupTask <UIApplicationDelegate>
{
    unsigned long long _reportTryCount;
}

+ (void)cleanNSUrlCacheIfNeeded;
@property(nonatomic) unsigned long long reportTryCount; // @synthesize reportTryCount=_reportTryCount;
- (void)reportAppEnterBackground;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)isResistent;
- (id)taskIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

