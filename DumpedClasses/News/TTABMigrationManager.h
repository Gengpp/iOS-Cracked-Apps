//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTABMigrationManager : NSObject
{
}

+ (void)_setHasMigrationedForVersion:(id)arg1;
+ (_Bool)_currentVersionNeedMigration:(id)arg1;
+ (id)_currentVersionHasMigrationUserDefaultskey:(id)arg1;
- (void)migration1;
- (void)migrationIfNeed;

@end

