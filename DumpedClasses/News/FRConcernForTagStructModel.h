//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class NSNumber, NSString;

@interface FRConcernForTagStructModel : FRBaseModel
{
    NSString *_concern_id;
    NSString *_name;
    NSString *_avatar_url;
    NSNumber *_concern_count;
    NSNumber *_discuss_count;
    NSNumber *_concern_time;
    NSString *_desc;
    NSNumber *_status;
}

@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSNumber *concern_time; // @synthesize concern_time=_concern_time;
@property(retain, nonatomic) NSNumber *discuss_count; // @synthesize discuss_count=_discuss_count;
@property(retain, nonatomic) NSNumber *concern_count; // @synthesize concern_count=_concern_count;
@property(retain, nonatomic) NSString *avatar_url; // @synthesize avatar_url=_avatar_url;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *concern_id; // @synthesize concern_id=_concern_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

