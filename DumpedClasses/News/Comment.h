//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface Comment : ExploreOriginalData
{
    NSDictionary *_commentDict;
    NSDictionary *_commentExtra;
    NSString *_title;
    NSArray *_filterWords;
    NSNumber *_aggrType;
    NSString *_groupID;
    NSString *_itemID;
    NSNumber *_hasVideo;
    NSString *_source;
    NSNumber *_cellLayoutStyle;
    NSArray *_actionList;
    NSDictionary *_articleUserInfo;
}

+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(copy, nonatomic) NSDictionary *articleUserInfo; // @synthesize articleUserInfo=_articleUserInfo;
@property(retain, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(retain, nonatomic) NSNumber *cellLayoutStyle; // @synthesize cellLayoutStyle=_cellLayoutStyle;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber *hasVideo; // @synthesize hasVideo=_hasVideo;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(retain, nonatomic) NSNumber *aggrType; // @synthesize aggrType=_aggrType;
@property(retain, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDictionary *commentExtra; // @synthesize commentExtra=_commentExtra;
@property(retain, nonatomic) NSDictionary *commentDict; // @synthesize commentDict=_commentDict;
- (void).cxx_destruct;
- (void)updateDictWithDiggCount:(id)arg1;
- (void)updateDictWithUserDigg:(_Bool)arg1;
- (void)commentChangeNotification:(id)arg1;
- (void)setIsFollowed:(_Bool)arg1;
- (_Bool)userIsFollowed;
- (_Bool)isFollowed;
- (id)articleOpenURL;
- (id)recommendReasonType;
- (id)recommendReason;
- (id)commentOpenURL;
- (id)articleImageUrl;
- (id)sourceOpenURL;
- (unsigned long long)maxLineNumber;
- (id)commentID;
- (id)userName;
- (id)userAvatarURL;
- (int)commentCount;
- (_Bool)userDigg;
- (int)diggCount;
- (id)userVerifiedContent;
- (id)userAuthInfo;
- (id)commentContent;
- (_Bool)articleUserVerified;
- (id)articleUserAvatar;
- (id)articleUserName;
- (id)articleUserID;
- (id)userID;
@property(copy, nonatomic) NSDictionary *forwardInfo;
- (void)commentForwardSuccess:(id)arg1;
- (void)blockNotification:(id)arg1;
- (void)followNotification:(id)arg1;
- (void)removeObserveNotification;
- (void)addObserveNotification;
- (void)updateWithDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

