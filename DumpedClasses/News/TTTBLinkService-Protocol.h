//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSURL, UIViewController;

@protocol TTTBLinkService <NSObject>
- (_Bool)isAppInstalled;
- (_Bool)handleOpenURL:(NSURL *)arg1;
- (_Bool)jumpTBURI:(NSDictionary *)arg1 inViewController:(UIViewController *)arg2;
- (_Bool)jumpDetail:(NSDictionary *)arg1 inViewController:(UIViewController *)arg2;
- (_Bool)jumpShop:(NSDictionary *)arg1 inViewController:(UIViewController *)arg2;
@end

