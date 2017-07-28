//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class LiveUserModel, MessageCommon, NSString;

@interface SocialMessage : MTLModel <MTLJSONSerializing>
{
    MessageCommon *_commonMode;
    long long _action;
    LiveUserModel *_user;
    NSString *_shareTarget;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *shareTarget; // @synthesize shareTarget=_shareTarget;
@property(retain, nonatomic) LiveUserModel *user; // @synthesize user=_user;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(retain, nonatomic) MessageCommon *commonMode; // @synthesize commonMode=_commonMode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

