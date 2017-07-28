//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSMutableOrderedSet, NSString, NSString<Optional>, SSUserModel<Ignore>, TTGroupModel<Ignore>, TTQutoedCommentModel<Ignore>;

@interface TTCommentDetailModel : JSONModel
{
    _Bool _userDigg;
    _Bool _isPGCAuthor;
    _Bool _isDeleted;
    NSString *_commentID;
    NSString<Optional> *_dongtaiID;
    NSString *_content;
    NSString *_createTime;
    SSUserModel<Ignore> *_user;
    long long _diggCount;
    long long _commentCount;
    NSString *_shareURL;
    TTQutoedCommentModel<Ignore> *_qutoedCommentModel;
    TTGroupModel<Ignore> *_groupModel;
    NSMutableOrderedSet *_digUsers;
    NSString<Optional> *_groupTitle;
    NSString<Optional> *_groupThumbURL;
    long long _groupMediaType;
    NSString<Optional> *_groupOpenURL;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (_Bool)propertyIsIgnored:(id)arg1;
+ (id)keyMapper;
@property(retain, nonatomic) NSString<Optional> *groupOpenURL; // @synthesize groupOpenURL=_groupOpenURL;
@property(nonatomic) long long groupMediaType; // @synthesize groupMediaType=_groupMediaType;
@property(retain, nonatomic) NSString<Optional> *groupThumbURL; // @synthesize groupThumbURL=_groupThumbURL;
@property(retain, nonatomic) NSString<Optional> *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(retain, nonatomic) NSMutableOrderedSet *digUsers; // @synthesize digUsers=_digUsers;
@property(retain, nonatomic) TTGroupModel<Ignore> *groupModel; // @synthesize groupModel=_groupModel;
@property(retain, nonatomic) TTQutoedCommentModel<Ignore> *qutoedCommentModel; // @synthesize qutoedCommentModel=_qutoedCommentModel;
@property(retain, nonatomic) NSString *shareURL; // @synthesize shareURL=_shareURL;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isPGCAuthor; // @synthesize isPGCAuthor=_isPGCAuthor;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) long long diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) SSUserModel<Ignore> *user; // @synthesize user=_user;
@property(nonatomic) _Bool userDigg; // @synthesize userDigg=_userDigg;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString<Optional> *dongtaiID; // @synthesize dongtaiID=_dongtaiID;
@property(retain, nonatomic) NSString *commentID; // @synthesize commentID=_commentID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

