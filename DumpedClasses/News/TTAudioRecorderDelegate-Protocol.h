//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL;

@protocol TTAudioRecorderDelegate <NSObject>

@optional
- (void)ttAudioRecorderFailBackError:(NSError *)arg1;
- (void)ttAudioRecorderFinishedWithURL:(NSURL *)arg1 duration:(double)arg2;
- (void)ttAudioRecorderLessThanOneSecond;
@end

