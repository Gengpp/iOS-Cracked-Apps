//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTRWebViewApplication : NSObject
{
}

+ (void)registeJSBAlias:(id)arg1 for:(id)arg2;
+ (void)fireEvent:(id)arg1 data:(id)arg2 withWebView:(id)arg3;
+ (void)invokeJSBCallbackWithCommand:(id)arg1 msg:(unsigned long long)arg2 data:(id)arg3 webView:(id)arg4;
+ (_Bool)handleRequest:(id)arg1 withWebView:(id)arg2 viewController:(id)arg3;
+ (id)sharedInstance;

@end

