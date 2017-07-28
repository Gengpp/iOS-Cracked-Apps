//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TTInterestItemModel : TTResponseModel
{
    NSNumber<Optional> *_concern_count;
    NSString<Optional> *_desp;
    NSString<Optional> *_concern_id;
    NSString<Optional> *_concern_name;
    NSString<Optional> *_avatar_url;
    NSString<Optional> *_show_name;
    NSString<Optional> *_url;
}

+ (id)stringByReplacingNewline:(id)arg1;
+ (id)keyMapper;
@property(copy, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString<Optional> *show_name; // @synthesize show_name=_show_name;
@property(copy, nonatomic) NSString<Optional> *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(copy, nonatomic) NSString<Optional> *concern_name; // @synthesize concern_name=_concern_name;
@property(copy, nonatomic) NSString<Optional> *concern_id; // @synthesize concern_id=_concern_id;
@property(copy, nonatomic) NSString<Optional> *desp; // @synthesize desp=_desp;
@property(retain, nonatomic) NSNumber<Optional> *concern_count; // @synthesize concern_count=_concern_count;
- (void).cxx_destruct;
- (id)urlString;
- (id)descriptionString;
- (id)avatarURLString;
- (id)nameString;

@end

