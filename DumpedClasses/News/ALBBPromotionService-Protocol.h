//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBBTradeService.h"

@class NSString, TaeWebViewUISettings, UIViewController;

@protocol ALBBPromotionService <ALBBTradeService>
- (void)showETicketDetail:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 orderId:(NSString *)arg4 tradeProcessSuccessCallback:(void (^)(ALBBTradeResult *))arg5 tradeProcessFailedCallback:(void (^)(NSError *))arg6;
- (void)showPromotions:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 param:(NSString *)arg4 type:(NSString *)arg5 tradeProcessSuccessCallback:(void (^)(ALBBTradeResult *))arg6 tradeProcessFailedCallback:(void (^)(NSError *))arg7;
@end

