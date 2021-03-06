//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TMapBeaconDataPersistQueue : NSObject
{
    NSMutableArray *headList;
    NSMutableArray *tailList;
    int maxSize;
    int currSize;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fetchAllObjectsAndClean;
- (void)addToTailList:(id)arg1;
- (void)addToHeadList:(id)arg1;
- (void)addObject:(id)arg1;
- (_Bool)isFUll;
- (int)getCurrSize;
- (int)getMaxSize;
- (void)setMaxSize:(int)arg1;
- (id)init;

@end

