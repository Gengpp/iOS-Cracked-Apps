//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPBMessage.h"

@class NSString;

@interface UBTHybrid : CPBMessage
{
    unsigned int _realtime;
    unsigned long long _sequence;
    unsigned long long _ts;
    unsigned long long _sid;
    unsigned long long _pvid;
    NSString *_type;
    NSString *_page;
    NSString *_common;
    NSString *_payload;
}

@property(nonatomic) unsigned int realtime; // @synthesize realtime=_realtime;
@property(copy, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSString *common; // @synthesize common=_common;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long pvid; // @synthesize pvid=_pvid;
@property(nonatomic) unsigned long long sid; // @synthesize sid=_sid;
@property(nonatomic) unsigned long long ts; // @synthesize ts=_ts;
@property(nonatomic) unsigned long long sequence; // @synthesize sequence=_sequence;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;

@end
