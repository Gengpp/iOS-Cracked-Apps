//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, TTImageInfoModel;

@interface TTRepostOriginArticle : NSObject
{
    _Bool _isVideo;
    _Bool _isDeleted;
    NSString *_groupID;
    NSString *_itemID;
    NSString *_title;
    TTImageInfoModel *_thumbImage;
    NSString *_userID;
    NSString *_userName;
    NSString *_userAvatar;
    NSNumber *_showOrigin;
    NSString *_showTips;
}

@property(copy, nonatomic) NSString *showTips; // @synthesize showTips=_showTips;
@property(retain, nonatomic) NSNumber *showOrigin; // @synthesize showOrigin=_showOrigin;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(copy, nonatomic) NSString *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) TTImageInfoModel *thumbImage; // @synthesize thumbImage=_thumbImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (id)initWithArticle:(id)arg1;

@end

