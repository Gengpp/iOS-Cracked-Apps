//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreOriginalData.h"

@class ArticleDetail, ExploreOrderedADModel, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, TTAdVideoRelateAdModel;

@interface Article : ExploreOriginalData
{
    int _displayType;
    NSDictionary *_detailMediaInfo;
    NSDictionary *_detailUserInfo;
    NSDictionary *_relatedVideoExtraInfo;
    TTAdVideoRelateAdModel *_videoAdExtra;
    NSDictionary *_videoExtendLink;
    _Bool _banComment;
    _Bool _hasImage;
    _Bool _showPortrait;
    _Bool _detailShowPortrait;
    ExploreOrderedADModel *_adModel;
    NSString *_primaryID;
    NSString *_abstract;
    NSNumber *_articleDeleted;
    unsigned long long _articleSubType;
    unsigned long long _articleType;
    NSString *_articleURLString;
    NSString *_cacheToken;
    NSDictionary *_comment;
    NSArray *_comments;
    NSArray *_zzComments;
    NSNumber *_detailNoComments;
    NSString *_displayTitle;
    NSString *_displayURL;
    NSString *_openURL;
    NSNumber *_goDetailCount;
    NSNumber *_groupType;
    NSNumber *_hasVideo;
    NSString *_imageDetailListString;
    NSNumber *_itemVersion;
    NSString *_keywords;
    NSArray *_filterWords;
    NSString *_adPromoter;
    NSArray *_galleries;
    NSNumber *_ignoreWebTranform;
    NSNumber *_isOriginal;
    NSDictionary *_embededAdInfo;
    NSNumber *_gallaryFlag;
    NSNumber *_gallaryImageCount;
    NSString *_itemID;
    NSNumber *_aggrType;
    NSDictionary *_entityWordInfoDict;
    NSDictionary *_largeImageDict;
    NSDictionary *_middleImageDict;
    NSDictionary *_videoDetailInfo;
    NSDictionary *_videoPlayInfo;
    NSNumber *_natantLevel;
    unsigned long long _preloadWeb;
    NSNumber *_previousItemVersion;
    NSString *_source;
    NSString *_sourceURL;
    NSString *_tcHeadText;
    NSString *_thumbnailListString;
    NSString *_title;
    NSString *_subtitle;
    NSNumber *_imageMode;
    NSNumber *_topicGroupId;
    NSArray *_listGroupImgDicts;
    NSDictionary *_sourceIconDict;
    NSDictionary *_sourceIconNightDict;
    NSString *_videoID;
    NSNumber *_videoDuration;
    NSNumber *_videoType;
    NSDate *_createdTime;
    NSMutableDictionary *_meituanAds;
    NSString *_mediaName;
    NSDictionary *_mediaInfo;
    NSDictionary *_wapHeaders;
    NSDictionary *_h5Extra;
    NSDictionary *_wendaExtra;
    double _articlePublishTime;
    NSString *_sourceOpenUrl;
    NSString *_sourceDesc;
    NSString *_sourceDescOpenUrl;
    NSString *_sourceAvatar;
    NSNumber *_isSubscribe;
    NSNumber *_sourceIconStyle;
    NSDictionary *_novelData;
    NSNumber *_articlePosition;
    NSString *_videoSource;
    NSNumber *_videoProportion;
    NSNumber *_detailVideoProportion;
    NSDictionary *_userInfo;
    NSString *_videoLocalURL;
    NSString *_mediaUserID;
    NSString *_recommendReason;
    NSDictionary *_userRelation;
    NSDictionary *_ugcInfo;
    NSNumber *_banBury;
    NSNumber *_banDigg;
    NSString *_adIDStr;
    NSString *_logExtra;
    NSString *_schema;
    NSNumber *_share_count;
    NSNumber *_showOrigin;
    NSString *_showTips;
    NSString *_articleOpenURL;
    NSNumber *_showMaxLine;
    NSDictionary *_forwardInfo;
    ArticleDetail *_detail;
}

