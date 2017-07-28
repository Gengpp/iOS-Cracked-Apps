//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSDataOperation.h"

@class NSMutableDictionary, NSString;

@interface SubscribeEntryGetRemoteDataOperation : SSDataOperation
{
    _Bool _hasNewUpdatesIndicator;
    NSString *_urlString;
    NSMutableDictionary *_paramDict;
    NSString *_lastRequestVersion;
    long long _requestType;
}

@property(nonatomic) _Bool hasNewUpdatesIndicator; // @synthesize hasNewUpdatesIndicator=_hasNewUpdatesIndicator;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *lastRequestVersion; // @synthesize lastRequestVersion=_lastRequestVersion;
- (void).cxx_destruct;
- (void)execute:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *paramDict; // @synthesize paramDict=_paramDict;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (id)init;

@end

