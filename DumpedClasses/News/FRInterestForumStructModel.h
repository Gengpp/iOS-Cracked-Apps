//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class NSArray<FRInterestItemStructModel><Optional>, NSString;

@interface FRInterestForumStructModel : FRBaseModel
{
    NSString *_reason;
    NSArray<FRInterestItemStructModel><Optional> *_interest_forum_list;
}

@property(retain, nonatomic) NSArray<FRInterestItemStructModel><Optional> *interest_forum_list; // @synthesize interest_forum_list=_interest_forum_list;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

