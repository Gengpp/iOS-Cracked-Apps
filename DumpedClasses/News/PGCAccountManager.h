//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PGCAccountManager : NSObject
{
}

+ (id)loginPGCAccount;
+ (void)savecurrentPGCAccount:(id)arg1;
+ (id)shareManager;
- (void)removePGCAccount;
- (void)saveCurrentPGCAccount:(id)arg1;
- (id)currentLoginPGCAccount;
- (_Bool)isMyPGC:(id)arg1;
- (_Bool)hasPGCAccount;
- (void)userLogout:(id)arg1;
- (void)userLogin:(id)arg1;
- (id)init;
- (void)dealloc;

@end

