//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTMonitorPersistenceStore : NSObject
{
}

+ (id)unarchiveAggregateItemForFilePath:(id)arg1;
+ (id)unarchiveTimer;
+ (id)unarchiveCounter;
+ (id)unarchiveStorer;
+ (id)unarchiveTrackers;
+ (id)unarchiveFromFile:(id)arg1;
+ (void)archiveAggregateItem:(id)arg1 filePath:(id)arg2;
+ (void)archiveAggregateStorer:(id)arg1;
+ (void)archiveAggregateTimer:(id)arg1;
+ (void)archiveAggregateCounter:(id)arg1;
+ (void)archiveTrackItems:(id)arg1;
+ (void)rmFileForPath:(id)arg1;
+ (id)timerFilePath;
+ (id)counterFilePath;
+ (id)storerFilePath;
+ (id)trackersFilePath;
+ (id)filePathForData:(id)arg1;

@end

