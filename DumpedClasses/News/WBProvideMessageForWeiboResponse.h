//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseResponse.h"

@class WBMessageObject;

@interface WBProvideMessageForWeiboResponse : WBBaseResponse
{
    WBMessageObject *message;
}

+ (id)responseWithMessage:(id)arg1;
@property(retain, nonatomic) WBMessageObject *message; // @synthesize message;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;

@end

