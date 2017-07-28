//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseEntity.h"

@class FRShareStructModel, NSString, NSString<Optional>;

@interface FRConcernEntity : FRBaseEntity
{
    _Bool _newly;
    _Bool _managing;
    NSString *_concern_id;
    NSString *_name;
    long long _new_thread_count;
    NSString *_avatar_url;
    long long _concern_count;
    long long _discuss_count;
    long long _concern_time;
    NSString *_share_url;
    NSString *_introdution_url;
    NSString<Optional> *_desc;
    long long _type;
    id _headInfo;
    FRShareStructModel *_share_data;
}

+ (void)initConcernTable;
+ (id)genConcernEntityWithConcernInfo:(id)arg1 needUpdate:(_Bool)arg2;
+ (id)genConcernEntityWithConcernStruct:(id)arg1 needUpdate:(_Bool)arg2;
+ (id)genConcernEntityWithConcernItemStruct:(id)arg1 needUpdate:(_Bool)arg2;
+ (id)getConcernEntityWithConcernId:(id)arg1;
@property(retain, nonatomic) FRShareStructModel *share_data; // @synthesize share_data=_share_data;
@property(retain, nonatomic) id headInfo; // @synthesize headInfo=_headInfo;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *introdution_url; // @synthesize introdution_url=_introdution_url;
@property(retain, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(nonatomic) _Bool managing; // @synthesize managing=_managing;
@property(nonatomic) long long concern_time; // @synthesize concern_time=_concern_time;
@property(nonatomic) _Bool newly; // @synthesize newly=_newly;
@property(nonatomic) long long discuss_count; // @synthesize discuss_count=_discuss_count;
@property(nonatomic) long long concern_count; // @synthesize concern_count=_concern_count;
@property(retain, nonatomic) NSString *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(nonatomic) long long new_thread_count; // @synthesize new_thread_count=_new_thread_count;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *concern_id; // @synthesize concern_id=_concern_id;
- (void).cxx_destruct;
- (id)generateHeadInfoWithDictionary:(id)arg1;
- (void)updateConcernCareState:(id)arg1;
- (void)updateWithConcernInfo:(id)arg1;
- (void)updateWithConcernStruct:(id)arg1;
- (void)updateWithConcernItemStruct:(id)arg1;
- (void)dealloc;
- (id)initWithConcernInfo:(id)arg1;
- (id)initWithConcernStruct:(id)arg1;
- (id)initWithConcernItemStruct:(id)arg1;
- (id)init;

@end

