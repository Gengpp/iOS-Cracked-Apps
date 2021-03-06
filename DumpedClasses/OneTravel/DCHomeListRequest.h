//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DBBaseRequest.h"

@class NSMutableDictionary, NSString;

@interface DCHomeListRequest : DBBaseRequest
{
    NSMutableDictionary *updateTimesDic;
    NSString *pathName;
    Class modelClass;
    _Bool _need_auto_show;
}

+ (id)configRequestWithAutoShow:(_Bool)arg1 cityId:(id)arg2;
+ (void)readCachePOI;
+ (void)appTerminateNoti:(id)arg1;
+ (void)saveCachePOI;
+ (void)initialize;
+ (id)updateTimeCache:(id)arg1;
+ (id)oknet_adapterWithRole:(long long)arg1 path:(id)arg2 model:(Class)arg3 isAutoShow:(_Bool)arg4 updateTimeCache:(id)arg5;
@property(nonatomic) _Bool need_auto_show; // @synthesize need_auto_show=_need_auto_show;
- (void).cxx_destruct;
- (id)responseModelWithData:(id)arg1;
- (id)pathName;
- (id)methodName;
- (void)requestWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithRole:(long long)arg1 apiPath:(id)arg2 modelClass:(Class)arg3 updateTimeCache:(id)arg4 isAutoShow:(_Bool)arg5;

@end

