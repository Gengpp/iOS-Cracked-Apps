//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSArray, NSDate, NSDictionary, NSString, QZLayoutInfo;

@interface QzoneFeedCellComm : QzoneModel
{
    NSDictionary *_extendInfo;
}

@property(retain, nonatomic) NSDictionary *extendInfo; // @synthesize extendInfo=_extendInfo;
- (void).cxx_destruct;
- (_Bool)isDisableCustomPraise;
- (void)setIsSetTopFeed:(_Bool)arg1;
- (_Bool)isNeedShowTopFeed;
- (_Bool)isSupportShowAddFriendsBtn;
- (_Bool)isSupportShowUnFollowBtn;
- (_Bool)isSupportShowFollowBtn;
- (_Bool)isSetTopFeed;
- (_Bool)shouldShowAllButton;
- (_Bool)customDropListShowShareBtn;
- (_Bool)isFamousSpaceUserFeed;
- (_Bool)isFamousRecommAdvFeed;
- (_Bool)isQbossPurchaseFeeds;
- (_Bool)isTodayInHistoryFeed;
- (_Bool)isPassiveAdvFeed;
- (_Bool)isAppAdvFeed;
- (_Bool)isGuidingFeed;
- (_Bool)needInstalledFilter;
- (_Bool)needYunYingReport;
- (_Bool)needAddAdTagAfterName;
- (_Bool)needAddAdTag;
- (_Bool)needHideLogo;
- (_Bool)needHideNick;
- (_Bool)isNotTimeSortFeed;
- (_Bool)isAdvFeed;
- (_Bool)needAdReport;

// Remaining properties
@property(nonatomic) long long actiontype; // @dynamic actiontype;
@property(retain, nonatomic) NSString *actionurl; // @dynamic actionurl;
@property(nonatomic) long long advButtonAnimationDelay; // @dynamic advButtonAnimationDelay;
@property(nonatomic) long long advStytle; // @dynamic advStytle;
@property(nonatomic) long long advSubType; // @dynamic advSubType;
@property(copy, nonatomic) NSArray *allow_uins; // @dynamic allow_uins;
@property(nonatomic) long long appid; // @dynamic appid;
@property(retain, nonatomic) NSString *clientKey; // @dynamic clientKey;
@property(retain, nonatomic) NSString *curlikekey; // @dynamic curlikekey;
@property(retain, nonatomic) NSArray *customDropList; // @dynamic customDropList;
@property(nonatomic) unsigned long long feedDeleteTime; // @dynamic feedDeleteTime;
@property(nonatomic) long long feedsattr; // @dynamic feedsattr;
@property(nonatomic) long long feedsattr2; // @dynamic feedsattr2;
@property(retain, nonatomic) NSString *feedsid; // @dynamic feedsid;
@property(retain, nonatomic) NSString *feedskey; // @dynamic feedskey;
@property(nonatomic) long long feedstype; // @dynamic feedstype;
@property(nonatomic) _Bool hasCustomDropFav; // @dynamic hasCustomDropFav;
@property(retain, nonatomic) QZLayoutInfo *info; // @dynamic info;
@property(retain, nonatomic) NSString *interestkey; // @dynamic interestkey;
@property(nonatomic) _Bool isBrandUgcAdvFeeds; // @dynamic isBrandUgcAdvFeeds;
@property(nonatomic) _Bool isClickSuiboAdv; // @dynamic isClickSuiboAdv;
@property(nonatomic) _Bool isGroupSquarePicStyle; // @dynamic isGroupSquarePicStyle;
@property(nonatomic) _Bool isPopAdv; // @dynamic isPopAdv;
@property(nonatomic) _Bool isRankingFeeds; // @dynamic isRankingFeeds;
@property(nonatomic) _Bool isStay; // @dynamic isStay;
@property(nonatomic) long long opmask; // @dynamic opmask;
@property(retain, nonatomic) NSString *orglikekey; // @dynamic orglikekey;
@property(nonatomic) long long originaltype; // @dynamic originaltype;
@property(retain, nonatomic) NSString *payKey; // @dynamic payKey;
@property(nonatomic) long long popCurIndex; // @dynamic popCurIndex;
@property(nonatomic) long long recomReportId; // @dynamic recomReportId;
@property(nonatomic) long long recomType; // @dynamic recomType;
@property(nonatomic) long long recomlayout; // @dynamic recomlayout;
@property(retain, nonatomic) NSString *refer; // @dynamic refer;
@property(nonatomic) long long reportFeedsAttr; // @dynamic reportFeedsAttr;
@property(nonatomic) _Bool showLikeAnimation; // @dynamic showLikeAnimation;
@property(nonatomic) long long showmask; // @dynamic showmask;
@property(nonatomic) long long spaceRight; // @dynamic spaceRight;
@property(retain, nonatomic) NSString *sqDynamicFeedsKey; // @dynamic sqDynamicFeedsKey;
@property(retain, nonatomic) NSDictionary *stMapABTest; // @dynamic stMapABTest;
@property(nonatomic) long long subid; // @dynamic subid;
@property(nonatomic) _Bool supportPreLoadAppPage; // @dynamic supportPreLoadAppPage;
@property(retain, nonatomic) NSDate *time; // @dynamic time;
@property(nonatomic) long long uflag; // @dynamic uflag;
@property(retain, nonatomic) NSString *ugcKey; // @dynamic ugcKey;
@property(nonatomic) long long ugcRight; // @dynamic ugcRight;
@property(retain, nonatomic) NSString *ugcRightKey; // @dynamic ugcRightKey;
@property(nonatomic) long long videoAdvStatus; // @dynamic videoAdvStatus;

@end

