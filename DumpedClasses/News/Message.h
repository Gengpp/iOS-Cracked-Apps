//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface Message : PBGeneratedMessage <GeneratedMessageProtocol>
{
    unsigned int hasClientId_:1;
    unsigned int hasDeviceId_:1;
    unsigned int hasMessageId_:1;
    unsigned int hasFromId_:1;
    unsigned int hasCreateTime_:1;
    unsigned int hasType_:1;
    unsigned int hasToId_:1;
    unsigned int hasContent_:1;
    long long clientId;
    long long deviceId;
    long long messageId;
    long long fromId;
    long long createTime;
    int type;
    NSString *toId;
    NSString *content;
}

+ (id)builderWithPrototype:(id)arg1;
+ (id)builder;
+ (id)parseFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromCodedInputStream:(id)arg1;
+ (id)parseFromInputStream:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromInputStream:(id)arg1;
+ (id)parseFromData:(id)arg1 extensionRegistry:(id)arg2;
+ (id)parseFromData:(id)arg1;
+ (id)defaultInstance;
+ (void)initialize;
@property long long createTime; // @synthesize createTime;
@property(retain) NSString *content; // @synthesize content;
@property int type; // @synthesize type;
@property(retain) NSString *toId; // @synthesize toId;
@property long long fromId; // @synthesize fromId;
@property long long messageId; // @synthesize messageId;
@property long long deviceId; // @synthesize deviceId;
@property long long clientId; // @synthesize clientId;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)storeInDictionary:(id)arg1;
- (void)writeDescriptionTo:(id)arg1 withIndent:(id)arg2;
- (id)toBuilder;
- (id)builder;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (_Bool)isInitialized;
- (id)defaultInstance;
- (id)init;
- (void)setHasCreateTime:(_Bool)arg1;
- (_Bool)hasCreateTime;
- (void)setHasContent:(_Bool)arg1;
- (_Bool)hasContent;
- (void)setHasType:(_Bool)arg1;
- (_Bool)hasType;
- (void)setHasToId:(_Bool)arg1;
- (_Bool)hasToId;
- (void)setHasFromId:(_Bool)arg1;
- (_Bool)hasFromId;
- (void)setHasMessageId:(_Bool)arg1;
- (_Bool)hasMessageId;
- (void)setHasDeviceId:(_Bool)arg1;
- (_Bool)hasDeviceId;
- (void)setHasClientId:(_Bool)arg1;
- (_Bool)hasClientId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

