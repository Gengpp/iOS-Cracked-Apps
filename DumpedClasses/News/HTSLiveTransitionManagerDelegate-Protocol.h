//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiveUserModel, NSDictionary, UINavigationController, UIViewController;

@protocol HTSLiveTransitionManagerDelegate <NSObject>
- (void)enterTradingList:(UIViewController *)arg1 userInfo:(NSDictionary *)arg2;
- (void)enterUserProfile:(LiveUserModel *)arg1 controller:(UIViewController *)arg2 userInfo:(NSDictionary *)arg3;
- (void)enterTicketRankList:(LiveUserModel *)arg1 controller:(UINavigationController *)arg2 userInfo:(NSDictionary *)arg3;
@end

