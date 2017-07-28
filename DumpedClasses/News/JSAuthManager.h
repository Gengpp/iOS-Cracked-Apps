//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SSHttpOperation;

@interface JSAuthManager : NSObject
{
    SSHttpOperation *_op;
    NSMutableDictionary *_configData;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *configData; // @synthesize configData=_configData;
@property(retain, nonatomic) SSHttpOperation *op; // @synthesize op=_op;
- (void).cxx_destruct;
- (void)startGetAuthConfigWithPartnerClientKey:(id)arg1 partnerDomain:(id)arg2 secretKey:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (id)init;
- (void)dealloc;

@end

