//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRConcernStructModel, FRLoginUserInfoStructModel, FRTipsStructModel<Optional>, NSArray<FRConcernTabStructModel><Optional>, NSArray<FRGeneralThreadStructModel><Optional>, NSArray<FRGroupStructModel><Optional>, NSArray<FRThreadDataStructModel><Optional>, NSNumber, NSString<Optional>;

@interface FRConcernV1HomepageBrowResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    long long _has_more;
    NSNumber *_min_cursor;
    NSNumber *_max_cursor;
    FRConcernStructModel *_concern_obj;
    NSArray<FRGeneralThreadStructModel><Optional> *_finfo_list;
    NSArray<FRConcernTabStructModel><Optional> *_table;
    FRLoginUserInfoStructModel *_login_user_info;
    NSArray<FRThreadDataStructModel><Optional> *_top_thread;
    NSString<Optional> *_err_tips;
    FRTipsStructModel<Optional> *_tips;
    NSArray<FRGroupStructModel><Optional> *_news_list;
}

@property(retain, nonatomic) NSArray<FRGroupStructModel><Optional> *news_list; // @synthesize news_list=_news_list;
@property(retain, nonatomic) FRTipsStructModel<Optional> *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSArray<FRThreadDataStructModel><Optional> *top_thread; // @synthesize top_thread=_top_thread;
@property(retain, nonatomic) FRLoginUserInfoStructModel *login_user_info; // @synthesize login_user_info=_login_user_info;
@property(retain, nonatomic) NSArray<FRConcernTabStructModel><Optional> *table; // @synthesize table=_table;
@property(retain, nonatomic) NSArray<FRGeneralThreadStructModel><Optional> *finfo_list; // @synthesize finfo_list=_finfo_list;
@property(retain, nonatomic) FRConcernStructModel *concern_obj; // @synthesize concern_obj=_concern_obj;
@property(retain, nonatomic) NSNumber *max_cursor; // @synthesize max_cursor=_max_cursor;
@property(retain, nonatomic) NSNumber *min_cursor; // @synthesize min_cursor=_min_cursor;
@property(nonatomic) long long has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

