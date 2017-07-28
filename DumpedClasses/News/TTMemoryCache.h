//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTPersistenceProtocol.h"

@class NSMutableDictionary, NSString, TTPersistenceOption;

@interface TTMemoryCache : NSObject <TTPersistenceProtocol>
{
    NSMutableDictionary *_data;
    TTPersistenceOption *_option;
}

@property(retain, nonatomic) TTPersistenceOption *option; // @synthesize option=_option;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)save;
- (_Bool)removeAll;
- (_Bool)hasObjectForKey:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)appDidEnterBackgroundNotification;
- (void)appDidReceiveMemoryWarningNotification;
- (void)dealloc;
- (id)initWithOption:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

