//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseEntity.h"

@class FRForumEntity, FRGroupEntity, FRLocationEntity, NSArray<FRThreadCommentEntity>, NSArray<TTImageInfoModel>, NSArray<TTPersonModel>, NSNumber, NSString, TTPersonModel;

@interface FRThreadEntity : FRBaseEntity
{
    long long _thread_id;
    NSString *_reason;
    long long _forward_num;
    long long _modify_time;
    long long _comment_count;
    long long _talk_type;
    long long _digg_count;
    long long _digg_limit;
    NSArray<TTPersonModel> *_digg_list;
    NSArray<TTPersonModel> *_friend_digg_list;
    NSString *_content;
    NSString *_content_rich_spans;
    long long _create_time;
    NSString *_share_url;
    FRForumEntity *_talk_item;
    NSArray<TTImageInfoModel> *_large_image_list;
    NSArray<TTImageInfoModel> *_thumb_image_list;
    FRGroupEntity *_group;
    FRThreadEntity *_origin_item;
    TTPersonModel *_user;
    NSArray<FRThreadCommentEntity> *_comments;
    long long _user_digg;
    FRLocationEntity *_position;
    NSNumber *_userRepined;
    NSNumber *_readCount;
    long long _rate;
    unsigned long long _status;
    NSString *_title;
    NSString *_phone;
    NSString *_score;
    unsigned long long __entityType;
    NSString *__errorReason;
}

+ (id)genEntityWithModel:(id)arg1;
+ (id)getEntityWithId:(long long)arg1;
@property(retain, nonatomic) NSString *_errorReason; // @synthesize _errorReason=__errorReason;
@property(nonatomic) unsigned long long _entityType; // @synthesize _entityType=__entityType;
@property(retain, nonatomic) NSString *score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSNumber *readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) NSNumber *userRepined; // @synthesize userRepined=_userRepined;
@property(retain, nonatomic) FRLocationEntity *position; // @synthesize position=_position;
@property(nonatomic) long long user_digg; // @synthesize user_digg=_user_digg;
@property(retain, nonatomic) NSArray<FRThreadCommentEntity> *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) TTPersonModel *user; // @synthesize user=_user;
@property(retain, nonatomic) FRThreadEntity *origin_item; // @synthesize origin_item=_origin_item;
@property(retain, nonatomic) FRGroupEntity *group; // @synthesize group=_group;
@property(retain, nonatomic) NSArray<TTImageInfoModel> *thumb_image_list; // @synthesize thumb_image_list=_thumb_image_list;
@property(retain, nonatomic) NSArray<TTImageInfoModel> *large_image_list; // @synthesize large_image_list=_large_image_list;
@property(retain, nonatomic) FRForumEntity *talk_item; // @synthesize talk_item=_talk_item;
@property(retain, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(nonatomic) long long create_time; // @synthesize create_time=_create_time;
@property(retain, nonatomic) NSString *content_rich_spans; // @synthesize content_rich_spans=_content_rich_spans;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSArray<TTPersonModel> *friend_digg_list; // @synthesize friend_digg_list=_friend_digg_list;
@property(retain, nonatomic) NSArray<TTPersonModel> *digg_list; // @synthesize digg_list=_digg_list;
@property(nonatomic) long long digg_limit; // @synthesize digg_limit=_digg_limit;
@property(nonatomic) long long digg_count; // @synthesize digg_count=_digg_count;
@property(nonatomic) long long talk_type; // @synthesize talk_type=_talk_type;
@property(nonatomic) long long comment_count; // @synthesize comment_count=_comment_count;
@property(nonatomic) long long modify_time; // @synthesize modify_time=_modify_time;
@property(nonatomic) long long forward_num; // @synthesize forward_num=_forward_num;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) long long thread_id; // @synthesize thread_id=_thread_id;
- (void).cxx_destruct;
- (_Bool)isThreadAudited;
- (_Bool)isThreadDeleted;
@property(readonly, nonatomic) _Bool isTop;
@property(readonly, nonatomic) _Bool isStar;
- (void)diggWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)digg;
- (void)setStar:(_Bool)arg1;
- (void)setTop:(_Bool)arg1;
- (void)updateWithThreadModel:(id)arg1;
- (id)initWithThreadModel:(id)arg1;

@end

