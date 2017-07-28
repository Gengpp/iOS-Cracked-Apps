//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface ChargeMode : NSObject <NSCoding>
{
    _Bool _sendOrderIDAndTransactionReceipt;
    _Bool _rechargeSuccess;
    NSString *_userID;
    unsigned long long _prouctID;
    NSString *_orderID;
    NSString *_transactionReceipt;
}

@property(nonatomic) _Bool rechargeSuccess; // @synthesize rechargeSuccess=_rechargeSuccess;
@property(nonatomic) _Bool sendOrderIDAndTransactionReceipt; // @synthesize sendOrderIDAndTransactionReceipt=_sendOrderIDAndTransactionReceipt;
@property(retain, nonatomic) NSString *transactionReceipt; // @synthesize transactionReceipt=_transactionReceipt;
@property(retain, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(nonatomic) unsigned long long prouctID; // @synthesize prouctID=_prouctID;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)saveObjectToStandardUserDefaults;
- (id)getObjectFromStandardUserDefaults;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParam:(id)arg1 prouct:(unsigned long long)arg2 order:(id)arg3 transaction:(id)arg4 sendOrderIDAndTransactionReceipt:(_Bool)arg5 rechargeSuccess:(_Bool)arg6;

@end

