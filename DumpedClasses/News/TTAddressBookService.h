//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, TTAddressBook, TTAddressBookCache;

@interface TTAddressBookService : NSObject
{
    NSObject<OS_dispatch_queue> *_addressBookQueue;
    TTAddressBook *_addressbook;
    TTAddressBookCache *_addressBookCache;
}

+ (id)sharedService;
@property(retain, nonatomic) TTAddressBookCache *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
@property(retain, nonatomic) TTAddressBook *addressbook; // @synthesize addressbook=_addressbook;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *addressBookQueue; // @synthesize addressBookQueue=_addressBookQueue;
- (void).cxx_destruct;
- (void)reflectForAddressBookExternalChange;
- (void)rebuildCache;
- (_Bool)hasUnsavedChanges;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)revert;
- (void)addRecord:(id)arg1 startBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)removeRecord:(id)arg1 startBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)loadContactsForProperties:(unsigned long long)arg1 startBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)loadAllContactsWithStartBlock:(CDUnknownBlockType)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)_ttSerialPerformAddressBookAction:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

