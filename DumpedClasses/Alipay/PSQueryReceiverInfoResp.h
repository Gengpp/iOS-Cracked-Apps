//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSBaseRespVO.h"

@class NSString;

@interface PSQueryReceiverInfoResp : PSBaseRespVO
{
    NSString *_userAccount;
    NSString *_userID;
    NSString *_userName;
    NSString *_headUrl;
    NSString *_limitAmount;
    NSString *_receiveFlag;
    NSString *_receiveMemo;
    NSString *_userNicklName;
    NSString *_userRealName;
    NSString *_userRealNameForCollect;
}

@property(retain, nonatomic) NSString *userRealNameForCollect; // @synthesize userRealNameForCollect=_userRealNameForCollect;
@property(retain, nonatomic) NSString *userRealName; // @synthesize userRealName=_userRealName;
@property(retain, nonatomic) NSString *userNicklName; // @synthesize userNicklName=_userNicklName;
@property(retain, nonatomic) NSString *receiveMemo; // @synthesize receiveMemo=_receiveMemo;
@property(retain, nonatomic) NSString *receiveFlag; // @synthesize receiveFlag=_receiveFlag;
@property(retain, nonatomic) NSString *limitAmount; // @synthesize limitAmount=_limitAmount;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *userAccount; // @synthesize userAccount=_userAccount;
- (void).cxx_destruct;

@end
