//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class NSArray<FRForumItemStructModel><Optional>, NSString;

@interface FRForumClassStructModel : FRBaseModel
{
    NSString *_class_name;
    NSArray<FRForumItemStructModel><Optional> *_forum_list;
}

@property(retain, nonatomic) NSArray<FRForumItemStructModel><Optional> *forum_list; // @synthesize forum_list=_forum_list;
@property(retain, nonatomic) NSString *class_name; // @synthesize class_name=_class_name;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

