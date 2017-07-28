//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class FRUserRoleStructModel<Optional>, NSArray<FRUserIconStructModel><Optional>, NSArray<FRUserRoleStructModel><Optional>, NSNumber, NSNumber<Optional>, NSString<Optional>;

@interface FRUserStructModel : FRBaseModel
{
    NSNumber<Optional> *_is_friend;
    NSNumber<Optional> *_is_blocked;
    NSNumber<Optional> *_is_blocking;
    NSString<Optional> *_avatar_url;
    NSString<Optional> *_desc;
    NSNumber<Optional> *_user_verified;
    NSString<Optional> *_screen_name;
    NSNumber *_user_id;
    NSNumber<Optional> *_is_following;
    FRUserRoleStructModel<Optional> *_user_role;
    NSString<Optional> *_verified_content;
    NSArray<FRUserRoleStructModel><Optional> *_user_roles;
    NSArray<FRUserIconStructModel><Optional> *_user_role_icons;
    NSString<Optional> *_user_auth_info;
    NSString<Optional> *_schema;
}

@property(retain, nonatomic) NSString<Optional> *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString<Optional> *user_auth_info; // @synthesize user_auth_info=_user_auth_info;
@property(retain, nonatomic) NSArray<FRUserIconStructModel><Optional> *user_role_icons; // @synthesize user_role_icons=_user_role_icons;
@property(retain, nonatomic) NSArray<FRUserRoleStructModel><Optional> *user_roles; // @synthesize user_roles=_user_roles;
@property(retain, nonatomic) NSString<Optional> *verified_content; // @synthesize verified_content=_verified_content;
@property(retain, nonatomic) FRUserRoleStructModel<Optional> *user_role; // @synthesize user_role=_user_role;
@property(retain, nonatomic) NSNumber<Optional> *is_following; // @synthesize is_following=_is_following;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString<Optional> *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) NSNumber<Optional> *user_verified; // @synthesize user_verified=_user_verified;
@property(retain, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString<Optional> *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSNumber<Optional> *is_blocking; // @synthesize is_blocking=_is_blocking;
@property(retain, nonatomic) NSNumber<Optional> *is_blocked; // @synthesize is_blocked=_is_blocked;
@property(retain, nonatomic) NSNumber<Optional> *is_friend; // @synthesize is_friend=_is_friend;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

