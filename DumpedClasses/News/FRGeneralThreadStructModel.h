//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class FRInterestForumStructModel<Optional>, FRMoMoAdStructModel<Optional>, FRRelatedForumStructModel<Optional>, FRThreadDataStructModel<Optional>;

@interface FRGeneralThreadStructModel : FRBaseModel
{
    FRThreadDataStructModel<Optional> *_thread;
    FRMoMoAdStructModel<Optional> *_momo_ad;
    FRInterestForumStructModel<Optional> *_interest_forum;
    FRRelatedForumStructModel<Optional> *_related_forum;
}

@property(retain, nonatomic) FRRelatedForumStructModel<Optional> *related_forum; // @synthesize related_forum=_related_forum;
@property(retain, nonatomic) FRInterestForumStructModel<Optional> *interest_forum; // @synthesize interest_forum=_interest_forum;
@property(retain, nonatomic) FRMoMoAdStructModel<Optional> *momo_ad; // @synthesize momo_ad=_momo_ad;
@property(retain, nonatomic) FRThreadDataStructModel<Optional> *thread; // @synthesize thread=_thread;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

