//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol ADJLogger
- (void)assert:(NSString *)arg1;
- (void)error:(NSString *)arg1;
- (void)warn:(NSString *)arg1;
- (void)info:(NSString *)arg1;
- (void)debug:(NSString *)arg1;
- (void)verbose:(NSString *)arg1;
- (void)lockLogLevel;
- (void)setLogLevel:(int)arg1;
@end

