//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString, NSString<Ignore>, NSString<Optional>;

@interface TTFollowingMergeResponseModel : JSONModel
{
    NSString *_name;
    NSString *_url;
    NSString<Optional> *_userDescription;
    NSString<Optional> *_time;
    NSNumber<Optional> *_tips;
    NSString<Optional> *_tipsCount;
    NSString *_type;
    NSString *_avatarURLString;
    NSString<Ignore> *_visitorUID;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString<Ignore> *visitorUID; // @synthesize visitorUID=_visitorUID;
@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *tipsCount; // @synthesize tipsCount=_tipsCount;
@property(retain, nonatomic) NSNumber<Optional> *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString<Optional> *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString<Optional> *userDescription; // @synthesize userDescription=_userDescription;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

