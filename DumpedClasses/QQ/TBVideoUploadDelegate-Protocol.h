//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

@protocol TBVideoUploadDelegate <NSObject>

@optional
- (void)uploadVideoFail:(NSString *)arg1 withError:(NSError *)arg2 withUserData:(id)arg3;
- (void)uploadVideoProgress:(NSString *)arg1 withProgress:(double)arg2 withUserData:(id)arg3;
- (void)uploadVideoSuccess:(NSString *)arg1 withResult:(NSDictionary *)arg2 withUserData:(id)arg3;
@end

