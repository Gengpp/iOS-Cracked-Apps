//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSString;

@interface TTIMHttpChatMessageModel : JSONModel
{
    NSString *_svrMsgId;
    NSString *_deviceId;
    NSString *_fromUser;
    NSString *_toUser;
    NSString *_content;
    NSNumber *_msgType;
    NSString *_createTime;
    NSString *_originCid;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *originCid; // @synthesize originCid=_originCid;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSNumber *msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *toUser; // @synthesize toUser=_toUser;
@property(copy, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
- (void).cxx_destruct;
- (id)transformToPBModel;

@end

