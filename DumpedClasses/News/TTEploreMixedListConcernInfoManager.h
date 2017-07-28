//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Singleton.h"

@class NSString;

@interface TTEploreMixedListConcernInfoManager : NSObject <Singleton>
{
}

- (id)concernInfoForConcernID:(id)arg1;
- (void)updateConcernInfo:(id)arg1 concernID:(id)arg2;
- (id)postHintForConcernID:(id)arg1 categoryID:(id)arg2;
- (void)updatePostHint:(id)arg1 concernID:(id)arg2 categoryID:(id)arg3;
- (id)postEditStatusForConcernID:(id)arg1 categoryID:(id)arg2;
- (void)updatePostEditStatus:(id)arg1 concernID:(id)arg2 categoryID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

