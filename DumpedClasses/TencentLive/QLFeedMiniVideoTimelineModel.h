//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPageDataBaseModel.h"

@class MoabCache, NSString;

@interface QLFeedMiniVideoTimelineModel : QLPageDataBaseModel
{
    MoabCache *_cahce;
    NSString *_vid;
    NSString *_cid;
    NSString *_lid;
    NSString *_fantuanId;
}

@property(retain, nonatomic) NSString *fantuanId; // @synthesize fantuanId=_fantuanId;
@property(retain, nonatomic) NSString *lid; // @synthesize lid=_lid;
@property(retain, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void).cxx_destruct;
- (long long)checkMomentPublishItemExist:(id)arg1 publishItem:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (id)initWithVid:(id)arg1 cid:(id)arg2 lid:(id)arg3 fantuanId:(id)arg4;

@end

