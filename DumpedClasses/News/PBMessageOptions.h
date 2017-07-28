//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBExtendableMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSArray, NSMutableArray, NSString;

@interface PBMessageOptions : PBExtendableMessage <GeneratedMessageProtocol>
{
    unsigned int hasMessageSetWireFormat_:1;
    unsigned int hasNoStandardDescriptorAccessor_:1;
    unsigned int hasDeprecated_:1;
    unsigned int messageSetWireFormat_:1;
    unsigned int noStandardDescriptorAccessor_:1;
    unsigned int deprecated_:1;
    NSMutableArray *uninterpretedOptionArray;
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
@property(retain) NSMutableArray *uninterpretedOptionArray; // @synthesize uninterpretedOptionArray;
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
- (id)uninterpretedOptionAtIndex:(unsigned long long)arg1;
@property(readonly) NSArray *uninterpretedOption; // @dynamic uninterpretedOption;
- (id)defaultInstance;
- (id)init;
@property _Bool deprecated;
- (void)setHasDeprecated:(_Bool)arg1;
- (_Bool)hasDeprecated;
@property _Bool noStandardDescriptorAccessor;
- (void)setHasNoStandardDescriptorAccessor:(_Bool)arg1;
- (_Bool)hasNoStandardDescriptorAccessor;
@property _Bool messageSetWireFormat;
- (void)setHasMessageSetWireFormat:(_Bool)arg1;
- (_Bool)hasMessageSetWireFormat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

