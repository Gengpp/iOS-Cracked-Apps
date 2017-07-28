//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString;

@interface TTUserDataResponse : JSONModel
{
    NSString *_userId;
    NSString *_name;
    NSString *_avatarUrl;
    NSString *_screenName;
    NSNumber<Optional> *_isBlocking;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSNumber<Optional> *isBlocking; // @synthesize isBlocking=_isBlocking;
@property(copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)transformToUserData;

@end

