//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class LiveNotificationContentModel, NSString;

@interface LiveUserNotificationModel : MTLModel <MTLJSONSerializing>
{
    LiveNotificationContentModel *_content;
    long long _creatTime;
    long long _notifyId;
    long long _type;
}

+ (id)typeJSONTransformer;
+ (id)contentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long notifyId; // @synthesize notifyId=_notifyId;
@property(readonly, nonatomic) long long creatTime; // @synthesize creatTime=_creatTime;
@property(retain, nonatomic) LiveNotificationContentModel *content; // @synthesize content=_content;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