+ (void)removeAllEntities;
+ (id)primaryIDByUniqueID:(long long)arg1 itemID:(id)arg2 adID:(id)arg3;
+ (id)objectWithDictionary:(id)arg1;
+ (id)primaryIDFromDictionary:(id)arg1;
+ (unsigned long long)cacheLevel;
+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(retain, nonatomic) ArticleDetail *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSDictionary *forwardInfo; // @synthesize forwardInfo=_forwardInfo;
@property(retain, nonatomic) NSNumber *showMaxLine; // @synthesize showMaxLine=_showMaxLine;
@property(retain, nonatomic) NSString *articleOpenURL; // @synthesize articleOpenURL=_articleOpenURL;
@property(retain, nonatomic) NSString *showTips; // @synthesize showTips=_showTips;
@property(retain, nonatomic) NSNumber *showOrigin; // @synthesize showOrigin=_showOrigin;
@property(retain, nonatomic) NSNumber *share_count; // @synthesize share_count=_share_count;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(retain, nonatomic) NSString *adIDStr; // @synthesize adIDStr=_adIDStr;
@property(retain, nonatomic) NSNumber *banDigg; // @synthesize banDigg=_banDigg;
@property(retain, nonatomic) NSNumber *banBury; // @synthesize banBury=_banBury;
@property(retain, nonatomic) NSDictionary *ugcInfo; // @synthesize ugcInfo=_ugcInfo;
@property(retain, nonatomic) NSDictionary *userRelation; // @synthesize userRelation=_userRelation;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *mediaUserID; // @synthesize mediaUserID=_mediaUserID;
@property(copy, nonatomic) NSString *videoLocalURL; // @synthesize videoLocalURL=_videoLocalURL;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool detailShowPortrait; // @synthesize detailShowPortrait=_detailShowPortrait;
@property(nonatomic) _Bool showPortrait; // @synthesize showPortrait=_showPortrait;
@property(retain, nonatomic) NSNumber *detailVideoProportion; // @synthesize detailVideoProportion=_detailVideoProportion;
@property(retain, nonatomic) NSNumber *videoProportion; // @synthesize videoProportion=_videoProportion;
@property(copy, nonatomic) NSString *videoSource; // @synthesize videoSource=_videoSource;
@property(retain, nonatomic) NSNumber *articlePosition; // @synthesize articlePosition=_articlePosition;
@property(retain, nonatomic) NSDictionary *novelData; // @synthesize novelData=_novelData;
@property(retain, nonatomic) NSNumber *sourceIconStyle; // @synthesize sourceIconStyle=_sourceIconStyle;
@property(retain, nonatomic) NSNumber *isSubscribe; // @synthesize isSubscribe=_isSubscribe;
@property(copy, nonatomic) NSString *sourceAvatar; // @synthesize sourceAvatar=_sourceAvatar;
@property(copy, nonatomic) NSString *sourceDescOpenUrl; // @synthesize sourceDescOpenUrl=_sourceDescOpenUrl;
@property(copy, nonatomic) NSString *sourceDesc; // @synthesize sourceDesc=_sourceDesc;
@property(copy, nonatomic) NSString *sourceOpenUrl; // @synthesize sourceOpenUrl=_sourceOpenUrl;
@property(nonatomic) double articlePublishTime; // @synthesize articlePublishTime=_articlePublishTime;
@property(copy, nonatomic) NSDictionary *wendaExtra; // @synthesize wendaExtra=_wendaExtra;
@property(copy, nonatomic) NSDictionary *h5Extra; // @synthesize h5Extra=_h5Extra;
@property(copy, nonatomic) NSDictionary *wapHeaders; // @synthesize wapHeaders=_wapHeaders;
@property(retain, nonatomic) NSDictionary *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(retain, nonatomic) NSString *mediaName; // @synthesize mediaName=_mediaName;
@property(retain, nonatomic) NSMutableDictionary *meituanAds; // @synthesize meituanAds=_meituanAds;
@property(retain, nonatomic) NSDate *createdTime; // @synthesize createdTime=_createdTime;
@property(retain, nonatomic) NSNumber *videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(retain, nonatomic) NSDictionary *sourceIconNightDict; // @synthesize sourceIconNightDict=_sourceIconNightDict;
@property(retain, nonatomic) NSDictionary *sourceIconDict; // @synthesize sourceIconDict=_sourceIconDict;
@property(retain, nonatomic) NSArray *listGroupImgDicts; // @synthesize listGroupImgDicts=_listGroupImgDicts;
@property(retain, nonatomic) NSNumber *topicGroupId; // @synthesize topicGroupId=_topicGroupId;
@property(retain, nonatomic) NSNumber *imageMode; // @synthesize imageMode=_imageMode;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *thumbnailListString; // @synthesize thumbnailListString=_thumbnailListString;
@property(retain, nonatomic) NSString *tcHeadText; // @synthesize tcHeadText=_tcHeadText;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSNumber *previousItemVersion; // @synthesize previousItemVersion=_previousItemVersion;
@property(nonatomic) unsigned long long preloadWeb; // @synthesize preloadWeb=_preloadWeb;
@property(retain, nonatomic) NSNumber *natantLevel; // @synthesize natantLevel=_natantLevel;
@property(retain, nonatomic) NSDictionary *videoPlayInfo; // @synthesize videoPlayInfo=_videoPlayInfo;
@property(retain, nonatomic) NSDictionary *videoDetailInfo; // @synthesize videoDetailInfo=_videoDetailInfo;
@property(retain, nonatomic) NSDictionary *middleImageDict; // @synthesize middleImageDict=_middleImageDict;
@property(retain, nonatomic) NSDictionary *largeImageDict; // @synthesize largeImageDict=_largeImageDict;
@property(retain, nonatomic) NSDictionary *entityWordInfoDict; // @synthesize entityWordInfoDict=_entityWordInfoDict;
@property(retain, nonatomic) NSNumber *aggrType; // @synthesize aggrType=_aggrType;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSNumber *gallaryImageCount; // @synthesize gallaryImageCount=_gallaryImageCount;
@property(retain, nonatomic) NSNumber *gallaryFlag; // @synthesize gallaryFlag=_gallaryFlag;
@property(retain, nonatomic) NSDictionary *embededAdInfo; // @synthesize embededAdInfo=_embededAdInfo;
@property(retain, nonatomic) NSNumber *isOriginal; // @synthesize isOriginal=_isOriginal;
@property(retain, nonatomic) NSNumber *ignoreWebTranform; // @synthesize ignoreWebTranform=_ignoreWebTranform;
@property(retain, nonatomic) NSArray *galleries; // @synthesize galleries=_galleries;
@property(retain, nonatomic) NSString *adPromoter; // @synthesize adPromoter=_adPromoter;
@property(retain, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(retain, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSNumber *itemVersion; // @synthesize itemVersion=_itemVersion;
@property(retain, nonatomic) NSString *imageDetailListString; // @synthesize imageDetailListString=_imageDetailListString;
@property(retain, nonatomic) NSNumber *hasVideo; // @synthesize hasVideo=_hasVideo;
@property(nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(retain, nonatomic) NSNumber *groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) NSNumber *goDetailCount; // @synthesize goDetailCount=_goDetailCount;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) NSString *displayURL; // @synthesize displayURL=_displayURL;
@property(retain, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(retain, nonatomic) NSNumber *detailNoComments; // @synthesize detailNoComments=_detailNoComments;
@property(retain, nonatomic) NSArray *zzComments; // @synthesize zzComments=_zzComments;
@property(retain, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) NSDictionary *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *cacheToken; // @synthesize cacheToken=_cacheToken;
@property(nonatomic) _Bool banComment; // @synthesize banComment=_banComment;
@property(retain, nonatomic) NSString *articleURLString; // @synthesize articleURLString=_articleURLString;
@property(nonatomic) unsigned long long articleType; // @synthesize articleType=_articleType;
@property(nonatomic) unsigned long long articleSubType; // @synthesize articleSubType=_articleSubType;
@property(retain, nonatomic) NSNumber *articleDeleted; // @synthesize articleDeleted=_articleDeleted;
@property(retain, nonatomic) NSString *abstract; // @synthesize abstract=_abstract;
@property(retain, nonatomic) NSString *primaryID; // @synthesize primaryID=_primaryID;
@property(retain, nonatomic) NSDictionary *videoExtendLink; // @synthesize videoExtendLink=_videoExtendLink;
@property(retain, nonatomic) TTAdVideoRelateAdModel *videoAdExtra; // @synthesize videoAdExtra=_videoAdExtra;
@property(retain, nonatomic) ExploreOrderedADModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) NSDictionary *relatedVideoExtraInfo; // @synthesize relatedVideoExtraInfo=_relatedVideoExtraInfo;
@property(retain, nonatomic) NSDictionary *detailUserInfo; // @synthesize detailUserInfo=_detailUserInfo;
@property(retain, nonatomic) NSDictionary *detailMediaInfo; // @synthesize detailMediaInfo=_detailMediaInfo;
- (void).cxx_destruct;
- (void)save;
- (id)videoThirdMonitorUrl;
- (_Bool)isAd;
- (void)articleForwardSuccess:(id)arg1;
- (void)blockNotification:(id)arg1;
- (void)followNotification:(id)arg1;
- (void)removeObserveNotification;
- (void)addObserveNotification;
- (void)updateFollowed:(_Bool)arg1;
- (_Bool)userIsFollowed;
- (_Bool)isFollowed;
- (id)recommendReasonForAction;
- (id)userIDForAction;
- (id)userAuthInfo;
- (id)userVerifiedContent;
- (id)userName;
- (id)userImgaeURL;
- (id)userInfoForAction;
- (_Bool)isVideoSourceHuoShan;
- (_Bool)isVideoSourceUGCVideo;
- (_Bool)isVideoSourceUGCVideoOrHuoShan;
- (_Bool)showExtendLink;
- (_Bool)hasVideoPlayInfoUrl;
- (void)settingArticleCreatedTime;
- (_Bool)isVideoUrlValid;
- (id)relatedAdId;
- (id)relatedLogExtra;
- (unsigned long long)relatedVideoType;
- (id)waterMarkURLString;
- (_Bool)isPreloadVideoEnabled;
- (id)videoSubjectID;
- (_Bool)hasVideoSubjectID;
- (_Bool)hasVideoID;
- (_Bool)hasVideoBookID;
- (_Bool)shouldDirectShowVideoSubject;
- (id)firstZzCommentMediaId;
- (id)zzCommentsIDString;
- (id)displayComment;
- (_Bool)directPlay;
- (id)sourceIconBackgroundColors;
- (id)groupModel;
- (id)imageSubjects;
- (id)listSourceIconNightModel;
- (id)listSourceIconModel;
- (void)clearCachedModels;
- (void)fixAdModel:(id)arg1;
- (_Bool)isTopic;
- (id)detailThumbImageModels;
- (id)detailLargeImageModels;
- (id)listGroupImgModels;
- (id)listMiddleImageModel;
- (id)listLargeImageModel;
- (void)bury;
- (void)digg;
- (_Bool)shouldUseCustomUserAgent;
- (_Bool)isGroupGallery;
- (_Bool)isWenDaSubject;
- (_Bool)isVideoSubject;
- (_Bool)isImageSubject;
- (_Bool)isContentFetched;
- (_Bool)isContentFetchedWithForceLoadNative:(_Bool)arg1;
- (_Bool)isClientEscapeType;
- (void)updateWithDictionary:(id)arg1;
- (id)commentContent;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

