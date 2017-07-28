//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTLiveMatchInfoModel, TTLiveSimpleInfoModel, TTLiveStarInfoModel, TTLiveVideoInfoModel;

@interface TTLiveBackgroundModel : NSObject
{
    TTLiveMatchInfoModel *_match;
    TTLiveStarInfoModel *_star;
    TTLiveVideoInfoModel *_video;
    TTLiveSimpleInfoModel *_simple;
}

@property(retain, nonatomic) TTLiveSimpleInfoModel *simple; // @synthesize simple=_simple;
@property(retain, nonatomic) TTLiveVideoInfoModel *video; // @synthesize video=_video;
@property(retain, nonatomic) TTLiveStarInfoModel *star; // @synthesize star=_star;
@property(retain, nonatomic) TTLiveMatchInfoModel *match; // @synthesize match=_match;
- (void).cxx_destruct;

@end

