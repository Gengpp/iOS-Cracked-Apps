//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString;

@interface TTAdCallListenModel : NSObject
{
    _Bool _isWebCall;
    _Bool _toListen;
    NSString *_ad_id;
    NSString *_log_extra;
    NSString *_position;
    NSDate *_dailTime;
    NSNumber *_dailActionType;
}

@property(nonatomic) _Bool toListen; // @synthesize toListen=_toListen;
@property(nonatomic) _Bool isWebCall; // @synthesize isWebCall=_isWebCall;
@property(retain, nonatomic) NSNumber *dailActionType; // @synthesize dailActionType=_dailActionType;
@property(retain, nonatomic) NSDate *dailTime; // @synthesize dailTime=_dailTime;
@property(retain, nonatomic) NSString *position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *log_extra; // @synthesize log_extra=_log_extra;
@property(retain, nonatomic) NSString *ad_id; // @synthesize ad_id=_ad_id;
- (void).cxx_destruct;
- (id)init;

@end

