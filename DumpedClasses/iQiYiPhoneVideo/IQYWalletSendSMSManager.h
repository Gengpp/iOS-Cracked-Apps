//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYWalletSendSMSManager : DataLoadManager
{
    NSString *_mobile;
    NSString *_smsTemplate;
    NSString *_smsCodeLength;
}

@property(retain, nonatomic) NSString *smsCodeLength; // @synthesize smsCodeLength=_smsCodeLength;
@property(retain, nonatomic) NSString *smsTemplate; // @synthesize smsTemplate=_smsTemplate;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)content;
- (id)signWithParaments:(id)arg1 connector:(id)arg2 key:(id)arg3;
- (id)valueDicForPost;
- (id)urlStl;
- (id)init;

@end

