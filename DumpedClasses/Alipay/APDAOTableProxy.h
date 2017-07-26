//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APDAOAspectProtocol.h"

@class APDAOProxy, NSString;

@interface APDAOTableProxy : NSObject <APDAOAspectProtocol>
{
    APDAOProxy *_proxy;
    NSString *_tableName;
    CDUnknownBlockType _onLockAcquiredHandler;
}

- (void).cxx_destruct;
- (id)onLockAcquired:(CDUnknownBlockType)arg1;
- (id)initWithProxy:(id)arg1 tableName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
