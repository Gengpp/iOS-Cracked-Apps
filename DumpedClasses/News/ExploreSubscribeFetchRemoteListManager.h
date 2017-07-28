//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ListDataOperationManager.h"

#import "SSDataOperationDelegate.h"

@class NSArray, NSString, SubscribeEntryGetRemoteDataOperation;

@interface ExploreSubscribeFetchRemoteListManager : ListDataOperationManager <SSDataOperationDelegate>
{
    _Bool _hasNewUpdatesIndicator;
    _Bool _getNewItemsIndicator;
    _Bool _isLoading;
    NSArray *_items;
    NSString *_currentItemsVersion;
    CDUnknownBlockType _finishBlock;
    SubscribeEntryGetRemoteDataOperation *_remoteOp;
}

@property(retain, nonatomic) SubscribeEntryGetRemoteDataOperation *remoteOp; // @synthesize remoteOp=_remoteOp;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSString *currentItemsVersion; // @synthesize currentItemsVersion=_currentItemsVersion;
@property(nonatomic) _Bool getNewItemsIndicator; // @synthesize getNewItemsIndicator=_getNewItemsIndicator;
@property(nonatomic) _Bool hasNewUpdatesIndicator; // @synthesize hasNewUpdatesIndicator=_hasNewUpdatesIndicator;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)dataOperation:(id)arg1 increaseData:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)cancelAllOperations;
- (void)updateItemsWithDataArray:(id)arg1;
- (void)startFetchRemoteDataWithRequestType:(long long)arg1 lastRequestVersion:(id)arg2 hasNewUpdates:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

