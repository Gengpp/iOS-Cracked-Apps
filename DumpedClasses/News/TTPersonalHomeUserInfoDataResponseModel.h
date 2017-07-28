//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSArray<TTPersonalHomeUserInfoDataBottomItemResponseModel>, NSArray<TTPersonalHomeUserInfoDataItemResponseModel>, NSNumber, NSString, TTPersonalHomeStarUserDataItemResponseModel;

@interface TTPersonalHomeUserInfoDataResponseModel : TTResponseModel
{
    NSNumber *_is_followed;
    NSString *_current_user_id;
    NSString *_verified_agency;
    NSNumber *_is_following;
    NSArray<TTPersonalHomeUserInfoDataItemResponseModel> *_top_tab;
    NSArray<TTPersonalHomeUserInfoDataBottomItemResponseModel> *_bottom_tab;
    TTPersonalHomeStarUserDataItemResponseModel *_star_chart;
    NSNumber *_is_blocking;
    NSString *_user_id;
    NSString *_area;
    NSNumber *_user_verified;
    NSString *_share_url;
    NSNumber *_show_private_letter;
    NSNumber *_followers_count;
    NSNumber *_status;
    NSString *_media_id;
    NSNumber *_media_type;
    NSString *_desc;
    NSString *_bg_img_url;
    NSString *_verified_content;
    NSString *_screen_name;
    NSString *_apply_auth_entry_title;
    NSNumber *_visit_count_recent;
    NSNumber *_is_blocked;
    NSString *_big_avatar_url;
    NSString *_name;
    NSNumber *_gender;
    NSString *_industry;
    NSString *_ugc_publish_media_id;
    NSString *_avatar_url;
    NSNumber *_followings_count;
    NSString *_user_auth_info;
    NSNumber *_article_limit_enable;
    NSString *_apply_auth_url;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString *apply_auth_url; // @synthesize apply_auth_url=_apply_auth_url;
@property(retain, nonatomic) NSNumber *article_limit_enable; // @synthesize article_limit_enable=_article_limit_enable;
@property(copy, nonatomic) NSString *user_auth_info; // @synthesize user_auth_info=_user_auth_info;
@property(retain, nonatomic) NSNumber *followings_count; // @synthesize followings_count=_followings_count;
@property(copy, nonatomic) NSString *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(copy, nonatomic) NSString *ugc_publish_media_id; // @synthesize ugc_publish_media_id=_ugc_publish_media_id;
@property(copy, nonatomic) NSString *industry; // @synthesize industry=_industry;
@property(retain, nonatomic) NSNumber *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *big_avatar_url; // @synthesize big_avatar_url=_big_avatar_url;
@property(retain, nonatomic) NSNumber *is_blocked; // @synthesize is_blocked=_is_blocked;
@property(retain, nonatomic) NSNumber *visit_count_recent; // @synthesize visit_count_recent=_visit_count_recent;
@property(copy, nonatomic) NSString *apply_auth_entry_title; // @synthesize apply_auth_entry_title=_apply_auth_entry_title;
@property(copy, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(copy, nonatomic) NSString *verified_content; // @synthesize verified_content=_verified_content;
@property(copy, nonatomic) NSString *bg_img_url; // @synthesize bg_img_url=_bg_img_url;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSNumber *media_type; // @synthesize media_type=_media_type;
@property(copy, nonatomic) NSString *media_id; // @synthesize media_id=_media_id;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *followers_count; // @synthesize followers_count=_followers_count;
@property(retain, nonatomic) NSNumber *show_private_letter; // @synthesize show_private_letter=_show_private_letter;
@property(copy, nonatomic) NSString *share_url; // @synthesize share_url=_share_url;
@property(retain, nonatomic) NSNumber *user_verified; // @synthesize user_verified=_user_verified;
@property(copy, nonatomic) NSString *area; // @synthesize area=_area;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSNumber *is_blocking; // @synthesize is_blocking=_is_blocking;
@property(retain, nonatomic) TTPersonalHomeStarUserDataItemResponseModel *star_chart; // @synthesize star_chart=_star_chart;
@property(retain, nonatomic) NSArray<TTPersonalHomeUserInfoDataBottomItemResponseModel> *bottom_tab; // @synthesize bottom_tab=_bottom_tab;
@property(retain, nonatomic) NSArray<TTPersonalHomeUserInfoDataItemResponseModel> *top_tab; // @synthesize top_tab=_top_tab;
@property(retain, nonatomic) NSNumber *is_following; // @synthesize is_following=_is_following;
@property(copy, nonatomic) NSString *verified_agency; // @synthesize verified_agency=_verified_agency;
@property(copy, nonatomic) NSString *current_user_id; // @synthesize current_user_id=_current_user_id;
@property(retain, nonatomic) NSNumber *is_followed; // @synthesize is_followed=_is_followed;
- (void).cxx_destruct;

@end

