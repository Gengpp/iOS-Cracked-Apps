//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRCommentBrowStructModel, FRForumStructModel, FRLoginUserInfoStructModel, FRThreadDataStructModel, NSNumber, NSString<Optional>;

@interface FRTtdiscussV1ThreadDetailResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    FRThreadDataStructModel *_thread;
    FRCommentBrowStructModel *_comments;
    FRCommentBrowStructModel *_hot_comments;
    FRLoginUserInfoStructModel *_login_user_info;
    FRForumStructModel *_forum_info;
    NSString<Optional> *_err_tips;
    NSString<Optional> *_openurl;
}

@property(retain, nonatomic) NSString<Optional> *openurl; // @synthesize openurl=_openurl;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) FRForumStructModel *forum_info; // @synthesize forum_info=_forum_info;
@property(retain, nonatomic) FRLoginUserInfoStructModel *login_user_info; // @synthesize login_user_info=_login_user_info;
@property(retain, nonatomic) FRCommentBrowStructModel *hot_comments; // @synthesize hot_comments=_hot_comments;
@property(retain, nonatomic) FRCommentBrowStructModel *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) FRThreadDataStructModel *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

