//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTEntityBase.h"

@class NSArray, NSDictionary, NSNumber, NSString, WDQuestionDescEntity, WDQuestionFoldReasonEntity, WDUserStructModel;

@interface WDQuestionEntity : TTEntityBase
{
    _Bool _shouldShowDelete;
    _Bool _canDelete;
    _Bool _shouldShowEdit;
    _Bool _canEdit;
    _Bool _isFollowed;
    _Bool _isAnswered;
    _Bool _background;
    _Bool _isTagModified;
    NSDictionary *_categoryContent;
    NSNumber *_createTime;
    NSNumber *_niceAnsCount;
    NSNumber *_normalAnsCount;
    NSString *_title;
    NSString *_qid;
    NSNumber *_groupId;
    NSNumber *_itemId;
    NSNumber *_opStatus;
    NSNumber *_status;
    NSNumber *_tagId;
    NSString *_tagName;
    NSString *_uname;
    NSNumber *_userId;
    NSString *_contentId;
    WDQuestionDescEntity *_content;
    NSDictionary *_shareData;
    NSString *_foldReasonId;
    NSArray *_tagEntityDics;
    WDQuestionFoldReasonEntity *_foldReasonEntity;
    unsigned long long _reviewStatus;
    long long _questionType;
    long long _dataBaseType;
    NSNumber *_followCount;
    NSString *_inviteHint;
    NSString *_listSchema;
    NSString *_postAnswerSchema;
    NSNumber *_behotTime;
    NSDictionary *_adPromotion;
    WDUserStructModel *_user;
    NSArray *_tagEntities;
    NSArray *_answerIDS;
}

+ (id)genQuestionEntityFromQID:(id)arg1;
+ (id)genQuestionEntityFromModel:(id)arg1;
+ (long long)dbVersion;
+ (id)keyMapping;
+ (void)deleteDBFileIfNeeded;
+ (unsigned long long)cacheLevel;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
+ (id)objectWithDictionary:(id)arg1;
+ (id)genQuestionEntityFromInviteQuestionModel:(id)arg1;
+ (id)genQuestionEntityFromInviteModel:(id)arg1;
@property(nonatomic) _Bool isTagModified; // @synthesize isTagModified=_isTagModified;
@property(retain, nonatomic) NSArray *answerIDS; // @synthesize answerIDS=_answerIDS;
@property(copy, nonatomic) NSArray *tagEntities; // @synthesize tagEntities=_tagEntities;
@property(retain, nonatomic) WDUserStructModel *user; // @synthesize user=_user;
@property(nonatomic) _Bool background; // @synthesize background=_background;
@property(nonatomic) _Bool isAnswered; // @synthesize isAnswered=_isAnswered;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) _Bool shouldShowEdit; // @synthesize shouldShowEdit=_shouldShowEdit;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool shouldShowDelete; // @synthesize shouldShowDelete=_shouldShowDelete;
@property(retain, nonatomic) NSDictionary *adPromotion; // @synthesize adPromotion=_adPromotion;
@property(retain, nonatomic) NSNumber *behotTime; // @synthesize behotTime=_behotTime;
@property(copy, nonatomic) NSString *postAnswerSchema; // @synthesize postAnswerSchema=_postAnswerSchema;
@property(copy, nonatomic) NSString *listSchema; // @synthesize listSchema=_listSchema;
@property(copy, nonatomic) NSString *inviteHint; // @synthesize inviteHint=_inviteHint;
@property(copy, nonatomic) NSNumber *followCount; // @synthesize followCount=_followCount;
@property(nonatomic) long long dataBaseType; // @synthesize dataBaseType=_dataBaseType;
@property(nonatomic) long long questionType; // @synthesize questionType=_questionType;
@property(nonatomic) unsigned long long reviewStatus; // @synthesize reviewStatus=_reviewStatus;
@property(retain, nonatomic) WDQuestionFoldReasonEntity *foldReasonEntity; // @synthesize foldReasonEntity=_foldReasonEntity;
@property(copy, nonatomic) NSArray *tagEntityDics; // @synthesize tagEntityDics=_tagEntityDics;
@property(copy, nonatomic) NSString *foldReasonId; // @synthesize foldReasonId=_foldReasonId;
@property(retain, nonatomic) NSDictionary *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) WDQuestionDescEntity *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *uname; // @synthesize uname=_uname;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain, nonatomic) NSNumber *tagId; // @synthesize tagId=_tagId;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *opStatus; // @synthesize opStatus=_opStatus;
@property(retain, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *qid; // @synthesize qid=_qid;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *normalAnsCount; // @synthesize normalAnsCount=_normalAnsCount;
@property(retain, nonatomic) NSNumber *niceAnsCount; // @synthesize niceAnsCount=_niceAnsCount;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSDictionary *categoryContent; // @synthesize categoryContent=_categoryContent;
- (void).cxx_destruct;
- (void)updateWithWDQuestionModel:(id)arg1;
- (id)initWithWDQuestionModel:(id)arg1;
- (id)allAnsCount;
- (_Bool)isCathed;
- (void)save;
- (void)updateWithWDInviteQuestionModel:(id)arg1;
- (void)updateWithWDInviteModel:(id)arg1;
- (id)initWithWDInviteQuestionModel:(id)arg1;
- (id)initWithWDInviteModel:(id)arg1;

@end

