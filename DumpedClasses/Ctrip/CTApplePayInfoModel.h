//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PriceType;

@interface CTApplePayInfoModel : NSObject
{
    NSArray *_accessNetworks;
    NSString *_countryCode;
    NSString *_currencyCode;
    PriceType *_orderAmount;
    NSString *_lableTitle;
    unsigned long long _merchantCapabilities;
    NSString *_merchantIdentifier;
}

@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(nonatomic) unsigned long long merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(copy, nonatomic) NSString *lableTitle; // @synthesize lableTitle=_lableTitle;
@property(retain, nonatomic) PriceType *orderAmount; // @synthesize orderAmount=_orderAmount;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSArray *accessNetworks; // @synthesize accessNetworks=_accessNetworks;
- (void).cxx_destruct;
- (id)init;

@end
