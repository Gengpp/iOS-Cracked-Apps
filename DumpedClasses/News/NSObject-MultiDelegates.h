//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTProxyDelegate;

@interface NSObject (MultiDelegates)
@property(retain, nonatomic) TTProxyDelegate *ttProxyDelegate;
- (void)tt_removeAllDelegates;
- (_Bool)tt_removeDelegate:(id)arg1;
- (_Bool)tt_addDelegate:(id)arg1 asMainDelegate:(_Bool)arg2;
@end

