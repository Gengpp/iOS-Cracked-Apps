//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class NSString;

@interface LiveRoomURLExtraModel : MTLModel <MTLJSONSerializing>
{
    NSString *_ngbPushURL;
    NSString *_ngbPushUrlPostfix;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *ngbPushUrlPostfix; // @synthesize ngbPushUrlPostfix=_ngbPushUrlPostfix;
@property(readonly, nonatomic) NSString *ngbPushURL; // @synthesize ngbPushURL=_ngbPushURL;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

