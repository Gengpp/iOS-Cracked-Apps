//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<TTDetailNatantRewardUser>, NSNumber, NSString;

@interface TTDetailNatantRewardViewModel : JSONModel
{
    NSString *_rewardOpenURL;
    NSString *_rewardListURL;
    NSNumber *_rewardNum;
    NSArray<TTDetailNatantRewardUser> *_rewardUserList;
}

+ (id)keyMapper;
+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSArray<TTDetailNatantRewardUser> *rewardUserList; // @synthesize rewardUserList=_rewardUserList;
@property(retain, nonatomic) NSNumber *rewardNum; // @synthesize rewardNum=_rewardNum;
@property(retain, nonatomic) NSString *rewardListURL; // @synthesize rewardListURL=_rewardListURL;
@property(retain, nonatomic) NSString *rewardOpenURL; // @synthesize rewardOpenURL=_rewardOpenURL;
- (void).cxx_destruct;

@end

