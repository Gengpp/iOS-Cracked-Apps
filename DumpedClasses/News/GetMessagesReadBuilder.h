//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessageBuilder.h"

@class GetMessagesRead;

@interface GetMessagesReadBuilder : PBGeneratedMessageBuilder
{
    GetMessagesRead *resultGetMessagesRead;
}

@property(retain) GetMessagesRead *resultGetMessagesRead; // @synthesize resultGetMessagesRead;
- (void).cxx_destruct;
- (id)clearSessionId;
- (id)setSessionIdArray:(id)arg1;
- (id)addSessionId:(id)arg1;
- (id)sessionIdAtIndex:(unsigned long long)arg1;
- (id)sessionId;
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

