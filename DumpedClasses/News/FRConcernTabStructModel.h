//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class FRTabExtraStructModel<Optional>, NSNumber, NSNumber<Optional>, NSString, NSString<Optional>;

@interface FRConcernTabStructModel : FRBaseModel
{
    long long _table_type;
    NSString *_name;
    NSString<Optional> *_url;
    long long _need_common_params;
    NSNumber *_refresh_interval;
    FRTabExtraStructModel<Optional> *_extra;
    NSString *_sole_name;
    NSNumber<Optional> *_tab_et_status;
}

@property(retain, nonatomic) NSNumber<Optional> *tab_et_status; // @synthesize tab_et_status=_tab_et_status;
@property(retain, nonatomic) NSString *sole_name; // @synthesize sole_name=_sole_name;
@property(retain, nonatomic) FRTabExtraStructModel<Optional> *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSNumber *refresh_interval; // @synthesize refresh_interval=_refresh_interval;
@property(nonatomic) long long need_common_params; // @synthesize need_common_params=_need_common_params;
@property(retain, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long table_type; // @synthesize table_type=_table_type;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

