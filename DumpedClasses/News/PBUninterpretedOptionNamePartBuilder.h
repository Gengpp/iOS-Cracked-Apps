//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class PBUninterpretedOptionNamePart;

@interface PBUninterpretedOptionNamePartBuilder : PBGeneratedMessageBuilder
{
    PBUninterpretedOptionNamePart *resultNamePart;
}

@property(retain) PBUninterpretedOptionNamePart *resultNamePart; // @synthesize resultNamePart;
- (void).cxx_destruct;
- (id)clearIsExtension;
- (id)setIsExtension:(_Bool)arg1;
- (_Bool)isExtension;
- (_Bool)hasIsExtension;
- (id)clearNamePart;
- (id)setNamePart:(id)arg1;
- (id)namePart;
- (_Bool)hasNamePart;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end

