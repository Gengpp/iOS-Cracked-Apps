//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

#import "TTCommentModelProtocol.h"

@class NSArray<Optional>, NSArray<TTCommentReplyModel>, NSNumber, NSNumber<Optional>, NSString, NSString<Ignore>, NSString<Optional>, TTForumModel<Optional>, TTGroupModel<Ignore>, TTQutoedCommentModel<Optional>;

@interface TTCommentModel : JSONModel <TTCommentModelProtocol>
{
    _Bool isOwner;
    _Bool isFollowing;
    _Bool isFollowed;
    _Bool isUnFold;
    _Bool isStick;
    _Bool _userVerified;
    _Bool _isPGCAuthor;
    _Bool _userDigged;
    _Bool _userBuried;
    _Bool _isBlocking;
    _Bool _isBlocked;
    _Bool _shouldShowDelete;
    NSNumber *userRelation;
    NSNumber *_commentID;
    NSNumber *_commentCreateTime;
    NSNumber *_userID;
    NSString *_userName;
    NSString *_commentContent;
    NSString<Optional> *_fromSite;
    NSString *_userAvatarURL;
    NSString<Optional> *_userProfileURL;
    NSString<Optional> *_userPlatform;
    NSString<Ignore> *_itemTag;
    NSString<Optional> *_userSignature;
    NSString<Optional> *_accessoryInfo;
    NSString<Optional> *_openURL;
    NSString<Optional> *_mediaName;
    NSString<Optional> *_mediaId;
    NSString<Optional> *_verifiedInfo;
    NSString<Optional> *_userAuthInfo;
    NSArray<TTCommentReplyModel> *_replyModelArr;
    NSArray<Optional> *_authorBadgeList;
    TTGroupModel<Ignore> *_groupModel;
    TTForumModel<Optional> *_forumModel;
    NSNumber<Optional> *_digCount;
    NSNumber<Optional> *_replyCount;
    NSNumber<Optional> *_buryCount;
    TTQutoedCommentModel<Optional> *_quotedComment;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (_Bool)propertyIsIgnored:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) _Bool shouldShowDelete; // @synthesize shouldShowDelete=_shouldShowDelete;
@property(retain, nonatomic) TTQutoedCommentModel<Optional> *quotedComment; // @synthesize quotedComment=_quotedComment;
@property(nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) _Bool isBlocking; // @synthesize isBlocking=_isBlocking;
@property(nonatomic) _Bool userBuried; // @synthesize userBuried=_userBuried;
@property(nonatomic) _Bool userDigged; // @synthesize userDigged=_userDigged;
@property(retain, nonatomic) NSNumber<Optional> *buryCount; // @synthesize buryCount=_buryCount;
@property(retain, nonatomic) NSNumber<Optional> *replyCount; // @synthesize replyCount=_replyCount;
@property(retain, nonatomic) NSNumber<Optional> *digCount; // @synthesize digCount=_digCount;
@property(retain, nonatomic) TTForumModel<Optional> *forumModel; // @synthesize forumModel=_forumModel;
@property(retain, nonatomic) TTGroupModel<Ignore> *groupModel; // @synthesize groupModel=_groupModel;
@property(copy, nonatomic) NSArray<Optional> *authorBadgeList; // @synthesize authorBadgeList=_authorBadgeList;
@property(copy, nonatomic) NSArray<TTCommentReplyModel> *replyModelArr; // @synthesize replyModelArr=_replyModelArr;
@property(copy, nonatomic) NSString<Optional> *userAuthInfo; // @synthesize userAuthInfo=_userAuthInfo;
@property(copy, nonatomic) NSString<Optional> *verifiedInfo; // @synthesize verifiedInfo=_verifiedInfo;
@property(copy, nonatomic) NSString<Optional> *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString<Optional> *mediaName; // @synthesize mediaName=_mediaName;
@property(copy, nonatomic) NSString<Optional> *openURL; // @synthesize openURL=_openURL;
@property(copy, nonatomic) NSString<Optional> *accessoryInfo; // @synthesize accessoryInfo=_accessoryInfo;
@property(copy, nonatomic) NSString<Optional> *userSignature; // @synthesize userSignature=_userSignature;
@property(copy, nonatomic) NSString<Ignore> *itemTag; // @synthesize itemTag=_itemTag;
@property(copy, nonatomic) NSString<Optional> *userPlatform; // @synthesize userPlatform=_userPlatform;
@property(copy, nonatomic) NSString<Optional> *userProfileURL; // @synthesize userProfileURL=_userProfileURL;
@property(copy, nonatomic) NSString *userAvatarURL; // @synthesize userAvatarURL=_userAvatarURL;
@property(copy, nonatomic) NSString<Optional> *fromSite; // @synthesize fromSite=_fromSite;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=_commentContent;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSNumber *commentCreateTime; // @synthesize commentCreateTime=_commentCreateTime;
@property(retain, nonatomic) NSNumber *commentID; // @synthesize commentID=_commentID;
@property(nonatomic) _Bool isPGCAuthor; // @synthesize isPGCAuthor=_isPGCAuthor;
@property(nonatomic) _Bool userVerified; // @synthesize userVerified=_userVerified;
@property(nonatomic) _Bool isStick; // @synthesize isStick;
@property(nonatomic) _Bool isUnFold; // @synthesize isUnFold;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing;
@property(nonatomic) _Bool isOwner; // @synthesize isOwner;
@property(retain, nonatomic) NSNumber *userRelation; // @synthesize userRelation;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)userInfoStr;
- (id)userRelationStr;
- (_Bool)hasReply;
- (_Bool)isAvailable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 groupModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

