//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, TTWeChatShare;

@protocol TTWeChatShareDelegate <NSObject>

@optional
- (void)weChatShare:(TTWeChatShare *)arg1 sharedWithError:(NSError *)arg2 customCallbackUserInfo:(NSDictionary *)arg3;
@end

