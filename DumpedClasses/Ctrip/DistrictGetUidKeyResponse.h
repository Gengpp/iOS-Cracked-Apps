//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface DistrictGetUidKeyResponse : CTBusinessBean
{
    NSString *allianceId;
    NSString *userUniqueId;
    NSString *sid;
    NSString *uidKey;
}

@property(copy, nonatomic) NSString *uidKey; // @synthesize uidKey;
@property(copy, nonatomic) NSString *sid; // @synthesize sid;
@property(copy, nonatomic) NSString *userUniqueId; // @synthesize userUniqueId;
@property(copy, nonatomic) NSString *allianceId; // @synthesize allianceId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
