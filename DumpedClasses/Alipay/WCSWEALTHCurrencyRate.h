//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCSWEALTHCurrencyRate : NSObject
{
    int _sortWeight;
    NSString *_currencyCode;
    NSString *_currencyName;
    NSString *_rate;
    NSString *_iconUrl;
}

@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *rate; // @synthesize rate=_rate;
@property(nonatomic) int sortWeight; // @synthesize sortWeight=_sortWeight;
@property(retain, nonatomic) NSString *currencyName; // @synthesize currencyName=_currencyName;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (void).cxx_destruct;

@end
