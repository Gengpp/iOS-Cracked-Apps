//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QYPPPlayerProgessManager : NSObject
{
    NSMutableDictionary *progessDic;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (void)storeProgess4series:(id)arg1 model:(id)arg2;
- (void)resetProgess:(id)arg1;
- (double)getProgess:(id)arg1;
- (void)setProgess:(double)arg1 feedID:(id)arg2;
- (void)setProgess:(double)arg1 playerDic:(id)arg2;
- (id)getKey:(id)arg1;

@end

