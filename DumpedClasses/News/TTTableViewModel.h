//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Singleton.h"

@class NSError, NSMutableArray, NSString;

@interface TTTableViewModel : NSObject <Singleton>
{
    _Bool _hasMore;
    id _netData;
    NSError *_error;
    NSMutableArray *_dataArr;
    id _headerData;
    id _footerData;
    long long _page;
    long long _numberPerPage;
}

@property(nonatomic) long long numberPerPage; // @synthesize numberPerPage=_numberPerPage;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) id footerData; // @synthesize footerData=_footerData;
@property(retain, nonatomic) id headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id netData; // @synthesize netData=_netData;
- (void).cxx_destruct;
- (void)loadTableWithData:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)loadMoreWithParameters:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)loadDataWithParameters:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

