//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISecurityGuardOpenUMID.h"

@class NSString;

@interface SecurityGuardOpenUMID : NSObject <ISecurityGuardOpenUMID>
{
}

- (Class)getMetaClass;
- (id)getUMIDVersion;
- (void)resetClientData:(int)arg1;
- (void)setOnlineHost:(id)arg1;
- (id)getSecurityTokenEx;
- (id)getSecurityToken;
- (_Bool)initUMID:(id)arg1 environment:(int)arg2 authCode:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)registerInitListener:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

